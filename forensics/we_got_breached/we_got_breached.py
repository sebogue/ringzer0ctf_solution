import re

file_path = 'content.txt'
lowest_numbers = {i: 999 for i in range(1, 100)}
pattern = re.compile(r'User id:1 AND ORD\(MID\(\(SELECT IFNULL\(CAST\(flag AS CHAR\),0x20\) FROM chart_db\.flag ORDER BY flag LIMIT 0,1\),(\d+),1\)\)>(\d+) was not found')

with open(file_path, 'r', errors='ignore') as file:
    for line in file:
        match = pattern.search(line)
        if match:
            position = int(match.group(1))
            number = int(match.group(2))
            if number < lowest_numbers[position]:
                lowest_numbers[position] = number

ascii_string = ''.join(chr(lowest_numbers[pos]) for pos in sorted(lowest_numbers.keys()))
print(ascii_string)