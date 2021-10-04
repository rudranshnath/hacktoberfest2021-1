#include <iostream.h>
#include <conio.h>
void main()
{
	clrscr();
	int num,rem,orig,rev=0;
	cout<< "\n  E n t e r     a     n o .     :    ";
	cin>>num;
	orig=num;
	while(num!=0)
	{
		rem=num%10;
		rev=rev*10+rem;
		num=num/10;
	}
	if(rev==orig) //Here,given no. is palindrome.
	{
	    cout<<"\n Given no. is  Palindrome !!!\n";
	}

	else
	{
		cout<<"\nNot Palindrome\n"; //Here given no. is not a palindrome .
	}
	getch();
}
