import numpy as np
def create_matrix(N):
    matrix = np.array([[0 for m in range(N)] for n in range(N)])
    return matrix


def update_matrix(matrix):
    N = matrix.shape[0]
    for i in range(N):
        for j in range(N):
            matrix[i][j] = input(f"Enter value for the element in row {i} and column {j}: ")

def transpose_matrix(matrix):
    N = matrix.shape[0]
    transpose = np.array([[0 for m in range(N)] for n in range(N)])
    for i in range(N):
        for j in range(N):
            transpose[j][i] = matrix[i][j]
    return transpose


if __name__ == "__main__":
    a = create_matrix(int(input("Enter size of matrix: ")))
    update_matrix(a)
    print(a)
    trans_a = transpose_matrix(a)
    print(trans_a)