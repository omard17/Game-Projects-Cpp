#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
	
	int rows = 7;
	int cols = 10;
	int inputIndex = 0;
	int r = 0, d = 0;
	int k = 0, l = 0;
	int o = 0, p = 0;
	int m = 0, n = 0;
	int q = 0, w = 0;
	int z = 0, u = 0;
	int g = 0, h = 0;
	
		 char myGrid[7][10]{{'E', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, //E at 1/1
				            {'.', '.', 'P', '.', '.', '.', '.', '.', '.', '.'}, //trap at row 2, column 8
				            {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'},
				            {'.', '.', '.', '.', '.', '.', '.', 'E', '.', '.'}, //trap at row 4, column 5; E at 4/8
				            {'.', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, //trap at row 5, column 8
				            {'E', '.', '.', '.', '.', '.', '.', '.', '.', '.'}, //trap at row 6, column 3; E at 6/1
				            {'.', '.', '.', '.', 'X', '.', '.', '.', '.', '.'}};
				            
/*	char enemyPos1 = myGrid[0][0];
	char enemyPos2 = myGrid[3][7];
	char enemyPos3 = myGrid[5][0];  */
	
	void enemyMove_sub();
	
	
	int enemyMove(){
			srand(time(0));
			switch(inputIndex){
				case 0: myGrid[r][d] = '.';
							while(r == d){
							 if(r == d){
								r = (rand() % 2);
								d = (rand() % 2);	
							}} 
						myGrid[r][d] = 'E';
							
					 		for(int i = 0; i < rows; i++){
								for(int j = 0; j < cols; j++){
									cout << myGrid[i][j] << " ";
						}
						cout << endl;
						
						} 
						
						cout << endl << endl << endl << endl;
						break;
				case 1: myGrid[r][d] = '.';
							while(k == l){
							 if(k == l){
								k = (rand() % 2);
								l = (rand() % 2);	
							}}
						myGrid[r + k][d + l] = 'E';
						
							for(int i = 0; i < rows; i++){
								for(int j = 0; j < cols; j++){
									cout << myGrid[i][j] << " ";
						}
						cout << endl;
						} 
						
						cout << endl << endl << endl << endl;
						break;
				case 2: myGrid[r + k][d + l] = '.';
							while(o == p){
							 if(o == p){
								o = (rand() % 2);
								p = (rand() % 2);	
							}} 
						myGrid[r + k + o][d + l + p] = 'E';
						
							for(int i = 0; i < rows; i++){
								for(int j = 0; j < cols; j++){
									cout << myGrid[i][j] << " ";
						}
						cout << endl;
						} 
						
						cout << endl << endl << endl << endl;
						break;
						
				case 3: myGrid[r + k + o][d + l + p] = '.';
							while(m == n){
							 if(m == n){
								m = (rand() % 2);
								n = (rand() % 2);	
							}} 
						myGrid[r + k + o + m][d + l + p + n] = 'E';
						
							for(int i = 0; i < rows; i++){
								for(int j = 0; j < cols; j++){
									cout << myGrid[i][j] << " ";
						}
						cout << endl;
						} 
						
						cout << endl << endl << endl << endl;
						break;
				case 4: myGrid[r + k + o + m][d + l + p + n] = '.';
							while(q == w){
							 if(q == w){
								q = (rand() % 2);
								w = (rand() % 2);	
							}} 
						myGrid[r + k + o + m + q][d + l + p + n + w] = 'E';
						
							for(int i = 0; i < rows; i++){
								for(int j = 0; j < cols; j++){
									cout << myGrid[i][j] << " ";
						}
						cout << endl;
						} 
						
						cout << endl << endl << endl << endl;
						break;
				case 5: myGrid[r + k + o + m + q][d + l + p + n + w] = '.';
							while(z == u){
							 if(z == u){
								z = (rand() % 2);
								u = (rand() % 2);	
							}} 
						myGrid[r + k + o + m + q + z][d + l + p + n + w + u] = 'E';
						
							for(int i = 0; i < rows; i++){
								for(int j = 0; j < cols; j++){
									cout << myGrid[i][j] << " ";
						}
						cout << endl;
						} 
						
						cout << endl << endl << endl << endl;
						break;
				case 6: myGrid[r + k + o + m + q + z][d + l + p + n + w + u] = '.';
							while(g == h){
							 if(g == h){
								g = (rand() % 2);
								h = (rand() % 2);	
							}} 
						myGrid[r + k + o + m + q + z + h][d + l + p + n + w + u + h] = 'E';
						
							for(int i = 0; i < rows; i++){
								for(int j = 0; j < cols; j++){
									cout << myGrid[i][j] << " ";
						}
						cout << endl;
						} 
						
						cout << endl << endl << endl << endl;
						break;
						
			}
					
	}
	
	void enemyMove_sub(){
		r = (rand() % 2);
		d = (rand() % 2);
		while(r == d){
			if(r == d){
				r = (rand() % 2);
				d = (rand() % 2);	
			}}
		myGrid[r][d] = 'E';
	}	
	
	int x = 1;
	int y = 2;
	
void move(){
			          
			myGrid[x][y] = 'P';
			cout << endl << endl << endl << endl;

	}
	
int main(){
		
	
				    
	for(int i = 0; i < rows; i++){
		for(int j = 0; j < cols; j++){
			cout << myGrid[i][j] << " ";
			}
		cout << endl;
		};
	
	
	char input;
	cout << "Use WASD to move (P), your goal is to reach the treasure (X), but beware of traps and enemies!\n";

	do{
	cin >> input;
	switch(input){
		case 'w': myGrid[x][y] = '.';
				  x--;
				  move();
				  break;
		case 'a': myGrid[x][y] = '.';
				  y--;
				  move();
				  break;
		case 's': myGrid[x][y] = '.';
		  	      x++;
		  	      move();
				  break;
		case 'd': myGrid[x][y] = '.';
				  y++;
				  move();
				  break;
		default: cout << "Invalid entry.\n";
		
				 
	} 
	  enemyMove();
	  inputIndex++; 		

	 }	while(myGrid[6][4] == 'X' && myGrid[1][7] != 'P' && myGrid[3][4] != 'P' && myGrid[4][7] != 'P' && myGrid[5][2] != 'P');
	
	if(myGrid[6][4] == 'P'){
		cout << "Congrats! You've won!\n";
	} else if(myGrid[1][7] == 'P' || myGrid[3][4] == 'P' || myGrid[4][7] == 'P' || myGrid[5][2] == 'P'){
		cout << "Whoops! You've stepped on a trap, game over!\n";
	} 
	
	}
	
	
	
	
/*  char enemyPos1 = myGrid[0][0];
	char enemyPos2 = myGrid[3][7];
	char enemyPos3 = myGrid[5][0];  */

