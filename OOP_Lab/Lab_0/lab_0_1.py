def calculateAverage(list):
    return sum(list) / len(list)


if __name__ == '__main__':
    num_list = []
    n = int(input("Enter number of elements: "))
    for n in range(n):
        num_list.append(float(input(f"Enter element no.{n+1}: ")))

    print(calculateAverage(num_list))