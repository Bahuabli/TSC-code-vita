#include<iostream>
//#include<ctime>
//#include<iomanip>
//#include<cmath>
//#include<cstdio>
using namespace std;
int main()
{
	static int N;
	cout<<"Enter N:-";
	cin>>N;
	int A[N][N];
	int p = 1,R,C;
	R = C = N;

	for(int l=0;l<(N/2);l++){
		for(int j=l;j<C;j++){
			A[l][j] = p;
			p++;
		}
		for(int i=l+1;i<R;i++){
			A[i][C-1] = p;
			p++;
		}
		for(int j=C-2;j>=l;j--){
			A[R-1][j] = p;
			p++;
		}
		for(int i=R-2;i>l;i--){
			A[i][l] = p;
			p++;
		}
		C -= 1;
		R -= 1;
	}
	if(N%2==1)
		A[N/2][N/2] = N*N;
	
/*-------------------------------------------/		
/     Display section-----------------------*/
	for(int i=0;i<N;i++)
	{
		for(int j=0;j<N;j++)
		{ //sleep(1);
		cout<</*setw(10)<<*/"\t\e[1;31m "<<A[i][j];
		}
		cout<<endl;
	}cout<<"\e[3;32mPowerpoints are:- \n";
		cout<<"\t\e[2;35m(0,0)\n";
	for(int i=N-1;i>=0;i--)
		for(int j=N-1;j>=0;j--)
			if(A[i][j]%11==0)
				cout<<"\t("<<i<<","<<j<<")\n";
	cout<<"\e[0m";
return 0;
}
