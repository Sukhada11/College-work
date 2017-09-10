class Test11{
int a;
Test11(int i){
a=i;
}
void Swap (Test11 t){
int temp;
temp=this.a;
this.a=t.a;
t.a=temp;
}
}