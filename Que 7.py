# import sympy as sp
# M= sp.Matrix([[1,0,1,3],[2,3,4,7],[-1,-3,-3,-4]])
# print("Matrix,\nM=",M)
# rrefm=M.rref()
# print("Row reduced echleon form of the matrix,\nM=",rrefm)
# M_null= M.nullspace()
# print("nullspace of a matrix,\nM=\n",M_null)

import numpy as np

# Define the set of vectors S
S = np.array([[1,0,1,3], [2,3,4,7], [-1,-3,-3,-4]])

# Check the linear independence of the vectors
rref_S = np.linalg.matrix_rank(S)
if rref_S == len(S[0]):
    print("The vectors in set S are linearly independent")
else:
    print("The vectors in set S are linearly dependent")

# Determine the set of linearly independent vectors
P, L, U = np.linalg.lu(S)
pivot_cols = np.nonzero(np.diag(U))
independent_vectors = S[:, pivot_cols]

# Print the set of linearly independent vectors
print("The set of linearly independent vectors is:")
print(independent_vectors)