#include <iostream>
using namespace std;
void matrixHakadardz3rdKarg(){
	// de terminant
	float matrix[3][3] = {
		{0,0,0},//00 01 02
		{0,0,0},//10 11 12
		{0,0,0} //20 21 22
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

	 	cout << ' ' << endl;
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

	float result;

	float arajin = (matrix[0][0] * matrix[1][1] * matrix[2][2]);
	float erkrord = (matrix[0][1] * matrix[1][2] * matrix[2][0]);
	float errord = (matrix[1][0] * matrix[2][1] * matrix[0][2]);

	float arajin2 = (matrix[0][2] * matrix[1][1] * matrix[2][0]);
	float erkrord2 = (matrix[1][0] * matrix[0][1] * matrix[2][2]);
	float errord2 = (matrix[2][1] * matrix[1][2] * matrix[0][0]);

	result = arajin + erkrord + errord - arajin2 - erkrord2 - errord2;

	 float d = result;
	 cout << ' ' << endl;
	 cout << "matricayi determinanty havasar e " << d << " vory havasar che 0 i hetevabar uni HAKADARDZ !" << endl;
	 if (d != 0)
	 {
	float matrix11 = ((matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1]))* 1 / d;
	float matrix12 = ((matrix[1][0] * matrix[2][2]) - (matrix[1][2] * matrix[2][0]))* -1 / d;
	float matrix13 = ((matrix[1][0] * matrix[2][1]) - (matrix[1][1] * matrix[2][0]))* 1 / d;

	float matrix21 = ((matrix[0][1] * matrix[2][2]) - (matrix[0][2] * matrix[2][1]))* -1 / d;
	float matrix22 = ((matrix[0][0] * matrix[2][2]) - (matrix[0][2] * matrix[2][0]))* 1 / d;
	float matrix23 = ((matrix[0][0] * matrix[2][1]) - (matrix[0][1] * matrix[2][0]))* -1 / d;

	float matrix31 = ((matrix[0][1] * matrix[1][2]) - (matrix[0][2] * matrix[1][1]))* 1 / d;
	float matrix32 = ((matrix[0][0] * matrix[1][2]) - (matrix[0][2] * matrix[1][0]))* -1 / d;
	float matrix33 = ((matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]))* 1 / d;
// ---------

	float matrix110 = ((matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1]))* 1;
	float matrix120 = ((matrix[1][0] * matrix[2][2]) - (matrix[1][2] * matrix[2][0]))* -1;
	float matrix130 = ((matrix[1][0] * matrix[2][1]) - (matrix[1][1] * matrix[2][0]))* 1;

	float matrix210 = ((matrix[0][1] * matrix[2][2]) - (matrix[0][2] * matrix[2][1]))* -1;
	float matrix220 = ((matrix[0][0] * matrix[2][2]) - (matrix[0][2] * matrix[2][0]))* 1;
	float matrix230 = ((matrix[0][0] * matrix[2][1]) - (matrix[0][1] * matrix[2][0]))* -1;

	float matrix310 = ((matrix[0][1] * matrix[1][2]) - (matrix[0][2] * matrix[1][1]))* 1;
	float matrix320 = ((matrix[0][0] * matrix[1][2]) - (matrix[0][2] * matrix[1][0]))* -1;
	float matrix330 = ((matrix[0][0] * matrix[1][1]) - (matrix[0][1] * matrix[1][0]))* 1;
	
	cout << ' ' << endl;
	cout << "The Matrix A-1 (first version)" << endl;

	cout << "| " << matrix110 << '/' << d << ' ';
	cout << matrix210 << '/' << d << ' ';
	cout << matrix310 << '/' << d << " |" << ' ' << endl;

	cout << "| " << matrix120 << '/' << d << ' ';
	cout << matrix220 << '/' << d << ' ';
	cout << matrix320 << '/' << d << " |" << ' ' << endl;

	cout << "| " << matrix130 << '/' << d << ' ';
	cout << matrix230 << '/' << d << ' ';
	cout << matrix330 << '/' << d << " |" << ' ' << endl;

	// second

	cout << ' ' << endl;
	cout << "The Matrix A-1 (second version)" << endl;

	cout << "| " << matrix11 << ' ';
	cout << matrix21 << ' ';
	cout << matrix31 << " |" << ' ' << endl;

	cout << "| " << matrix12 << ' ';
	cout << matrix22 << ' ';
	cout << matrix32 << " |" << ' ' << endl;

	cout << "| " << matrix13 << ' ';
	cout << matrix23 << ' ';
	cout << matrix33 << " |" << ' ' << endl;
	 }else {
	 	cout << "lucum chuni" << endl;
	 };
};
void matrixHakadardz2rdKarg(){
	float matrix[2][2] = {
		{0,0},
		{0,0}
	};

		cout << "Number of 1,1 - ";
	cin >> matrix[0][0];
		cout << "Number of 1,2 - ";
	cin >> matrix[0][1];
			cout << "Number of 2,1 - ";
	cin >> matrix[1][0];
		cout << "Number of 2,2 - ";
	cin >> matrix[1][1];

	float result;

	float arajin = (matrix[0][0] * matrix[1][1]);
	float erkrord = (matrix[0][1] * matrix[1][0]);

	result = arajin - erkrord;

	int d = result;
	 cout << ' ' << endl;
	 cout << "matricayi determinanty havasar e " << d << " vory havasar che 0 i hetevabar uni HAKADARDZ !" << endl;
	 if (d != 0)
	 {

	float matrix11 = matrix[1][1]* 1 / d;
	float matrix12 = matrix[1][0]* -1 / d;

	float matrix21 = matrix[0][1]* -1 / d;
	float matrix22 = matrix[0][0]* 1 / d;
	cout << ' ' << endl;
	cout << "The Matrix A-1 (first version)" << endl;

	cout << "| " << matrix[1][1]* 1 << '/' << d << ' ';
	cout << matrix[0][1]* -1 << '/' << d  << " |" << ' ' << endl;

	cout << "| " << matrix[1][0] * -1 << '/' << d << ' ';
	cout << matrix[0][0] * 1 << '/' << d << " |" << ' ' << endl;


	cout << ' ' << endl;
	cout << "The Matrix A-1 (second version)" << endl;

	cout << "| " << matrix11 << ' ';
	cout << matrix21 << " |" << ' ' << endl;

	cout << "| " << matrix12 << ' ';
	cout << matrix22 << " |" << ' ' << endl;

	 }else {
	 	cout << "lucum chuni" << endl;
	 };
};
void matrix3rdKargi(){
	float matrix[3][3] = {
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

	float result;

	float arajin = (matrix[0][0] * matrix[1][1] * matrix[2][2]);
	float erkrord = (matrix[0][1] * matrix[1][2] * matrix[2][0]);
	float errord = (matrix[1][0] * matrix[2][1] * matrix[0][2]);

	float arajin2 = (matrix[0][2] * matrix[1][1] * matrix[2][0]);
	float erkrord2 = (matrix[1][0] * matrix[0][1] * matrix[2][2]);
	float errord2 = (matrix[2][1] * matrix[1][2] * matrix[0][0]);
	result = arajin + erkrord + errord - arajin2 - erkrord2 - errord2;

	 cout << "Matrix Determinant is | " << result << endl;

};
void matrix2rdKargi(){
	float matrix[2][2] = {
		{0,0},
		{0,0}
	};

		cout << "Number of 1,1 - ";
	cin >> matrix[0][0];
		cout << "Number of 1,2 - ";
	cin >> matrix[0][1];
			cout << "Number of 2,1 - ";
	cin >> matrix[1][0];
		cout << "Number of 2,2 - ";
	cin >> matrix[1][1];

	float result;

	float arajin = (matrix[0][0] * matrix[1][1]);
	float erkrord = (matrix[0][1] * matrix[1][0]);

	result = arajin - erkrord;

	 cout << "Matrix Determinant is | " << result << endl;
};
void printMenu(){
	char answer;
	cout << "        MATRIX MENU                    by Narek Hakobyan" << endl;
	cout << ' ' << endl;
	cout << "Sexmeq 'd' matricayi determinant hashvelu hamar" << endl;
	cout << "Sexmeq 'h' matricayi hakadardzy hashvelu hamar" << endl;
	cout << "sexmeq 'z' matricnery bazmapatkelu hamar" << endl;
	cout << ' ' << endl;
	cout << "    -";
	cin >> answer;

	if (answer == 'd')
	{
		cout << "yntrel matricayi kargy" << endl;
		cout << "2 rd kargi hamar sexmel '2'" << endl;
		cout << "3 rd kargi hamar sexmel '3'" << endl;
		cout << ' ' << endl;
		cout << "    -";

		cin >> answer;
		// payman
		if (answer == '2')
		{
			matrix2rdKargi();
		} else if (answer == '3')
		{
			matrix3rdKargi();
		} else {
			system("clear");
			system("cls");
			cout << "aydpisi hraman chkar !!! (pordzeq nshvacneric)" << endl;
			cout << ' ' << endl;
				printMenu();

		}
		
	} else if (answer == 'h'){
		cout << "yntrel matricayi kargy" << endl;
		cout << "2 rd kargi hamar sexmel '2'" << endl;
		cout << "3 rd kargi hamar sexmel '3'" << endl;
		cout << ' ' << endl;
		cout << "    -";
		cin >> answer;
		// payman
		if (answer == '2')
		{
			matrixHakadardz2rdKarg();
		} else if (answer == '3')
		{
			matrixHakadardz3rdKarg();
		} else {
			system("clear");
			system("cls");
			cout << "aydpisi hraman chkar !!! (pordzeq nshvacneric)" << endl;
			cout << ' ' << endl;
				printMenu();

		}
	} else if (answer == 'z'){

	} else {
		system("clear");
			system("cls");
			cout << "aydpisi hraman chkar !!! (pordzeq nshvacneric)" << endl;
			cout << ' ' << endl;
				printMenu();

	}

};
int main()
{
	system("clear");
	system("cls");
	
	printMenu();

	return 0;
};
