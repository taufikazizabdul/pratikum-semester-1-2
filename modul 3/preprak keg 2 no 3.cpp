#include <stdio.h>

int main()
{
	int i,b,k[3][3]={{3,4,8},{3,9,2},{6,3,0}};
	
	for ( i=0;i<=2;i=i+1 ){
		
		for ( b=2;b<=2;b=b+1 )
			printf("k[%d][%d]= %d\t", i,b,k[i][b]);
			printf("\n");
	}
	return 0;
}