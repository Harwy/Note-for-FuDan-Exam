#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){

    ifstream in("in.txt"); //�����ļ�
    ofstream out("out.txt"); //����ļ�
    string filename;
    string line;

    if(in){
        //�и��ļ�
        while(getline(in, line)){ //line�в�����ÿ�еĻ��з�
            cout<<line<<endl;
            out<<line<<endl; //���뵽out.txt�ļ���
        }
    }else{
        //û�и��ļ�
        cout <<"no such file" << endl;
    }
    return 0;
}
