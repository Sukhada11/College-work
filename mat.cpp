#include<iostream>
using namespace std;

class Matrix
{
int a[3][3];
public:
	Matrix(){
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cin>>a[i][j];
			}
			
			
		}
	}
		Matrix(int){
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				a[i][j]=0;
			}
			cout<<endl;
			
		}
	}
	void display(){
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
			cout<<a[i][j]<<" ";
			}
			cout<<endl;
			
		}	
	}
	friend Matrix operator +(Matrix m,Matrix n);
	friend Matrix operator *(Matrix m,Matrix n);
};
Matrix operator +(Matrix m,Matrix n){
	Matrix ans(0);
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			ans.a[i][j]=m.a[i][j]+n.a[i][j];
		}
	}
	return ans;
	
}





Matrix operator *(Matrix c,Matrix b){


          Matrix  mult(0);
       

    
    for(int i = 0; i < 3; ++i)
        for(int j = 0; j < 3; ++j)
            for(int k = 0; k < 3; ++k)
            {
                mult.a[i][j] += c.a[i][k] * b.a[k][j];
            }

return mult;

}

int main(){
	Matrix a,b;
	Matrix c(0);
	c=a*b;
	a.display();
	b.display();
	c.display();
}
	





	

