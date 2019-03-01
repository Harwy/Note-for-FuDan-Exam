#include<iostream>
#include<fstream>
using namespace std;

int main(){

    char data[100];

    // 写入

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


     // 以读模式打开文件
   ifstream infile;
   infile.open("afile.txt");

   cout << "Reading from the file" << endl;
   infile >> data;

   // 在屏幕上写入数据
   cout << data << endl;

   // 再次从文件读取数据，并显示它
   infile >> data;
   cout << data << endl;

   // 关闭打开的文件
   infile.close();

    return 0;
}
