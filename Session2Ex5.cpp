#include <stdio.h>
int main(){
	//Khoi tao cac bien chieu dai va chieu rong
	int length = 10;
	//Chieu dai cua hinh chu nhat la 4cm
	int width = 3;//Chieu rong cua hinh chu nhat la 3cm
	
	//Tinh chu vi cua hinh chu nhat
	int perimeter = 2* (length+width);
	int area = length * width;
	
	//Hien thi ket qua
	printf("Chieu dai cua hinh chu nhat la: %d\n", length);
	printf("Chieu rong cu hinh chu nhat la: %d\n", width);
	printf("Chu vi cua hinh chu nhat la: %d\n", perimeter);
	printf("Dien tich cua hinh chu nhat la: %d\n", area);
	
	
	
	
	
	
	
	
	return 0;
}
