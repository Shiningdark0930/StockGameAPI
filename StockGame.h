//이 헤더는 오로지 주식 게임을 위해 만들어진 헤더입니다.
//간단한 주식 시스템을 구현하실 수 있습니다. 

#include<stdio.h>
#include<stdlib.h> 
#include<time.h>
#include<windows.h>

//주식 관련 변수
/*
주식의 최대 갯수는 20개로 지정되어 있습니다.
더 많은 주식을 만들고 싶으시면, 
-StockName
-StockPrize
-StockChangeRate
이 3개의 변수 배열의 한도를 늘려주세요. 
*/ 

srand(time(NULL));//시드 생성 

int StockName[20][100];//주식 이름 선언
int StockPrize[20];//주식  가격 선언
int StockChangeRate[20];//주식 가격 변동률 
int Stock[20];//주식 보유 갯수  

int ColorString(int Color,char String[]);
/*
-색깔 출력 함수 
색깔 코드표 정리
00 검정색	08 회색 
01 파란색	09 연한 파란색	 
02 초록색	10 연한 초록색 
03 옥색	    11 연한 옥색 
04 빨간색	12 연한 빨간색 
05 자주색	13 연한 자주색 
06 노란색	14 연한 노란색 
07 흰색 	15 진한 흰색 
*/
int AddStock(int Num, char Name[], int Prize, int ChangeRate);
/*
-주식 추가 함수
이 함수를 사용할 시, 주식을 추가하실 수 있습니다.
함수 매개변수는 순서대로 번호, 이름, 가격, 변동률을 담당하며
각 변수에 맞는 값을 입력시 주식이 생성됩니다.
샘플 주식이 하나 생성되어 있으며 
번호는 꼭 0부터 순서대로 써주세요. 
*/ 
int ChangeStock(int Num, int ChangeRate);
/*
-주식 가격변동 함수
이 함수는, 사전에 생성한 주식의 가격을
랜덤하게 변동시키는 함수입니다. 
첫 번째 매개변수에 주식의 번호를 넣기만 하면
사전에 설정된 변동률을 적용하여 주식이 변동됩니다.
시드는 프로그램 실행바다 변경되니, 걱정하지 마세요.  
*/
int BuyStock(int Num, int Amount); 
int SellStock(int Num, int Amount);
/*
주식 구매/ 판매 함수
주식을 추가하거나 제거한다 
*/

int AddStock(int Num, char Name[100], int Prize, int ChangeRate){
	
	StockName[Num] = Name;//주식 이름 초기화
	StockPrize[Num] = Prize;//주식 가격 초기화
	StockChangeRate[Num] = ChangeRate;//주식 변동률 초기화 
	
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
