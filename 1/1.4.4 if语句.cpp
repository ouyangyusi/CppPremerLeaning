//�����������Ȱ��س�������Ȼ��whileѭ�������Ϊ�س�ֻ��Ϊ���������µ�ֵ����ʱ��Ctrl Z�������룬Ҳ���ǽ���whileѭ���ͺ��ˣ����ͻῪʼ��ӡ���һ��ֵ 


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
		//��ӡ���һ��ֵ 
		std::cout << currVal << " opccurs " << cnt << " times" << std::endl;
	}
	
	return 0;
 } 
