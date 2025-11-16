#include <iostream>
using namespace std;
void matrix(){
	int matrix[3][3] = {
		{0,0,0},
		{0,0,0},
		{0,0,0} 
	};
		cout << "Number of 1,1 - ";
	cin >> matrix[0][0];
		cout << "Number of 1,2 - ";
	cin >> matrix[0][1];
		cout << "Number of 1,3 - ";
	cin >> matrix[0][2];

		cout << "Number of 2,1 - ";
	cin >> matrix[1][0];
		cout << "Number of 2,2 - ";
	cin >> matrix[1][1];
		cout << "Number of 2,3 - ";
	cin >> matrix[1][2];

		cout << "Number of 3,1 - ";
	cin >> matrix[2][0];
		cout << "Number of 3,2 - ";
	cin >> matrix[2][1];
		cout << "Number of 3,3 - ";
	cin >> matrix[2][2];

		cout << "The Matrix" << endl;

	cout << "| " << matrix[0][0] << ' ';
	cout << matrix[0][1] << ' ';
	cout << matrix[0][2] << " |" << ' ' << endl;

	cout << "| " << matrix[1][0] << ' ';
	cout << matrix[1][1] << ' ';
	cout << matrix[1][2] << " |" << ' ' << endl;

	cout << "| " << matrix[2][0] << ' ';
	cout << matrix[2][1] << ' ';
	cout << matrix[2][2] << " |" << ' ' << endl;

	int result;

	int arajin = (matrix[0][0] * matrix[1][1] * matrix[2][2]);
	int erkrord = (matrix[0][1] * matrix[1][2] * matrix[2][0]);
	int errord = (matrix[1][0] * matrix[2][1] * matrix[0][2]);

	int arajin2 = (matrix[0][2] * matrix[1][1] * matrix[2][0]);
	int erkrord2 = (matrix[1][0] * matrix[0][1] * matrix[2][2]);
	int errord2 = (matrix[2][1] * matrix[1][2] * matrix[0][0]);
	result = arajin + erkrord + errord - arajin2 - erkrord2 - errord2;

	 cout << "Matrix Determinant is | " << result << endl;

}
int main()
{
	matrix();

	return 0;
};
