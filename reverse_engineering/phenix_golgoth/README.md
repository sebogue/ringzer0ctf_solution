Fichier PE32 executable (GUI) Intel 80386 Mono/.Net assembly, for MS Windows

J'utilise dnspy pour reconstituer les fichiers de l'exécutable.

Beaucoup de code obfusqué.

Dans la classe CrackMePhenix, la méthode button1_click() a cette section:

```c#
if (与ḔҼЉФおҶӨ革いϚӨбсьҍҍḒьかけきḆうгҶезうтяḆЊいい難қ難.WUoyAPCaGkMaNNOIBwOfgGeRLVXyjUDTLplw(((Control)txtboxToPassword).Text)){
    passWisFound = true;
    MessageBox.Show(Resources.successLbl, "Success Box", (MessageBoxButtons)0);
    string text = EncryptAutonomous3DES(Resources.hf12016, ((Control)txtboxToPassword).Text);
    ((Control)txtboxToPassword).Text = text;
    Clipboard.SetText(text, (TextDataFormat)1);
}
```

Pour entrer dans ce if, il faut return true à la fonction WUoyAPCaGkMaNNOIBwOfgGeRLVXyjUDTLplw
```c#
public static bool WUoyAPCaGkMaNNOIBwOfgGeRLVXyjUDTLplw(string Ḉ骨ωけьЀωебЗяḈめ争おқ争тьふはみひḔаЀЀЌӧсӔҍӧсおкえккоえЀӧеҞωかḔЊӔほҞгььзесみḔӧ事Ҽ六いиまӧз予ЉҘくЌḈいЗいсЗеаうもаҘḔЊо与け与с争こкϐひ与も){
    string text = oШϟえϐくқϟえい頂босуẦЦбФώく与亊いϟϐЏл予ҼϚеきЉЌьḆаほへ.DownloadString(ЗきӨяоемḆбе亊くωзけめбр頂ШЗえϟḈқ五длЏолẦḒώϚлл革ӧЏ四ъҶẦрҍь頂Љг骨けФま与оϐけ四ώбь六Шほ六ωЗрめほӔ五もиえз難頂ь五いьяひ難ḒЌḒひ事ЖほЗかбӧ骨еЉзб革ωШсωЦ骨змωЊḒώえḒみはうШもϟЦҞсеϟ六ЉЦ四о争ωъьоϟこҞおϚлЊ骨かҼоӧқаЗ予кҶḒозрӔЊҶへきЌл四ほт六ЌЊ六ЗもきḆ五五かくωώえлиはは六ъЌЉоめааЖҶ五ӧえо.fHex());
    string[] array = 六与еЖけӧひЖ骨めЗうЗө事いео四ひгоӔбうҶЉозӔеめ六дз骨頂Ҷиへ.ϐӧдϐほ争Ж与Цほ五кЊл骨こけзḈえзはөъяひЀЏҼへлиҶми五ひめえ.Split(new char[1] { '-' });
    if (long.TryParse(Ḉ骨ωけьЀωебЗяḈめ争おқ争тьふはみひḔаЀЀЌӧсӔҍӧсおкえккоえЀӧеҞωかḔЊӔほҞгььзесみḔӧ事Ҽ六いиまӧз予ЉҘくЌḈいЗいсЗеаうもаҘḔЊо与け与с争こкϐひ与も, out var result) && array[4] == result.Ҷみ事Ҙふ六Ầきϐま事ззоあきуかуḔЊ争ЀЖзめ事оЖҶлелほҘええ与Ө())
    {
        return true;
    }
    return false;
}
```
La première chose, c'est le DownloadString qui pointe sur un URL qui ne fonctionne pas ...

Techniquement ce string text on s'en fou puisqu'il est pas utilisé nul part d'autre dans la méthode. Donc j'ai patché le code dans dnspy pour l'enlever complètement.

Pour retourner true, ce qu'on écrit dans le champ/box (ce qui est passé en paramètre à WUoyAPCaGkMaNNOIBwOfgGeRLVXyjUDTLplw) est parsed en un long
PUIS
la 5e string du array doit être = à ce nombre en base36, ce array d'ailleurs est un split sur '-' du GUID suivant 4cd49c48-fb59-4265-b3cc-c53882856e31 (défini dans AssemblyInfo.cs)

base36 je l'ai guess en regardant la méthode result.Ҷみ事Ҙふ六Ầきϐま事ззоあきуかуḔЊ争ЀЖзめ事оЖҶлелほҘええ与Ө()

Donc,
base36(parseLong(mon_input)) doit être égal à c53882856e31

En base 10 c53882856e31 = 1598069118816088525

J'ai relancé mon code patché et entré 1598069118816088525, puis j'ai obtenu dans mon clip board ceci:
S5fpKIH0Qsjx4ZcJwONbUoQAzvDaHfGZ37p5LVtlgMJrDiA6dRSS+g==

Les instructions indiquent de retourner le md5 de S5fpKIH0Qsjx4ZcJwONbUoQAzvDaHfGZ37p5LVtlgMJrDiA6dRSS+g== soit le flag:

b97d196b12c6f96c7dc480c81f3045a5