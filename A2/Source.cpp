#include<iostream>
class currency {
public:
	double x;
	int y;
	void selection() {
		std::cout << "\tEuro Pound USD\t\tMONEY EXCHANGE\t\tUSD Pound Euro\n";
			std::cout << ">Press 1 to exchange Euro to USD\n";
			std::cout << ">Press 2 to exchange Euro to Pound\n";
			std::cout << ">Press 3 to exchange USD to Pound\n";
			std::cout << ">Press 4 to exchange USD to Euro\n";
			std::cout << ">Press 5 to exchange Pound to USD\n";
			std::cout << ">Press 0 to EXIT\n";
	}
	void exchange() {
		do {
			selection();
			std::cin >> y;
			switch (y) {
			case 1:
				std::cout << "Enter the value: ";
				std::cin >> x;
				std::cout << x*1.21 << " $\n\a";
				break;
			case 2:
				std::cout << "Enter the value: ";
				std::cin >> x;
				std::cout << x * 0.86 << " Pound\n\a";
				break;
			case 3:
				std::cout << "Enter the value: ";
				std::cin >> x;
				std::cout << x * 0.71 << " Pound\n\a";
				break;
			case 4:
				std::cout << "Enter the value: ";
				std::cin >> x;
				std::cout << x * 0.83 << " Euro\n\a";
				break;
			case 5:
				std::cout << "Enter the value: ";
				std::cin >> x;
				std::cout << x * 1.41 << " $\n\a";
				break;
			case 0:
				std::cout << "GoodBye ^_^\a ";
				break;
			default:
				std::cout << "invalid selection, please try again\a\n ";
			}
		} while (y != 0);
	}
};
int main() {
	system("color 5");
	currency CURRENCY;
	CURRENCY.exchange();
}