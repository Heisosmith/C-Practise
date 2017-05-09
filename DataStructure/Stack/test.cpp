
#include <stdio.h>

int main(){
	char p[10][10];
	int i,j;
	for(i=0;i<10;++i)
		for(j=0;j<10;++j)
			p[i][j] = ' ';
	for( i=0;i<10;++i){
		p[0][i] = p[9][i] = '#'; 
		p[i][0] = p[i][9] = '#';
	}
	for( i=1;i<3;++i){
		p[i][3] = p[i][7] = '#';
	}
	p[3][5] = p[3][6] = '#';
	for( i=2;i<5;++i){
		p[4][i] = '#';
	}
	p[5][4] = '#';
	p[6][2] = p[6][6] = '#';
	for( i=2;i<8;++i){
		if( i == 5) ++i;
		p[7][i] = '#';
	}
	p[8][1] = '#';

	for(i=0;i<10;++i){
		for(j=0;j<10;++j){
			printf("%c",p[i][j]);
		}
		printf("\n");
	}
	return 0;
}