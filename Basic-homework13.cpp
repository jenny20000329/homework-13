#include <iostream>
using namespace std;
int main(void)
{
	int m;
	int s;

		printf("�ڰ���k�b����100�~�H�e�A�W�w�k�k���B�̧C���ת��~�֫h���O�� 18 ���� 16 ���C���ڭ̧�ɥ��˦^�L�h�A�мg�@�q�{�����ϥΪ̿�J�ʧO�M�~�֡A�P�_�b�תk�H�e�L/�o�ण�൲�B\n");
		printf("�k�Ϳ�J1;�k�Ϳ�J2");
		printf("�п�J�ʧO�M�~��\n");
		scanf("%d",&s);
		scanf("%d",&m);

	if( s==1 && m>=18)
	{
		printf("�A�i�H���B\n");
	}
	if( s==1 && m<18)
	{
		printf("�A���i�H���B\n"); 
	}
	if( s==2 && m>=16)
	{
		printf("�p�i�H���B\n");
	}
	if( s==2 && m<16)
	{
		printf("�p���i�H���B\n");
	}
		return 0; 
}
