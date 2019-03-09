#include<fstream>
#include<iostream>
using namespace std;
int main(){
    int a=1;
    ofstream fout("out.dat",ios::out);
    ifstream fin("in.dat",ios::in);
    fout<<a;
    fin>>a;
    fout.close();
    fin.close();
}
