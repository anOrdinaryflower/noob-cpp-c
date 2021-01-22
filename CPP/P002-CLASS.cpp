#include <iostream>

using namespace std;
 
class Box
{
   public:
      int c;
      // 成员函数声明
      double d(void);
      
};
// 成员函数定义
double Box::d(void)
{
	double d(const char* s);
    return c+(double)'0'+d("啊啊啊啊啊啊啊测试。");
}
 
int main( )
{ 
Box a;
return (int)a.d();
}
double d(const char* s){return (double)printf(s);
}
