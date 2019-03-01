/*
字符串Hash
大写字母A~Z转化为0~25的数字
26个大写字母转化为二十六进制
*/
int hashFunc(char S[], int len){
    int id = 0;
    for(int i=0;i<len;i++){
        id = id * 26 + (S[i] - 'A');
    }
    return id;
}