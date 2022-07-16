//如果输入完后先按回车，就仍然在while循环里，它以为回车只是为了再输入新的值，这时候按Ctrl Z结束输入，也就是结束while循环就好了，它就会开始打印最后一个值 


#include<iostream>

int main ()
{
	int currVal = 0, val = 0;
	
	if (std::cin >> currVal){
		int cnt = 1;
		
		while (std::cin >> val){
			if (val == currVal)
				++cnt;
			else{
				std::cout << currVal << "occurs "
						<< cnt << " times" << std::endl;
				currVal = val;
				cnt = 1; 
			}
			
		}
		//打印最后一个值 
		std::cout << currVal << " opccurs " << cnt << " times" << std::endl;
	}
	
	return 0;
 } 
