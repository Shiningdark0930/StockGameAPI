//�� ����� ������ �ֽ� ������ ���� ������� ����Դϴ�.
//������ �ֽ� �ý����� �����Ͻ� �� �ֽ��ϴ�. 

#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
#include<windows.h>

//�ֽ� ���� ����
/*
�ֽ��� �ִ� ������ 20���� �����Ǿ� �ֽ��ϴ�.
�� ���� �ֽ��� ����� �����ø�, 
-StockName
-StockPrize
-StockChangeRate
�� 3���� ���� �迭�� �ѵ��� �÷��ּ���. 
*/ 

srand(time(NULL));//�õ� ���� 

int StockName[20][100];//�ֽ� �̸� ����
int StockPrize[20];//�ֽ�  ���� ����
int StockChangeRate[20];//�ֽ� ���� ������ 
int Stock[20];//�ֽ� ���� ����  

int ColorString(int Color,char String[]);
/*
-���� ��� �Լ� 
���� �ڵ�ǥ ����
00 ������	08 ȸ�� 
01 �Ķ���	09 ���� �Ķ���	 
02 �ʷϻ�	10 ���� �ʷϻ� 
03 ����	    11 ���� ���� 
04 ������	12 ���� ������ 
05 ���ֻ�	13 ���� ���ֻ� 
06 �����	14 ���� ����� 
07 ��� 	15 ���� ��� 
*/
int AddStock(int Num, char Name[], int Prize, int ChangeRate);
/*
-�ֽ� �߰� �Լ�
�� �Լ��� ����� ��, �ֽ��� �߰��Ͻ� �� �ֽ��ϴ�.
�Լ� �Ű������� ������� ��ȣ, �̸�, ����, �������� ����ϸ�
�� ������ �´� ���� �Է½� �ֽ��� �����˴ϴ�.
���� �ֽ��� �ϳ� �����Ǿ� ������ 
��ȣ�� �� 0���� ������� ���ּ���. 
*/ 
int ChangeStock(int Num, int ChangeRate);
/*
-�ֽ� ���ݺ��� �Լ�
�� �Լ���, ������ ������ �ֽ��� ������
�����ϰ� ������Ű�� �Լ��Դϴ�. 
ù ��° �Ű������� �ֽ��� ��ȣ�� �ֱ⸸ �ϸ�
������ ������ �������� �����Ͽ� �ֽ��� �����˴ϴ�.
�õ�� ���α׷� ����ٴ� ����Ǵ�, �������� ������.  
*/
int BuyStock(int Num, int Amount); 
int SellStock(int Num, int Amount);
/*
�ֽ� ����/ �Ǹ� �Լ�
�ֽ��� �߰��ϰų� �����Ѵ� 
*/

int AddStock(int Num, char Name[100], int Prize, int ChangeRate){
	
	StockName[Num] = Name;//�ֽ� �̸� �ʱ�ȭ
	StockPrize[Num] = Prize;//�ֽ� ���� �ʱ�ȭ
	StockChangeRate[Num] = ChangeRate;//�ֽ� ������ �ʱ�ȭ 
	
}
int ChangeStock(int Num){
	
	int Rate = (rand() % StockChangeRate[Num] * 2) - StockChangeRate[Num] + 1;
	
	StockPrize += (StockPrize/100) * Rate;
	
}
int BuyStock(int Num, int Amount){
	
	Stock[Num] += Amount; 
	
}
int SellStock(int Num, int Amount){
	
	Stock[Num] += Amount; 
	
}
int ColorString(int Color,char String[]){
		
	SetConsoleTextAttribute( GetStdHandle( STD_OUTPUT_HANDLE ),Color);
	
	printf("%s",String);
		
	return 0;
		
}
int ShowStockList(){
	
	
	
}
