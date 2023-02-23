from sympy.vector import CoordSys3D, gradient
R=CoordSys3D("R")
f=R.x*R.y*R.z+5*R.z+4
F=R.x*R.y*R.z*R.i+4*R.j+5*R.z*R.k
print("f=",f)
print("F",F)
gradf=gradient(f)
print('gradient :',gradf)
R.x=1
R.y=2
R.z=-1
print("gradf(%d,%d,%d)="%(R.x,R.y,R.z),end='')
exec("print("+str(gradf)+")")