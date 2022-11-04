//Row Major
int A[d1][d2][d3][d4];
Address(A[i1][i2][i3][i4])=L+(i1*d2*d3*d4+i2*d3*d4+i3*d4+i4)*(Size of data type);


//COloumn Major
int A[d1][d2][d3][d4];
Address(A[i1][i2][i3][i4])=L+(i4*d1*d2*d3+i3*d1*d2+i2*d1+i1)*(Size of data type);
