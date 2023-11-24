from random import randint


def generate_random(s):
    rand_arr = [randint(0, 100) for n in range(s)]
    rand_sum = sum(rand_arr)
    return rand_arr, rand_sum


if __name__ == "__main__":
    size = int(input("Enter size of the array: "))
    print(f"Randomly generated numbers: {generate_random(size)[0]}")
    print(f"Sum of randomly generated numbers: {generate_random(size)[1]}")
