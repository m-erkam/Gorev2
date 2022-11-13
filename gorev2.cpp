#include <locale.h>
#include <iostream>
#include <string>


int main(){
	setlocale(LC_ALL, "Turkish");
	int a;
	std::cin >> a;
	int b = a % 10;
	int o = a / 10 % 10;
	int y = a / 100 % 10;
	std::string str; 
	switch(y){
		case(1):
			str.append("yüz"); break;
		case(2):
			str.append("ikiyüz"); break;
		case(3):
			str.append("üçyüz"); break;
		case(4):
			str.append("dörtyüz");break;
		case(5):
			str.append("beşyüz");break;
		case(6):
			str.append("altıyüz");break;
		case(7):
			str.append("yediyüz");break;
		case(8):
			str.append("sekizyüz");break;
		case(9):
			str.append("dokuzyüz");break;
}	
	switch(o){
		case(1):
			str.append("on");break;
		case(2):
			str.append("yirmi");break;
		case(3):
			str.append("otuz");break;
		case(4):
			str.append("kırk");break;
		case(5):
			str.append("elli");break;
		case(6):
			str.append("altmış");break;
		case(7):
			str.append("yetmiş");break;
		case(8):
			str.append("seksen");break;
		case(9):
			str.append("doksan");break;
}
	switch(b){
		case(0):
			if(y == 0 && o == 0){
				str.append("sıfır");
			}
			break;
		case(1):
			str.append("bir");break;
		case(2):
			str.append("iki");break;
		case(3):
			str.append("üç");break;
		case(4):
			str.append("dört");break;
		case(5):
			str.append("beş");break;
		case(6):
			str.append("altı");break;
		case(7):
			str.append("yedi");break;
		case(8):
			str.append("sekiz");break;
		case(9):
			str.append("dokuz");break;
	}
	std::cout << str;
}
