#include<iostream>

int main() 
{
	int val_1 = 0, val_2 = 0;
	
	//�����������֣��������ڱ����� 
	while(std::cin >> val_1 >> val_2){
		
		//��� val_1 ���� val_2���ʹ� val_2��ʼ���ϼ� 
		if (val_1 > val_2){
			
			for ( val_2 = val_2 + 1 ; val_1 > val_2; val_2 ++){
				std::cout << val_2 <<std::endl;
				}
		}
			
		//��� val_2 ���� val_1���ʹ� val_1��ʼ ���ϼ�
		else if (val_1 < val_2){
			
			for (val_1 = val_1 +1 ; val_1 < val_2; val_1 ++){
				std::cout << val_1 <<std::endl;
				}
		}
		
		//��� val_2 ���� val_1����ӡ������Ϣ 
		else if (val_1 == val_2){
			
			std::cout << "������������֮��û��������" << std::endl; 
		}
		
	} //whileѭ�����������	
		
		
}//��������������� 
	

