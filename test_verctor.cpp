//vector��һά����

/*#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
	{
		int m,n;
		cout << "please input m:";
		cin >> m;
		cout << "please input n:";
		cin >> n;
		vector<int> a(m);
		vector<int> b(n,0);


		for (int j = 0; j < m; j++)
		{
			a.push_back(5);//��������5
			a.insert(a.begin()+1,8);//�м�����λ�ò���8
		}
		#if 0
		cout << "please input n numble:";
		for (int i = 0; i < n; i++)
		{
		cin >> b[i];
		}
        #endif
		for (vector<int>::iterator it = a.begin(); it != a.end();++it)//����vector�����ʽ
			cout << *it << " ";
		cout << "\n";
		//sort(a.begin(), a.end());
		copy(a.begin(), a.end(), b.begin()+1);
		for (vector<int>::iterator it = b.begin(); it != b.end(); ++it)
			cout << *it << " ";


		system("pause");
		return 0;
	}*/


//��ά�������������
/*#include<iostream>
#include<vector>

using namespace std;

int main()
{
	vector< vector<int> > b(10, vector<int>(5, 1));//��ά�����ĳ�ʼ��
	//cin >> b[1][2];
	//cin >> b[2][4];
	//cin >> b[3][4];
	for (int m = 0; m < 10; m++)
	{
		for (int n = 0; n < 5;n++)
			b.push_back
	}

	for (int i = 0; i < b.size(); i++)//���������
	{
		for (int j = 0; j < b[i].size(); j++)//�����������ĸ���
			cout << b[i][j] << " ";
		cout << "\n";
	}
	system("pause");
	return 0;
}*/

//vectorA��vectorB���໥Ƕ��
#include <cstdio>
#include<iostream>
#include <vector>
#include <string>
using namespace std;
	class AClass
	{
	public:
		int num;
		string name;
	};
	struct AStruct
	{
		int num;
		string name;
	};
	void TestStruct()
	{
		//���ʹ��
		AClass Ac;
		vector<AClass> vc;
		Ac.num = 10;
		Ac.name = "name";
		vc.push_back(Ac);
		AClass d;
		for (vector<AClass>::iterator it = vc.begin(); it<vc.end(); ++it)
		{
			d = *it;
			cout << d.num <<"\n"<< d.name << endl;
		}
		//�ṹ���ʹ��
		AStruct As;
		vector<AStruct> vs;
		As.num = 10;
		As.name = "name";
		vs.push_back(As);
		AStruct ds;
		for (vector<AStruct>::iterator it = vs.begin(); it < vs.end(); ++it)
		{
			ds = *it;
			cout << ds.num << endl;
		}
	}
	void TestPoint()
	{
		//���ʹ��
		AClass *Ac = new AClass;
		vector<AClass *> vc;
		Ac->num = 10;
		Ac->name = "name";
		vc.push_back(Ac);
		AClass *d;
		for (vector<AClass*>::iterator it = vc.begin(); it<vc.end(); ++it)
		{
			d = *it;
			cout << d->num << endl;
		}
	}
	int main()
	{
		TestStruct();
		TestPoint();
		int n;
		cin >> n;
		system("pause");
		return 0;
	}
