import random


if __name__ == "__main__":
    hits = 0
    beans = 1000000
    for i in range(1, beans + 1):
        x = random.random()
        y = random.random()
        distance = pow(x * x + y * y, 0.5)
        if distance <= 1:
            hits += 1
    pi = 4 * (hits / beans)
    print("圆周率是: {}".format(pi))