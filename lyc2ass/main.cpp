#include<bits/stdc++.h>
#include<windows.h>
#include<stdlib.h>
#include"msgsw.h"
#define obj (void)
using namespace std;
int main(){
notice("lyc2ass v0.1 by object-a");
string ReadObject(string INI,unsigned ig);
int PC;
string rst=ReadObject("C:\\Users\\Administrator\\Desktop\\Œﬁ±ÍÃ‚.ass",3);
rst=="" ? exit(1) : obj 0;
const char* lycrst=ReadObject("C:\\Users\\Administrator\\Desktop\\j.lyc.txt",3).data();

}
string ReadObject(string INI,unsigned ig){

     ifstream ifs;
     ifs.open(INI, ios::in);
     if (!ifs.is_open()) {
         error("Unexpected Error");
         exit(-1);
        return NULL;
      }
      ifs.seekg(ig, ios::beg);
     string buf;
     while (getline(ifs, buf)) {
        cout << buf << endl;
     }

      ifs.close();
return buf; 
}
