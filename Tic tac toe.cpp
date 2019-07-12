#include <iostream>

using namespace std;

char matrix[3][3] = {'1', '2', '3', '4', '5', '6', '7', '8', '9'};
char tic = 'X';

void Grid(){
	for(int i = 0; i < 3; i++){
		for(int j = 0; j < 3; j++){
			cout << matrix[i][j] << " | ";
		}
		cout << endl;
	}
}

void UserInput(){
	int a;
	cout << "Choose the position you want your number to be placed: ";
	cin >> a;
	
	switch(a){
		case 1: matrix[0][0] = tic;
		break;
		case 2: matrix[0][1] = tic;
		break;
		case 3: matrix[0][2] = tic;
		break;
		case 4: matrix[1][0] = tic;
		break;
		case 5: matrix[1][1] = tic;
		break;
		case 6: matrix[1][2] = tic;
		break;
		case 7: matrix[2][0] = tic;
		break;
		case 8: matrix[2][1] = tic;
		break;
		case 9: matrix[2][2] = tic;
		break;
	}
}

void Turn(){
	if(tic == 'X'){
		tic = 'O';
	} else{
		tic = 'X';
	}
}

char Win(){
	//first player
	if (matrix[0][0] == 'X' && matrix[0][1] == 'X' && matrix[0][2] == 'X')
		return 'X';
	if (matrix[1][0] == 'X' && matrix[1][1] == 'X' && matrix[1][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[2][1] == 'X' && matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'X' && matrix[1][0] == 'X' && matrix[2][0] == 'X')
		return 'X';
	if (matrix[0][1] == 'X' && matrix[1][1] == 'X' && matrix[2][1] == 'X')
		return 'X';
	if (matrix[0][2] == 'X' && matrix[1][2] == 'X' && matrix[2][2] == 'X')
		return 'X';

	if (matrix[0][0] == 'X' && matrix[1][1] == 'X' && matrix[2][2] == 'X')
		return 'X';
	if (matrix[2][0] == 'X' && matrix[1][1] == 'X' && matrix[0][2] == 'X')
		return 'X';

	//second player
	if (matrix[0][0] == 'O' && matrix[0][1] == 'O' && matrix[0][2] == 'O')
		return 'O';
	if (matrix[1][0] == 'O' && matrix[1][1] == 'O' && matrix[1][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[2][1] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][0] == 'O' && matrix[2][0] == 'O')
		return 'O';
	if (matrix[0][1] == 'O' && matrix[1][1] == 'O' && matrix[2][1] == 'O')
		return 'O';
	if (matrix[0][2] == 'O' && matrix[1][2] == 'O' && matrix[2][2] == 'O')
		return 'O';

	if (matrix[0][0] == 'O' && matrix[1][1] == 'O' && matrix[2][2] == 'O')
		return 'O';
	if (matrix[2][0] == 'O' && matrix[1][1] == 'O' && matrix[0][2] == 'O')
		return 'O';

	return '/';
}


int main() {
	Grid();
	while(1){
		UserInput();
		Grid();
		if (Win() == 'X')
		{
			cout << "X wins!" << endl;
			break;
		}
		else if (Win() == 'O')
		{
			cout << "O wins!" << endl;
			break;
		}
		Turn();
	}
}
