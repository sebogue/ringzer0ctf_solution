Ici il faut faire une injection NoSQL.
Avec burpsuite, on peut intercepter la requête et la modifier comme suit:

username[$ne]=&password[$ne]=

Cette injection se traduit par username not equal "" et password not equal ""
