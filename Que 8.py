from sympy import *
M= Matrix([[1,0,1,3],[2,3,4,7],[-1,-3,-3,-4]])
print("matrix,\nM=\n",M)


rrefm=M.rref()
print("row reduced echleon form of the matrix:\n",rrefm,"\n")

M_rowspace= M.rowspace()
print("rowspace of a matrix",M_rowspace)
