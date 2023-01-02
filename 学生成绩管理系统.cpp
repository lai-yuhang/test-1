#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
// �˵�
void main_menu()
{
	printf("=================================\n");
	printf("=       ѧ���ɼ�����ϵͳ        =\n");
	printf("=          1.��ʦ               =\n");
	printf("=          2.ѧ��               =\n");
	printf("=          0.�˳�ϵͳ           =\n");
	printf("=================================\n");
}
void teacher_do_menu()
{
	printf("=================================\n");
	printf("=             ��ʦ              =\n");
	printf("=          1.ѧ������           =\n");
	printf("=          2.�ɼ�����           =\n");
	printf("=          0.�˳�ϵͳ           =\n");
	printf("=================================\n");
}
void teacher_menu()
{
	printf("=================================\n");
	printf("=            ѧ��ģ��           =\n");
	printf("=        1.����ѧ����Ϣ         =\n");
	printf("=        2.ɾ��ѧ����Ϣ         =\n");
	printf("=        3.�޸�ѧ����Ϣ         =\n");
	printf("=        4.��ʾѧ����Ϣ         =\n");
	printf("=        5.ͳ��ѧ����Ϣ         =\n");
	printf("=        6.ѧ���ļ���ȡ         =\n");
	printf("=        7.ѧ���ļ��浵         =\n");
	printf("=        8.��ѯѧ����Ϣ         =\n");
	printf("=        9.ѧ���ɼ�����         =\n");
	printf("=        0.�˳�ϵͳ             =\n");
	printf("=================================\n");
}
void score_menu()
{
	printf("=================================\n");
	printf("=           �ɼ�ģ��            =\n");
	printf("=        1.���ӳɼ���Ϣ         =\n");
	printf("=        2.ɾ���ɼ���Ϣ         =\n");
	printf("=        3.�޸ĳɼ���Ϣ         =\n");
	printf("=        4.��ʾ�ɼ���Ϣ         =\n");
	printf("=        5.ͳ�Ƴɼ���Ϣ         =\n");
	printf("=        6.�ɼ��ļ���ȡ         =\n");
	printf("=        7.�ɼ��ļ��浵         =\n");
	printf("=        8.��ѯ�ɼ���Ϣ         =\n");
	printf("=        9.ѧ���ɼ�����         =\n");
	printf("=        0.�˳�ϵͳ             =\n");
	printf("=================================\n");
}
void student_menu()
{
	printf("=================================\n");
	printf("=            ѧ��               =\n");
	printf("=        1.��ѯ������Ϣ         =\n");
	printf("=        2.��ѯ����ɼ�         =\n");
	printf("=        3.�޸�����             =\n");
	printf("=        0.�˳�ϵͳ             =\n");
	printf("=================================\n");
}
//������Ϣ
void add()
{
	printf("==========������Ϣ=========\n");

	printf("������ѧ�ţ�\n");
	scanf("%s", s[temp_number].id);
	for (int i = 0; i < temp_number; i++)
	{
		if (!strcmp(s[temp_number].id, s[i].id))
		{
			printf("���ڸ�ѧ�ţ����ʧ�ܣ�\n");
			return;
		}
	}
	printf("������������\n");
	scanf("%s", s[temp_number].name);
	printf("�������Ա�\n");
	scanf("%s", s[temp_number].sex);
	printf("���������룺\n");
	scanf("%s", s[temp_number].pwd);
	temp_number++;
	printf("=======�����Ϣ�ɹ�======\n");
}
//���ӳɼ�
void add_score()
{

	int temp = 0;
	printf("������ѧ�ţ�\n");
	scanf("%s", score[number].id);
	for (int i = 0; i < temp_number; i++)
	{
		if (!strcmp(score[number].id, s[i].id))
		{
			temp++;
		}
	}

	if (temp == 0)
	{
		printf("�����ڸ���Ϣ�����ʧ��\n");
		return;
	}

	for (int i = 0; i < number; i++)
	{
		if (!strcmp(score[number].id, score[i].id))
		{
			printf("�Ѿ���Ӹ�ѧ���ɼ���Ϣ�����ʧ�ܣ�\n");
			return;
		}
	}

	printf("���������ĳɼ���\n");
	scanf("%f", &score[number].chinese);
	printf("��������ѧ�ɼ���\n");
	scanf("%f", &score[number].math);
	number++;
	printf("=======�����Ϣ�ɹ�======\n");
}
//��ʾ��Ϣ
void showAll()
{
	printf("==========��ʾ��Ϣ=========\n");
	for (int i = 0; i < temp_number; i++)
	{
		printf("ѧ�ţ�%s\t", s[i].id);
		printf("������%s\t", s[i].name);
		printf("�Ա�%s\t", s[i].sex);
		printf("���룺%s\t", s[i].pwd);
	}
	printf("=======��ʾ��Ϣ����======\n");
}
//��ʾ�ɼ�
void show_score()
{
	printf("==========��ʾ�ɼ�=========\n");
	for (int i = 0; i < number; i++)
	{
		printf("ѧ�ţ�%s\t", score[i].id);
		printf("���ĳɼ���%0.2f\t", score[i].chinese);
		printf("��ѧ�ɼ���%0.2f\n", score[i].math);
	}
	printf("=======��ʾ��Ϣ����======\n");
}
//������Ϣ
void search()
{

	printf("==========������Ϣ=========\n");
	printf("1.����ѧ�Ų�ѯ\n");
	printf("2.����������ѯ\n");
	printf("���������ѡ��\n");
	int ch;
	scanf("%d",&ch);
	if (ch == 1)
	{
		printf("��������Ҫ���ҵ�ѧ�ţ�\n");
		char id[20];
		int a = 1;
		scanf("%s", id);
		for (int i = 0; i < temp_number; i++)
		{
			if (!strcmp(id, s[i].id))
			{

				printf("ѧ�ţ�%s\t", s[i].id);
				printf("������%s\t", s[i].name);
				printf("�Ա�%s\t", s[i].sex);
				printf("���룺%s\t", s[i].pwd);
				a = 0;
				break;
			}
		}
		if (a == 1)
		{
			printf("û�и���Ϣ��\n");
		}
		printf("=======���ҽ���======\n");
	}
	else if (ch == 2)
	{
		printf("��������Ҫ���ҵ�������\n");
		char name[20];
		int a = 1;
		scanf("%s", name);
		for (int i = 0; i < temp_number; i++)
		{
			if (!strcmp(name, s[i].name))
			{

				printf("ѧ�ţ�%s\t", s[i].id);
				printf("������%s\t", s[i].name);
				printf("�Ա�%s\t", s[i].sex);
				printf("���룺%s\t", s[i].pwd);
				a = 0;
				break;
			}
		}
		if (a == 1)
		{
			printf("û�и���Ϣ��\n");
		}
		printf("=======���ҽ���======\n");
	}
	else
	{
		printf("��������\n");
		return;
	}
	

	

}
//���ҳɼ�
void search_score()
{

	printf("��������Ҫ���ҵ�ѧ�ţ�\n");
	char id[20];
	int a = 1;
	scanf("%s", id);
	for (int i = 0; i < number; i++)
	{
		if (!strcmp(id, score[i].id))
		{

			printf("ѧ�ţ�%s\t", score[i].id);
			printf("���ĳɼ���%0.2f\t", score[i].chinese);
			printf("��ѧ�ɼ���%0.2f\n", score[i].math);
			a = 0;
			break;
		}
	}
	if (a == 1)
	{
		printf("û�и���Ϣ��\n");
	}
	printf("=======���ҽ���======\n");



}
//ͳ����Ϣ
void countList()
{
	printf("==========ͳ����Ϣ=========\n");
	printf("ѧ������Ϊ��%d\n", temp_number);

	for (int i = 0; i < number; i++)
	{
		printf("ѧ�ţ�%s\t", score[i].id);
		printf("�ܳɼ���%0.2f\n", score[i].chinese+ score[i].math);
	}
	printf("=======ͳ�ƽ���======\n");

}
//�޸���Ϣ
void modify()
{
	printf("==========�޸���Ϣ=========\n");
	printf("��������Ҫ�޸ĵ�ѧ�ţ�\n");
	char id[20];
	int a = 1;
	scanf("%s", id);
	for (int i = 0; i < temp_number; i++)
	{
		if (!strcmp(id, s[i].id))
		{
			printf("������������\n");
			scanf("%s", s[i].name);
			printf("�������Ա�\n");
			scanf("%s", s[i].sex);
			printf("���������룺\n");
			scanf("%s", s[i].pwd);

			a = 0;
			break;
		}
	}
	if (a == 1)
	{
		printf("û�и���Ϣ���޸�ʧ�ܣ�\n");
	}

	printf("=======�޸���Ϣ���======\n");
}
//�޸ĳɼ�
void modify_score()
{
	printf("==========�޸���Ϣ=========\n");
	printf("��������Ҫ�޸ĵ�ѧ�ţ�\n");
	char id[20];
	int a = 1;
	scanf("%s", id);
	for (int i = 0; i < number; i++)
	{
		if (!strcmp(id, s[i].id))
		{

			printf("���������ĳɼ���\n");
			scanf("%f", &score[i].chinese);
			printf("��������ѧ�ɼ���\n");
			scanf("%f", &score[i].math);
			a = 0;
			break;
		}
	}
	if (a == 1)
	{
		printf("û�и���Ϣ���޸�ʧ�ܣ�\n");
	}

	printf("=======�޸���Ϣ���======\n");
}
//ɾ����Ϣ
void del()
{
	printf("==========ɾ����Ϣ=========\n");
	printf("��������Ҫɾ����ѧ�ţ�\n");
	char id[20];
	int a = 1;
	scanf("%s", id);
	for (int i = 0; i < temp_number; i++)
	{
		if (!strcmp(id, s[i].id))
		{
			a = 0;
			for (int j = i; j < temp_number - 1; j++)
			{
				s[j] = s[j + 1];
			}
			temp_number--;
			printf("ɾ���ɹ���\n");
			break;
		}
	}

	if (a == 1)
	{
		printf("û�и���Ϣ��\n");
	}
	printf("=======ɾ������======\n");
}
//ɾ���ɼ�
void del_score()
{
	printf("==========ɾ����Ϣ=========\n");
	printf("��������Ҫɾ����ѧ�ţ�\n");
	char id[20];
	int a = 1;
	scanf("%s", id);
	for (int i = 0; i < number; i++)
	{
		if (!strcmp(id, score[i].id))
		{
			a = 0;
			for (int j = i; j < number - 1; j++)
			{
				score[j] = score[j + 1];
			}
			number--;
			printf("ɾ���ɹ���\n");
			break;
		}
	}

	if (a == 1)
	{
		printf("û�и���Ϣ��\n");
	}
	printf("=======ɾ������======\n");
}
//��Ϣ�����ļ�
void saveList()
{
	FILE* file;
	if ((file = fopen("student.txt", "w")) == NULL)
	{
		printf("�ļ���ʧ�ܣ�");
		exit(0);
	}

	for (int i = 0; i < temp_number; i++)
	{
		fprintf(file, "%s  ", s[i].id);
		fprintf(file, "%s  ", s[i].name);
		fprintf(file, "%s  ", s[i].sex);
		fprintf(file, "%s\n", s[i].pwd);
	}
	fclose(file);
	printf("�ļ�����ɹ���\n");


}
//�ɼ������ļ�
void save_score()
{
	FILE* file;
	if ((file = fopen("score.txt", "w")) == NULL)
	{
		printf("�ļ���ʧ�ܣ�");
		exit(0);
	}

	for (int i = 0; i < number; i++)
	{
		fprintf(file, "%s  ", score[i].id);
		fprintf(file, "%f  ", score[i].chinese);
		fprintf(file, "%f\n", score[i].math);
	}
	fclose(file);
	printf("�ļ�����ɹ���\n");


}
