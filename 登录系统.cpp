#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<Windows.h>
#include<mmsystem.h>
#define MAX 100
typedef struct Student
{
	char id[20];//ѧ��
	char name[20];//����
	char sex[20];//�Ա�
	char pwd[20];//����
}Student;

typedef struct Score
{
	char id[20];//ѧ��
	float chinese;//���ĳɼ�
	float math;//��ѧ�ɼ�
}Score;

//���ѧ����Ϣ��˳���
Student s[MAX];
int temp_number = 0;
Score score[MAX];
int number = 0;



//����Ա��¼
int teacher_login()
{
	char s_id[20];
	char s_password[20];
	int temp = 0;
	printf("�������ʦ�˺ţ�\n");
	scanf("%s", s_id);
	printf("�������ʦ���룺\n");
	scanf("%s", s_password);


	if (!strcmp(s_id, "admin") && !strcmp(s_password, "123"))
	{
		temp++;
		printf("��¼�ɹ���\n");
		return 1;

	}

	if (temp == 0)
	{
		printf("�˺Ż���������󣬵�¼ʧ�ܣ�\n");
		return 0;
	}

}
//ѧ��
int stu_login()
{
	char s_id[20];
	char s_password[20];
	int temp = 0;
	printf("������ѧ�ţ�\n");
	scanf("%s", s_id);
	printf("���������룺\n");
	scanf("%s", s_password);

	for (int i = 0; i < temp_number; i++)
	{
		if (!strcmp(s_id, s[i].id)&& !strcmp(s_password, s[i].pwd))
		{
			temp++;
			printf("��½�ɹ���\n");
			return i;
		}
	}


	if (temp == 0)
	{
		printf("�˺Ż���������󣬵�¼ʧ�ܣ�\n");
		return -1;
	}

}
