#include <iostream>

using namespace std;
 
class Box
{
   public:
      int c;
      // ��Ա��������
      double d(void);
      
};
// ��Ա��������
double Box::d(void)
{
	double d(const char* s);
    return c+(double)'0'+d("�����������������ԡ�");
}
 
int main( )
{ 
Box a;
return (int)a.d();
}
double d(const char* s){return (double)printf(s);
}
