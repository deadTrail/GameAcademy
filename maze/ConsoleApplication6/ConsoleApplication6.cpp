// GameAcademyLecture_Array.cpp : 콘솔 응용 프로그램에 대한 진입점을 정의합니다.
//

#include "keyprocessing.h"
#include "mapDraw.h"

int main()
{
	Title();
	while (true)
	{
		KeyProcessing();
		MapPrint();
	}
	return 0;
}



