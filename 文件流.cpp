#include<iostream>
#include<fstream>
using namespace std;

int main(){

    char data[100];

    // д��

    ofstream outfile;
    outfile.open("afile.txt");

    cout<<"writing to the file"<<endl;
    cout<<"Enter your name:";
    cin.getline(data,100);

    outfile<<data<<endl;

    cout<<"Enter your age:";
    cin>>data;
    cin.ignore();

    outfile<<data<<endl;

    outfile.close();


     // �Զ�ģʽ���ļ�
   ifstream infile;
   infile.open("afile.txt");

   cout << "Reading from the file" << endl;
   infile >> data;

   // ����Ļ��д������
   cout << data << endl;

   // �ٴδ��ļ���ȡ���ݣ�����ʾ��
   infile >> data;
   cout << data << endl;

   // �رմ򿪵��ļ�
   infile.close();

    return 0;
}
