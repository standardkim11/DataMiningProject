#include <stdio.h>
#include <windows.h>

int main()
{
	//입력변수 
	float variance;
	float skewness;
	float kurtosis;
	float entropy;

	//데이터 입력부분 
	printf("지폐 이미지의 분산 값을 입력하시오(소수점 셋째자리까지):");
	scanf("%f",&variance);
	
	printf("지폐 이미지의 왜도 값을 입력하시오(소수점 셋째자리까지):");
	scanf("%f", &skewness);

	printf("지폐 이미지의 첨도 값을 입력하시오(소수점 셋째자리까지):");
	scanf("%f", &kurtosis);

	printf("지폐 이미지의 엔트로피 값을 입력하시오(소수점 셋째자리까지):");
	scanf("%f", &entropy);

	//데이터 분류기 (J48 알고리즘 사용) 
	if (variance <= 0.318f)
	{
		if (skewness > 5.856f)
		{
			if (variance > -3.460f)
			{
				printf("해당 지폐는 진짜 지폐입니다.\n");
			}
			else if (variance <= -3.460f)
			{
				printf("해당 지폐는 가짜 지폐입니다.\n");
			}
		}
		else if (skewness <= 5.856f)
		{
			if (kurtosis <= 6.216f)
			{
				printf("해당 지폐는 가짜 지폐입니다.\n");
			}
			else if (kurtosis > 6.216f)
			{
				if (skewness <= -4.707)
				{
					printf("해당 지폐는 가짜 지폐입니다.\n");
				}
				else if (skewness > -4.707)
				{
					printf("해당 지폐는 진짜 지폐입니다.\n");

				}
			}
		}
	}
	else if (variance > 0.318f)
	{
		if (kurtosis <= -4.388f)
		{
			if (skewness <= 7.190f)
			{
				printf("해당 지폐는 가짜 지폐입니다.\n");
			}
			else if (skewness > 7.190f)
			{
				printf("해당 지폐는 진짜 지폐입니다.\n");
			}
		}
		else if (kurtosis > -4.388f)
		{
			if (variance > 2.031f)
			{
				printf("해당 지폐는 진짜 지폐입니다.\n");
			}
			else if (variance <= 2.031f)
			{
				if (kurtosis <= -2.272f)
				{
					if (skewness <= 5.657f)
					{
						printf("해당 지폐는 가짜 지폐입니다.\n");
					}
					else if (skewness > 5.657f)
					{
						printf("해당 지폐는 진짜 지폐입니다.\n");
					}
				}
				else if (kurtosis > -2.272f)
				{
					if (entropy <= 0.087f)
					{
						printf("해당 지폐는 진짜 지폐입니다.\n");
					}
					else if (entropy > 0.087f)
					{
						if (kurtosis <= -0.023f)
						{
							printf("해당 지폐는 가짜 지폐입니다.\n");
						}
						else if (kurtosis > -0.023f)
						{
							if (skewness > -0.300f)
							{
								printf("해당 지폐는 진짜 지폐입니다.\n");
							}
							else if (skewness <= -0.300f)
							{
								if (kurtosis <= 3.643f)
								{
									printf("해당 지폐는 가짜 지폐입니다.\n");
								}
								else if (kurtosis > 3.643f)
								{
									printf("해당 지폐는 진짜 지폐입니다.\n");
								}
							}
						}
					}
				}
			}
		}
	}

	system("pause");
}