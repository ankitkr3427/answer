from sympy import *
M= Matrix([[1,0,1,3],[2,3,4,7],[-1,-3,-3,-4]])
print("matrix: {}".format(M))


rrefm=M.rref()
print("row reduced echleon form of the matrix: {}".format(rrefm))

M_columnspace= M.columnspace()
print("rowspace of a matrix: {}".format(M_columnspace))

