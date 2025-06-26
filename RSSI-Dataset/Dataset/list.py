import re

values = []
pattern = r'Node A: (-?\d+)'  # "Node A: sayı" formatındaki veriyi yakalamak için desen

with open('Environment2/LoRaWAN/1D1.txt', 'r') as file:
    for line in file:
        match = re.search(pattern, line)
        if match:
            values.append(int(match.group(1)))

print(values)  # Sonucu ekrana yazdır
