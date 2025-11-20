import base64, binascii, random

class MT19937Recover:
    """Reverses the Mersenne Twister based on 624 observed outputs.

    The internal state of a Mersenne Twister can be recovered by observing
    624 generated outputs of it. However, if those are not directly
    observed following a twist, another output is required to restore the
    internal index.

    See also https://en.wikipedia.org/wiki/Mersenne_Twister#Pseudocode .

    """
    def unshiftRight(self, x, shift):
        res = x
        for i in range(32):
            res = x ^ res >> shift
        return res

    def unshiftLeft(self, x, shift, mask):
        res = x
        for i in range(32):
            res = x ^ (res << shift & mask)
        return res

    def untemper(self, v):
        """ Reverses the tempering which is applied to outputs of MT19937 """

        v = self.unshiftRight(v, 18)
        v = self.unshiftLeft(v, 15, 0xefc60000)
        v = self.unshiftLeft(v, 7, 0x9d2c5680)
        v = self.unshiftRight(v, 11)
        return v

    def go(self, outputs, forward=True):
        """Reverses the Mersenne Twister based on 624 observed values.

        Args:
            outputs (List[int]): list of >= 624 observed outputs from the PRNG.
                However, >= 625 outputs are required to correctly recover
                the internal index.
            forward (bool): Forward internal state until all observed outputs
                are generated.

        Returns:
            Returns a random.Random() object.
        """

        result_state = None

        assert len(outputs) >= 624       # need at least 624 values

        ivals = []
        for i in range(624):
            ivals.append(self.untemper(outputs[i]))

        if len(outputs) >= 625:
            # We have additional outputs and can correctly
            # recover the internal index by bruteforce
            challenge = outputs[624]
            for i in range(1, 626):
                state = (3, tuple(ivals+[i]), None)
                r = random.Random()
                r.setstate(state)

                if challenge == r.getrandbits(32):
                    result_state = state
                    break
        else:
            # With only 624 outputs we assume they were the first observed 624
            # outputs after a twist -->  we set the internal index to 624.
            result_state = (3, tuple(ivals+[624]), None)

        rand = random.Random()
        rand.setstate(result_state)

        if forward:
            for i in range(624, len(outputs)):
                assert rand.getrandbits(32) == outputs[i]

        return rand

if __name__ == "__main__":
    with open('message.txt', 'r') as file:
        message = file.read().replace('---Total Secure Message Encrypter V1.0 ---\n','').replace(' ++ Format: ringzer0team ++\n','').replace('\n\n---End Total Secure Message Encrypter Message---','')
    message = base64.b64decode(message)

    Cypher = message[message.find(b'5d')+2:].decode()
    print('Cypher: {}'.format(Cypher))

    Entropy = ([int(i[:-1]) for i in binascii.unhexlify(message[2:(message.find(b'5d'))]).split(b', ')])
    
    r = MT19937Recover().go(Entropy)
    Key = ''
    while(len(Key) < len(str(Cypher))): 
        Key += str(r.getrandbits(32))
    print('Key: ', Key)
    print('XORed: ', hex(int(Cypher) ^ int(Key))) 
    print('Flag: ', bytes.fromhex(hex(int(Cypher) ^ int(Key))[2:]).decode('utf-8'))