#include <iostream>
#include <cstdlib>
#include <ctime>
#define BOLDRED "\033[1m\033[31m"
#define RESET   "\033[0m"

using namespace std;

int getRandomNum1or2(){
	int num = 0;
	num = rand() % 2 + 1;
	return num;
}
int getRandomNum1to10(){
	int num = 0;
	num = rand() % 10 + 1;
	return num;
}
int getRandomNum3to5(){
	int num = 0;
	num = rand() % 5 + 3;
	return num;
}

int main() {

	
	srand(time(0));
	char letter;
	int addOrSub=0, numAddedorSub=0, times;
	int myNum = getRandomNum1to10();
	times = getRandomNum3to5();
	int myFirstNum = myNum;
	char again;
	
	
	cout << "Hello, I'm a wizard who will guess your number ..." << endl;
	cout <<"------------------------------------------------------------------------\n";
	do{
	cout << "Start thinking of a number, it has to be a positive integer.\n";
	cout << "When ever you are done, enter any letter and press enter: ";
	if (cin >> letter) {
		do{
			addOrSub = getRandomNum1or2();
			if (addOrSub == 1) {
				numAddedorSub = getRandomNum1to10();
				cout <<"------------------------------------------------------------------------\n";
				cout << "Add " << BOLDRED <<numAddedorSub << RESET << " to your number...\n";
				cout << "If you are done enter any letter and press enter: ";
				myNum = myNum + numAddedorSub;
				cin>>letter;
				cout <<"------------------------------------------------------------------------\n";
			}
			else if (addOrSub == 2) {
				numAddedorSub = getRandomNum1to10();
				cout <<"------------------------------------------------------------------------\n";
				cout << "Subtract " << BOLDRED <<numAddedorSub << RESET << " to your number...\n";
				cout << "If you are done enter any letter and press enter: ";
				myNum = myNum - numAddedorSub;
				cin>>letter;
				cout <<"------------------------------------------------------------------------\n";
			}
			times--;
		}while (times > 0);
	}
	myNum = myNum - myFirstNum;
	cout <<"------------------------------------------------------------------------\n";
	cout << "Subtract the " <<BOLDRED<<"number " <<RESET<<"you first thought of.\n";
	cout << "If you are done enter any letter and press enter: ";
	cin >> letter;
	cout <<"------------------------------------------------------------------------\n";
	cout <<"Your number right now is: " <<BOLDRED<< myNum << RESET<<" .I know.... I'm a wizzard\n";
	cout <<BOLDRED <<"Do you want to try my magic again? (Enter 'Y' for YES OR 'N' for NO): "<< RESET;
	cin>>again;
	}while(toupper(again) == 'Y');
	return 0;
}