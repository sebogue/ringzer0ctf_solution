const CryptoJS = require("crypto-js");

var k = CryptoJS.SHA256("\x93\x39\x02\x49\x83\x02\x82\xf3\x23\xf8\xd3\x13\x37");
var keyHex = k.toString().substring(0,32);
var ivHex  = k.toString().substring(32,64);
console.log("keyHex:", keyHex);
console.log("ivHex: ", ivHex);

var cipherB64 = "ob1xQz5ms9hRkPTx+ZHbVg==";
var dec = CryptoJS.AES.decrypt(cipherB64,
    CryptoJS.enc.Hex.parse(keyHex),
    { iv: CryptoJS.enc.Hex.parse(ivHex) }
);
var p = dec.toString(CryptoJS.enc.Utf8);
console.log("p =", p);