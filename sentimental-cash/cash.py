from cs50 import get_float

while True:
    chillar_owned = get_float("Chillar required: ")
    if chillar_owned >= 0:
        break
chillar_owned_cents = round(chillar_owned * 100)

num_coins = 0

while chillar_owned_cents > 0:
    if chillar_owned_cents >= 25:
        chillar_owned_cents -= 25
        num_coins += 1
    elif chillar_owned_cents >= 10:
        chillar_owned_cents -= 10
        num_coins += 1
    elif chillar_owned_cents >= 5:
        chillar_owned_cents -= 5
        num_coins += 1
    else:
        chillar_owned_cents -= 1
        num_coins += 1

print(num_coins)
