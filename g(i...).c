/*# echo 
# "g(i,x,t,o)
# {return((3&x&(i*((3&i>>16?\"BY}6YB6%\":\"Qj}6jQ6%\")[t%8]+51)>>o))<<4);};
# main(i,n,s)
# {
# 	for(i=0;;i++)
# 	putchar(g(i,1,n=i>>14,12)+g(i,s=i>>17,n^i>>13,10)+g(i,s/3,n+((i>>11)%3),10)+g(i,s/5,8+n-((i>>10)%3),9));}"|gcc -xc -&&./a.out > nerdymusic.txt &
*/
/*
#  https://stackoverflow.com/questions/1855459/maximum-value-of-int
   https://stackoverflow.com/questions/9384448/how-many-bytes-does-a-string-take-a-char#9384476
	https://www.tutorialspoint.com/c_standard_library/limits_h.htm
	*/
#include <stdio.h>
#include <limits.h>
g(i,a,n)
{return i<<n&a;}
main(i,a,b,c)
{
	//using namespace std;
	a = 2^3;
	b = -1 << 2 ;
	int max = INT_MAX;
	for(i=0; i < max; i++)
	{
		c = g(i,a,b);
		b;
		b++;
		putchar(b);
	}
	//printf(b);
	return 0;

}
