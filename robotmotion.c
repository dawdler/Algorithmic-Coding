#include<stdio.h>
#define s 200
char gin[11][11];
int g[11][11];
int main() {
 
	int row, col, init_c, init_r, i, j, loop_c;
 
	//freopen(“robot.in”,”r”,stdin);
 
	while (1) {
 
		scanf("%d %d %d", &row, &col, &init_c);
 
		if (row == 0 || col == 0 || init_c == 0)
			break;
 
		init_r = 1;
 
		//take input
		for (i = 1; i <= row; i++) {
			for (j = 1; j <= col; j++) {
				scanf("%c", &gin[i][j]);
				if (gin[i][j] == '\n')
					j--;
			}
		}
 
		//initialize by 0
 
		for (i = 1; i <= row; i++)
			for (j = 1; j <= col; j++)
				g[i][j] = 0;
 
		//first move
		g[init_r][init_c] = 1;
		int count = 1;
		int flag = 0;
		while (1) {
			if (gin[init_r][init_c] == 'N' || gin[init_r][init_c] == 'n')
				init_r--;
			else if (gin[init_r][init_c] == 'S' || gin[init_r][init_c] == 's')
				init_r++;
			else if (gin[init_r][init_c] == 'E' || gin[init_r][init_c] == 'e')
				init_c++;
			else if (gin[init_r][init_c] == 'W' || gin[init_r][init_c] == 'w')
				init_c--;
 
			count++; //if braek then count decrease by one
 
			if (init_r < 1 || init_r > row || init_c < 1 || init_c > col) {
				count--;
				flag = 1;
				break;
			}
 
			if (g[init_r][init_c] != 0) {
				loop_c = count - g[init_r][init_c];
				count = count - (loop_c + 1);
				break;
			}
			g[init_r][init_c] = count;
		}
 
		if (flag == 1)
			printf("%d step(s) to exit\n", count);
		else
			printf("%d step(s) before a loop of %d step(s)\n", count, loop_c);
 
	}
	return 0;
}
