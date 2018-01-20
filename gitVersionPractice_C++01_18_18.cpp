
/* practice_C++01_18_18*/
#include<iostream>
#include<string>

using namespace std;

int main() {
	std::cout<<"Nic's a cutie!\n";   //Nics' given name is Nicole 
	std::cout<<"I'm a C++ program.\n";
	std::cout<<"I'm looking forward to being shown to Nic! <3~<3\n"; //Nic's a close friend so I wanted to give a shout out in my code!
	int beta = 12;
	int alpha = 14;
	const float pi = 3.1415;
	double result;
	result = pi * alpha * beta;
	std:cout<< result << '\n';
	string mystringycheese;
	mystringycheese = "Stringy cheesy goodness!";
	string cumOverBabi;
	cumOverBabi = "Come on over, come on over BayBey";
	std::cout << cumOverBabi << '\n';
	std::cout<< "(pi * pi /2) * beta(1)" << '\n' ;
	std::cout << (pi * pi /2) * beta << '\n';
	double DpiDbeta = 2 * pi / 2;
	std::cout << 
	"The derivitive of y = beta * (pi^2)/2 with respect to beta is approximately ";
	std::cout<< DpiDbeta << '\n';
	std::cout << "What is beta(1)?"<< '\n';
	std::cout << "what does this do?\n";


	/* a>b ? a : b      // evaluates to whichever is greater, a or b.   */

	double r = 1.0; // radius as a float
 	double circleArea = pi * r * r;
 	double circleDiam = pi * 2 * r ; 
	std::cout<< "The diameter of a circle with radius 1 is ";
	std::cout<< circleDiam << '\n';
	int x = 0;
	int i;
	float f = 3.14;
	i = (int) f; 
	// C style type casting, analogous to coersion in R, like int to numeric etc
  std::cout << i<< '\n';
  int a = 1LL;
  int n;
  for ( int n = 0; n < 5; ++n) {
  a = a * (a+1); }

  std::cout<< a << '\n' ;
  int l = 0;
  do {
  	l += 1;
  } 
  while (l < 100, l < 50, l < 15);  // just to see if I can chain conditions w/o a problem
  // it works!! :)
  std::cout<< l << '\n';

 
  n = 0;
  for( n; n < 500; ++n) {
  n *= n+1;
  if(n >= 400) {
  	cout<< "Too many loops. Stop!\n";
  	break;  // did this just to work with the break statement
  }
  } 
  cout<< n << '\n';
  float n2 = 1.25; //had to change from n -> n2 bc it won't let me redeclare n, as a new type or as the same type (for different reasons I think)
for(int i = 0; n2 < 450; ++i) {
  n2 += (n2 * n2)/(2 *n2);
  if(n2>=400) continue;
  std::cout << n2 << '\n';
} // did this to work with the continue statement, also to test if I can redeclare a variable



/* interesting
// goto loop example
#include <iostream>
using namespace std;

int main ()
{
  int n=10;
mylabel:
  cout << n << ", ";
  n--;
  if (n>0) goto mylabel;
  cout << "liftoff!\n";
}
from: http://www.cplusplus.com/doc/tutorial/control/
*/








	return 0;
}
 