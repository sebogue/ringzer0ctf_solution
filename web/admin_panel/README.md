En interceptant les requêtes on tombe sur une réponse :
<input type="hidden" class="form-control" value="yesIwantaflag" name="showflagforme" />

Ainsi lors de la requête GET au lieu de ?error, on a qu'à changer ça pour ?showflagforme=yesIwantaflag

On intercepte la réponse à cette requête puis on obtient le flag:
FLAG-Sfi8sZgAK0ddMjVSOQU2rMfUWS