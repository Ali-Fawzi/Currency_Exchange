#include<iostream>
class currency {//class.
public:
	double x;//variable
	int y;//variable
	void selection() {//function to print choices
		std::cout << "\tEuro Pound USD\t\tMONEY EXCHANGE\t\tUSD Pound Euro\n";
			std::cout << ">Press 1 to exchange Euro to USD\n";
			std::cout << ">Press 2 to exchange Euro to Pound\n";
			std::cout << ">Press 3 to exchange USD to Pound\n";
			std::cout << ">Press 4 to exchange USD to Euro\n";
			std::cout << ">Press 5 to exchange Pound to USD\n";
			std::cout << ">Press 0 to EXIT\n";
	}
	void exchange() {//function for the loop
		do {
			selection();//function summoning
			std::cin >> y;//input for selections
			switch (y) {//switching cases.
			case 1:
				std::cout << "Enter the value: ";//print the statement.
				std::cin >> x;//get input
				std::cout << x*1.21 << " $\n\a";//print the result ,\a is for alarm.
				break;
			case 2:
				std::cout << "Enter the value: ";//same.
				std::cin >> x;//same.
				std::cout << x * 0.86 << " Pound\n\a";//same.
				break;
			case 3:
				std::cout << "Enter the value: ";//same.
				std::cin >> x;//same.
				std::cout << x * 0.71 << " Pound\n\a";//same.
				break;
			case 4:
				std::cout << "Enter the value: ";//same.
				std::cin >> x;//same
				std::cout << x * 0.83 << " Euro\n\a";//same.
				break;
			case 5:
				std::cout << "Enter the value: ";//same.
				std::cin >> x;//same
				std::cout << x * 1.41 << " $\n\a";//same.
				break;
			case 0:
				std::cout << "GoodBye ^_^\a ";//print GoodBye if the user choiced to EXIT.
				break;
			default:
				std::cout << "invalid selection, please try again\a\n ";// print the default statment.
			}
		} while (y != 0);// breaks the loop if y=0.
	}
};
int main() {
	system("color 5");//set colour to purple.
	currency CURRENCY;
	CURRENCY.exchange();
}
