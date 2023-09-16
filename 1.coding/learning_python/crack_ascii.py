from string import ascii_letters
from itertools import product

for passcode in product(ascii_letters, repeat=4):
    print("".join(passcode))

    #(ascii_letters + digits + punctuation, repeat = 4):
    #replace the above bracket with in place of bracket in fourth line!