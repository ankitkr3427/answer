from sympy.vector import CoordSys3D, divergence
R=CoordSys3D("R")
f=R.x*R.y*R.z+5*R.z+4
F=R.x*R.y*R.z*R.i+4*R.j+5*R.z*R.k
print("f=",f)
print("F",F)
divF=divergence(F)
print('divF :',divF)
R.x=1
R.y=2
R.z=-1
print("div(%d,%d,%d)="%(R.x,R.y,R.z),end='')
exec("print("+str(divF)+")")