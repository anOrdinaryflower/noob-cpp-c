#include <bits/stdc++.h>
#include <windows.h>
#include <wininet.h>
#include <tchar.h>
#define N 100
void uchar2char(BYTE str1[],char* str2);
constexpr auto MAXSIZE = 1024;
void urlopen(const _TCHAR*, const _TCHAR* agent);
int _tmain()
{//vmidÊÇuid 
while(1) 
urlopen(_T("https://api.bilibili.com/x/relation/stat?vmid=777536"),_T("¦²(¨‘¨Œ¨‘\"a"));
	return 0;
}
void urlopen(const _TCHAR* url,const _TCHAR* agent)
{
size_t ustrlen(BYTE s[]);
char *Mid(const char *a,int i,int j);
	HINTERNET hSession = InternetOpen(agent, INTERNET_OPEN_TYPE_PRECONFIG, NULL, NULL, 0);
	if (hSession != NULL)
	{
		HINTERNET hHttp = InternetOpenUrl(hSession, url, NULL, 0, INTERNET_FLAG_DONT_CACHE, 0);
		if (hHttp != NULL)
		{
			BYTE Temp[MAXSIZE];
			ULONG Number = 1;
			while (Number > 0)
			{
				InternetReadFile(hHttp, Temp, MAXSIZE - 1, &Number);
				Temp[Number] = '\0';
				char*tp=(char*)malloc(sizeof(char)*ustrlen(Temp));
                uchar2char(Temp,tp);
				std::string t=tp;
                std::cout<<Mid(t.data(),118,7)<<std::endl;
			}
			InternetCloseHandle(hHttp);
			hHttp = NULL;
		}
		InternetCloseHandle(hSession);
		hSession = NULL;
	}
	Sleep(1000*60*10);
}
void uchar2char(BYTE str1[],char* str2){
!str1||!str2 ?void(std::cout<<"ERROR"),exit(-1):(void)0;
//ÃÔ»ó´úÂë´óÉÍ 
size_t ustrlen(BYTE s[]);
for(size_t i;i<ustrlen(str1);++i) 
i[str2]=(char)i[str1];
}
size_t ustrlen(BYTE s[])
{
size_t ilength=0;
while(*s++!='\0')
ilength++;
return ilength;
}
char *Mid(const char *a,int i,int j)
{
    int m,t=0;
    static char b[N]; 

    for(m=i-1;m<i+j-1;m++)
    {
        b[t++]=a[m];
    }
    b[t]=0;
    return b;
}
