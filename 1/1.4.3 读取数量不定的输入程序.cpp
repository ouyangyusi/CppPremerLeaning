#include<iostream>
int main ()
{
	int cin = 0, value = 0;
	while (std::cin >> value){
	
		cin += value;
	}
	std::cout << cin << std::endl;
	
	return 0;
 } 
