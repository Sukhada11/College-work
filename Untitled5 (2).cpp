int sum=0;
int currsum=0;
for(int i=9;i>=0;i--){
		
	for(int j=0;j<r;j++){
		
	// cout<<x[i];
	string curr=x[j];
	cout<<curr<<endl;
	char c=curr[i];
	cout<<c<<endl;
	int num;

	switch(c){
	case '1':
		num=1;
		break;
		case '2':
		num=2;
			break;
		case '3':
		num=3;	break;case '4':
		num=4;	break;case '5':
		num=5;	break;case '6':
		num=6;	break;case '7':
		num=7;	break;case '8':
		num=8;	break;case '9':
		num=9;	break;case'0':
			num=0 ;break;
	}
	currsum=currsum+num;
	
	
}
if (currsum>10){
	int y=currsum%10;
	int car=currsum/10;
	sum=y+10*sum
	currsum=car;
	
}
else
{
	sum=sum*10+currsum;
	currsum=0;
}
