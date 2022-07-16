#include<iostream>

int main() 
{
	int val_1 = 0, val_2 = 0;
	
	//检测输入的数字，并储存在变量里 
	while(std::cin >> val_1 >> val_2){
		
		//如果 val_1 大于 val_2，就从 val_2开始往上加 
		if (val_1 > val_2){
			
			for ( val_2 = val_2 + 1 ; val_1 > val_2; val_2 ++){
				std::cout << val_2 <<std::endl;
				}
		}
			
		//如果 val_2 大于 val_1，就从 val_1开始 往上加
		else if (val_1 < val_2){
			
			for (val_1 = val_1 +1 ; val_1 < val_2; val_1 ++){
				std::cout << val_1 <<std::endl;
				}
		}
		
		//如果 val_2 等于 val_1，打印错误信息 
		else if (val_1 == val_2){
			
			std::cout << "错误：这两个数之间没有其他数" << std::endl; 
		}
		
	} //while循环在这里结束	
		
		
}//主函数在这里结束 
	

