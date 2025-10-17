```javascript
$(".c_submit").click(function(event) {
    event.preventDefault();
    var u = $("#cpass").val();
    var k = $("#cuser").val();
    var func = "\x2B\x09\x4A\x03\x49\x0F\x0E\x14\x15\x1A\x00\x10\x3F\x1A\x71\x5C\x5B\x5B\x00\x1A\x16\x38\x06\x46\x66\x5A\x55\x30\x0A\x03\x1D\x08\x50\x5F\x51\x15\x6B\x4F\x19\x56\x00\x54\x1B\x50\x58\x21\x1A\x0F\x13\x07\x46\x1D\x58\x58\x21\x0E\x16\x1F\x06\x5C\x1D\x5C\x45\x27\x09\x4C\x1F\x07\x56\x56\x4C\x78\x24\x47\x40\x49\x19\x0F\x11\x1D\x17\x7F\x52\x42\x5B\x58\x1B\x13\x4F\x17\x26\x00\x01\x03\x04\x57\x5D\x40\x19\x2E\x00\x01\x17\x1D\x5B\x5C\x5A\x17\x7F\x4F\x06\x19\x0A\x47\x5E\x51\x59\x36\x41\x0E\x19\x0A\x53\x47\x5D\x58\x2C\x41\x0A\x04\x0C\x54\x13\x1F\x17\x60\x50\x12\x4B\x4B\x12\x18\x14\x42\x79\x4F\x1F\x56\x14\x12\x56\x58\x44\x27\x4F\x19\x56\x49\x16\x1B\x16\x14\x21\x1D\x07\x05\x19\x5D\x5D\x47\x52\x60\x46\x4C\x1E\x1D\x5F\x5F\x1C\x15\x7E\x0B\x0B\x00\x49\x51\x5F\x55\x44\x31\x52\x45\x13\x1B\x40\x5C\x46\x10\x7C\x38\x10\x19\x07\x55\x13\x44\x56\x31\x1C\x15\x19\x1B\x56\x13\x47\x58\x30\x1D\x1B\x58\x55\x1D\x57\x5D\x41\x7C\x4D\x4B\x4D\x49\x4F";
    buf = "";
    if(k.length == 9) {
        for(i = 0, j = 0; i < func.length; i++) {
            c = parseInt(func.charCodeAt(i));
            c = c ^ k.charCodeAt(j);
            if(++j == k.length) {
                j = 0;
            }
            buf += eval('"' + a(x(c)) + '"');
        }
        eval(buf);
    } else {
        $("#cresponse").html("<div class='alert alert-danger'>Wrong password sorry.</div>");
    }
});

function a(h) {
    if(h.length != 2) {
        h = "\x30" + h;
    }
    return "\x5c\x78" + h;
}

function x(d) {
    if(d < 0) {
        d = 0xFFFFFFFF + d + 1;
    }
    return d.toString(16).toUpperCase();
}
```

J'ai directement remarqué qu'il manquait un document.location ... (présent dans les numéros précédents). Ça vérifiait si mot_de_passe == ce_que_ca_doit_etre. Sachant que mot_de_passe est la variable u
if(u == "...........) {
    if(document.location.href.indexOf("?p=") == -1) {
        document.location = document.location.href + "?p=" + p;
    }
}
Je savais qu'il fallait remplacer dans mon script why_not_be_more_secure.js le k pour `if(u == " `

Ensuite je print le résultat du buffer et récupère que les 9 premiers caractères qui seront mon prochan k : Bobvi2347
afin de reconstruire le code.

Essayons de voir maintenant dans le sens inverse avec k = "Bobvi2347"

On obtient :

```javascript
if(u == "XorIsCoolButNotUnbreakable") { if(document.location.href.indexOf("?p=") == -1) { document.location = document.location.href + "?p=" + u; } } else {  $("#cresponse").html("<div class='error'>Wrong password sorry.</div>"); }
```
donc le mot de passe est XorIsCoolButNotUnbreakable et le username est Bobvi2347