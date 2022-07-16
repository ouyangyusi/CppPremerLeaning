#include <iostream> 

int main()
{
	int sum = 0;
	
	//-100 + £¨-99£© + ¡¤¡¤¡¤+ 99 + 100 
	for(int i = -100; i <= 100; ++i)
	sum += i;
	
	std::cout << sum << std::endl;
}

