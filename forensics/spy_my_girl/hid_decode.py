#!/usr/bin/env python3
KEYMAP = {
    0x04:'a',0x05:'b',0x06:'c',0x07:'d',0x08:'e',0x09:'f',0x0a:'g',0x0b:'h',
    0x0c:'i',0x0d:'j',0x0e:'k',0x0f:'l',0x10:'m',0x11:'n',0x12:'o',0x13:'p',
    0x14:'q',0x15:'r',0x16:'s',0x17:'t',0x18:'u',0x19:'v',0x1a:'w',0x1b:'x',
    0x1c:'y',0x1d:'z',
    0x1e:'1',0x1f:'2',0x20:'3',0x21:'4',0x22:'5',0x23:'6',0x24:'7',0x25:'8',
    0x26:'9',0x27:'0',
    0x28:'\n',0x2c:' ',0x2d:'-',0x2e:'=',0x2f:'[',0x30:']',0x31:'\\',0x33:';',0x34:"'",0x36:',',0x37:'.',0x38:'/'
}
SHIFT_MAP = {
    'a':'A','b':'B','c':'C','d':'D','e':'E','f':'F','g':'G','h':'H','i':'I','j':'J','k':'K','l':'L','m':'M','n':'N','o':'O','p':'P','q':'Q','r':'R','s':'S','t':'T','u':'U','v':'V','w':'W','x':'X','y':'Y','z':'Z',
    '1':'!','2':'@','3':'#','4':'$','5':'%','6':'^','7':'&','8':'*','9':'(','0':')',
    '-':'_','=':'+','[':'{',']':'}','\\':'|',';':':',"'":'"',',':'<','.':'>','/':'?'
}

def decode_line(hexline):
    hx = hexline.strip()
    # remove non hex
    hx = ''.join(c for c in hx if c in '0123456789abcdefABCDEF')
    # ensure even
    if len(hx)%2!=0: return ''
    b = bytes.fromhex(hx)
    # typical HID report: modifier,reserved, k1,k2,k3,k4,k5,k6
    out = ''
    if len(b) < 3:
        return ''
    modifier = b[0]
    # keys start at index 2
    keys = b[2:]
    for k in keys:
        if k == 0:
            continue
        ch = KEYMAP.get(k, '?')
        if modifier & 0x02 or modifier & 0x20 or modifier & 0x40 or modifier & 0x10: # left shift/right shift or alt? basic: 0x02 is left shift on some stacks; adjust if needed
            # use SHIFT_MAP if available
            ch = SHIFT_MAP.get(ch, ch.upper() if ch.isalpha() else ch)
        out += ch
    return out

if __name__ == '__main__':
    import sys
    f = 'leftovers.lines'
    if len(sys.argv)>1:
        f = sys.argv[1]
    with open(f,'r',encoding='utf-8',errors='ignore') as fh:
        for line in fh:
            # extract the hex after colon
            if 'Leftover Capture Data:' in line:
                hexpart = line.split('Leftover Capture Data:')[-1].strip()
                txt = decode_line(hexpart)
                if txt:
                    print(txt, end='')
    print()
