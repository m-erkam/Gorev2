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
			str.append("y�z"); break;
		case(2):
			str.append("ikiy�z"); break;
		case(3):
			str.append("��y�z"); break;
		case(4):
			str.append("d�rty�z");break;
		case(5):
			str.append("be�y�z");break;
		case(6):
			str.append("alt�y�z");break;
		case(7):
			str.append("yediy�z");break;
		case(8):
			str.append("sekizy�z");break;
		case(9):
			str.append("dokuzy�z");break;
}	
	switch(o){
		case(1):
			str.append("on");break;
		case(2):
			str.append("yirmi");break;
		case(3):
			str.append("otuz");break;
		case(4):
			str.append("k�rk");break;
		case(5):
			str.append("elli");break;
		case(6):
			str.append("altm��");break;
		case(7):
			str.append("yetmi�");break;
		case(8):
			str.append("seksen");break;
		case(9):
			str.append("doksan");break;
}
	switch(b){
		case(0):
			if(y == 0 && o == 0){
				str.append("s�f�r");
			}
			break;
		case(1):
			str.append("bir");break;
		case(2):
			str.append("iki");break;
		case(3):
			str.append("��");break;
		case(4):
			str.append("d�rt");break;
		case(5):
			str.append("be�");break;
		case(6):
			str.append("alt�");break;
		case(7):
			str.append("yedi");break;
		case(8):
			str.append("sekiz");break;
		case(9):
			str.append("dokuz");break;
	}
	std::cout << str;
}
