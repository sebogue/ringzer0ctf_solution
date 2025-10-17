import re
import paramiko
import time

host = "challenges.ringzer0ctf.com"
port = 10143
user = "sudoku"
password = "dg43zz6R0E"

client = paramiko.SSHClient()
client.set_missing_host_key_policy(paramiko.AutoAddPolicy())
client.connect(host, port=port, username=user, password=password)

# ouvrir un canal sans PTY
chan = client.get_transport().open_session()
chan.invoke_shell()

time.sleep(1)  # laisse le serveur envoyer la bannière

def get_output(wait=1):
    out = ""
    t0 = time.time()
    while time.time() - t0 < wait:
        while chan.recv_ready():
            out += chan.recv(4096).decode()
        time.sleep(0.05)
    return out

def get_grid():
    output = get_output()
    pattern = r"(\+---\+---\+---\+---\+---\+---\+---\+---\+---\+.*\+---\+---\+---\+---\+---\+---\+---\+---\+---\+)"
    match = re.search(pattern, output, re.DOTALL)
    grid_str = match.group(1).split('\n')
    grid = []
    row_idx = 0
    for i in range(1, len(grid_str), 2):
        row = grid_str[i].split('|')[1:10]
        parsed_row = []
        for cell in row:
            cell = cell.strip()
            if cell == "":
                parsed_row.append(None)
            else:
                parsed_row.append(int(cell))
        grid.append(parsed_row)
    return grid

def is_valid(board, row, col, num):
    # vérifier ligne
    if num in board[row]:
        return False
    # vérifier colonne
    if num in [board[r][col] for r in range(9)]:
        return False
    # vérifier carré 3x3
    start_row, start_col = 3 * (row // 3), 3 * (col // 3)
    for r in range(start_row, start_row + 3):
        for c in range(start_col, start_col + 3):
            if board[r][c] == num:
                return False
    return True

def solve_sudoku(board):
    for r in range(9):
        for c in range(9):
            if board[r][c] is None:
                for num in range(1, 10):
                    if is_valid(board, r, c, num):
                        board[r][c] = num
                        if solve_sudoku(board):
                            return True
                        board[r][c] = None  # backtrack
                return False  # aucun chiffre valide
    return True  # toutes les cases remplies

def sendAnswer(grid):
    answer = ",".join(str(v) for row in grid for v in row)
    chan.send(answer + "\n")
    time.sleep(0.5)
    print(get_output(2))

if __name__=="__main__":
    grid = get_grid()
    solve_sudoku(grid)
    sendAnswer(grid)
    
