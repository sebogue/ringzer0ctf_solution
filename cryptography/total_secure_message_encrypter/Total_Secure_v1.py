#!/usr/bin/python

import random

def Generate_Entropy(var):
	print("Generating Entropy Proofs...")
	proof = str([var.getrandbits(32) for i in range(700)]).encode('hex')
	return proof

def Encrypt(message):
	print("Encrypting Message...")
	message = int(message.encode('hex'), 16);key = ''
	while(len(key) <= len(str(message))):
		key += str(Crypt.getrandbits(32))
	return int(key) ^ message

#Get Password
passw = raw_input("Password: ")
Crypt = random.Random(int(passw.encode('hex'), 16))
Entropy = Generate_Entropy(Crypt)

#Get Message and Encrypt It
msg = raw_input("Message To Encrypt: ")
coded = str((str(Entropy)+str(Encrypt(msg))).encode('base64'))

#Build Encrypted Message
print("---Total Secure Message Encrypter V1.0 ---")
print("        ++ Format: ringzer0team ++")
print(coded)
print("---End Total Secure Message Encrypter Message---")