double Foo(float bar1,float bar2); 
int main(){
	double (*bar)(float,float)=Foo;
	return (int)bar(1.2,9.66);
} 
double Foo(float bar1,float bar2){
	return bar1+bar2;
} 
