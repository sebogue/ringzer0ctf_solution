var k = new Array(176,214,205,246,264,255,227,237,242,244,265,270,283);
var u = "administrator";
var p_arr = [];
var t = true;

if(u == "administrator") {
    for(i = 0; i < u.length; i++) {
        // u.charCodeAt(i)+p.charCodeAt(i)+i*10 = k[i] =>
        // p.charCodeAt(i) = k[i]-i*10-u.charCodeAt(i) =>
        // p[i] = fromCharCode(k[i]-i*10-u.charCodeAt(i))
        p_arr.push(k[i]-i*10-u.charCodeAt(i))
    }
    console.log(String.fromCharCode(...p_arr))
} 