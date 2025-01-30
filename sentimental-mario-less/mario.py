# TODO
def get_int(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            print("Invalid value")


n = get_int("n:")
while n < 1 or n > 8:
    n = get_int("height: ")

for i in range(1, n + 1):
    print(" " * (n - i) + "#" * i)
