process.stdin.resume();

/***
Utility
***/

function write(data) {
	process.stdout.write(data);
}

function goto(state) {
	if (CurrentState && typeof CurrentState.OnExit == "function") {
		CurrentState.OnExit();
	}

	CurrentState = state;

	if (state && typeof state.OnEnter == "function") {
		state.OnEnter();
	}
}

function rand() {
	return "Unknown #" + ((Math.random()*10000)|0)
}

// TODO : fix the merge function (see: https://hackerone.com/reports/310443)
// I don't think it's exploitable here so no rush.
function merge(a, b) {
	for (var attr in b) {
		if (typeof a[attr] == "object" && typeof b[attr] == "object") {
			merge(a[attr], b[attr]);
		} else {
			a[attr] = b[attr];
		}
	}
	return a;
}

function NO_OP() {

}

var SpellChecker = {
	"fr" : { 
		"simple" : function (text) { 
			return text; 
		}
	},
	"en" : { 
		"simple" : function (text) { 
			return text
				.replace(/acheive/g, "achieve") 
				.replace(/appearence/g, "appearance") 
				.replace(/comming/g, "coming")
				.replace(/definately/g, "definitely")
				.replace(/finaly/g, "finally")
				.replace(/immediatly/g, "immediately")
				.replace(/occurence/g, "occurrence")
				.replace(/resistence/g, "resistance")
				.replace(/truely/g, "truly");
		} 
	}
}

function spellcheck(obj, options) {
	var spellcheckLang = SpellChecker[options.lang] || {};
	var checker = spellcheckLang[options.spellcheck] || function (a) { return a; };
	
	for (var attr in obj) {
		if (typeof obj[attr] == "object") {
			spellcheck(obj[attr], options);
		}

		if (typeof obj[attr] == "string") {
			obj[attr] = checker(obj[attr]);
		}
	}
}

/***
State
***/

var CurrentState = null;
var State = {};
var Contacts = [];
var NewContact = false;

// Menu
State.MainMenu = {};
State.MainMenu.Process = function (data) {
	var selection = parseInt(data.replace(/[\n\r ]/g, ""), 10);	

	switch (selection) {
		case 1: goto(State.AddNewContact); break;
		case 2: goto(State.ListContact); break;
		case 3: goto(State.SpellcheckContact); break;
		case 4: goto(State.Exit); break;
		default:
			write("Invalid selection \n");
			write("#> ");
			break;
	}
};

State.MainMenu.OnEnter = function () {
	write("-- \n");
	write("-- Menu \n");
	write("-- \n");
	write("-- 1) Add new contact \n");
	write("-- 2) List contact \n");
	write("-- 3) Spellcheck contact \n");
	write("-- 4) Exit \n");
	write("\n");
	write("#> ");
};

State.MainMenu.OnExit = NO_OP;


// New contact
State.AddNewContact = {};
State.AddNewContact.OnEnter = function () {
	write("Please enter the data of the contact in JSON format.\n");
	write('Ex.: {"name":"Mark Zoidberg","description":"Super nice guy !"}\n');
	write("Type DONE to exit.\n");
	write("#> ");

	NewContact = false;
};

State.AddNewContact.Process = function (data) {
	if (data.substr(0, 4) === "DONE") {
		goto(State.MainMenu);
		return;
	}

	var info = JSON.parse(data);

	if (!info) {
		write("Invalid JSON data. \n");
		write("#> ");
		return;
	}

	var creationTime = new Date().getTime();
	var contact = {
		"options" : { 
			"type" : "JSON",
			"date" : creationTime,
			"lang" : "en",
			"spellcheck" : "simple"
		},
		"data" : info
	};

	info.name = info.name || rand(); 
	Contacts[info.name] = contact; 
	NewContact = true;
	goto(State.MainMenu);
	
};

State.AddNewContact.OnExit = function () {
	write("\n");
	if (NewContact) {
		write("Contact added successfully ... \n");
	} else {
		write("No contact was added ... \n");
	}
	write("\n");
};

// List contact
State.ListContact = {};
State.ListContact.OnEnter = function () {
	write("-- \n");
	write("-- List of contacts \n");
	write("-- \n");
	write("\n");

	for (var contactName in Contacts) {
		info = Contacts[contactName].data;
		write("-----------------\n");
		write("Name : " + info.name + " \n");
		write("Description : " + info.description + "\n");
	}

	write("-----------------\n");
	goto(State.MainMenu);
};

State.ListContact.OnExit = NO_OP;

// Spellcheck 
State.SpellcheckContact = {};
State.SpellcheckContact.OnEnter = function () {
	write("Please enter the name of contact you want to spellcheck : \n");
	write("#> ");
};

State.SpellcheckContact.Process = function (data) {
	if (data.substr(0, 4) === "DONE") {
		goto(State.MainMenu);
		return;
	}

	var selection = data.replace(/[\n\r]+$/g, ""); 
	var info = Contacts[selection];
	if (!info) {
		write("Contact doesn't exists ! \n");
		write("#> ");
		return;
	}

	var defaultOptions = { "lang" : "en", "spellcheck" : "simple" };
	var options = merge(defaultOptions, info.options); 
	spellcheck(info.data, options);

	write("Spellcheck finished ! \n");
	goto(State.MainMenu);
};

State.SpellcheckContact.OnExit = NO_OP;

// Exit
State.Exit = {};
State.Exit.OnEnter = function (data) {
	process.exit();
};

State.Exit.Process = NO_OP;
State.Exit.OnExit  = NO_OP;


/***
Processing
***/

process.stdin.on('data', function(data) { 
	if (CurrentState && CurrentState.Process) { 
		CurrentState.Process(data.toString()); 
	}
});

process.stdout.on('error', function(err) {
	return process.exit();
});

write("================================\n");
write("Welcome to Mars phonebook (BETA)\n");
write("================================\n")

goto(State.MainMenu);
