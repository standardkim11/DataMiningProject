#include <stdio.h>
#include <windows.h>

int main()
{
	//�Էº��� 
	float variance;
	float skewness;
	float kurtosis;
	float entropy;

	//������ �Էºκ� 
	printf("���� �̹����� �л� ���� �Է��Ͻÿ�(�Ҽ��� ��°�ڸ�����):");
	scanf("%f",&variance);
	
	printf("���� �̹����� �ֵ� ���� �Է��Ͻÿ�(�Ҽ��� ��°�ڸ�����):");
	scanf("%f", &skewness);

	printf("���� �̹����� ÷�� ���� �Է��Ͻÿ�(�Ҽ��� ��°�ڸ�����):");
	scanf("%f", &kurtosis);

	printf("���� �̹����� ��Ʈ���� ���� �Է��Ͻÿ�(�Ҽ��� ��°�ڸ�����):");
	scanf("%f", &entropy);

	//������ �з��� (J48 �˰��� ���) 
	if (variance <= 0.318f)
	{
		if (skewness > 5.856f)
		{
			if (variance > -3.460f)
			{
				printf("�ش� ����� ��¥ �����Դϴ�.\n");
			}
			else if (variance <= -3.460f)
			{
				printf("�ش� ����� ��¥ �����Դϴ�.\n");
			}
		}
		else if (skewness <= 5.856f)
		{
			if (kurtosis <= 6.216f)
			{
				printf("�ش� ����� ��¥ �����Դϴ�.\n");
			}
			else if (kurtosis > 6.216f)
			{
				if (skewness <= -4.707)
				{
					printf("�ش� ����� ��¥ �����Դϴ�.\n");
				}
				else if (skewness > -4.707)
				{
					printf("�ش� ����� ��¥ �����Դϴ�.\n");

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
				printf("�ش� ����� ��¥ �����Դϴ�.\n");
			}
			else if (skewness > 7.190f)
			{
				printf("�ش� ����� ��¥ �����Դϴ�.\n");
			}
		}
		else if (kurtosis > -4.388f)
		{
			if (variance > 2.031f)
			{
				printf("�ش� ����� ��¥ �����Դϴ�.\n");
			}
			else if (variance <= 2.031f)
			{
				if (kurtosis <= -2.272f)
				{
					if (skewness <= 5.657f)
					{
						printf("�ش� ����� ��¥ �����Դϴ�.\n");
					}
					else if (skewness > 5.657f)
					{
						printf("�ش� ����� ��¥ �����Դϴ�.\n");
					}
				}
				else if (kurtosis > -2.272f)
				{
					if (entropy <= 0.087f)
					{
						printf("�ش� ����� ��¥ �����Դϴ�.\n");
					}
					else if (entropy > 0.087f)
					{
						if (kurtosis <= -0.023f)
						{
							printf("�ش� ����� ��¥ �����Դϴ�.\n");
						}
						else if (kurtosis > -0.023f)
						{
							if (skewness > -0.300f)
							{
								printf("�ش� ����� ��¥ �����Դϴ�.\n");
							}
							else if (skewness <= -0.300f)
							{
								if (kurtosis <= 3.643f)
								{
									printf("�ش� ����� ��¥ �����Դϴ�.\n");
								}
								else if (kurtosis > 3.643f)
								{
									printf("�ش� ����� ��¥ �����Դϴ�.\n");
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