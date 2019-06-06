#include <stdio.h>      /* printf */
#include <stdlib.h>     /* strtol */
#include <iostream>

using namespace std;

int main ()
{
  char szNumbers[] = "2001 60c0c0 -1101110100110100100000 0x6fffff";
  char * pEnd;
  long int li1, li2, li3, li4;
  cout << "pEnd: " << pEnd << " -- &pEnd : " << &pEnd << endl;
  li1 = strtol (szNumbers,* pEnd,10);  cout << "pEnd: " << pEnd << " -- &pEnd : " << &pEnd << endl;
  cout << "pEnd: " << pEnd << " -- &pEnd : " << &pEnd << endl;
  li2 = strtol (pEnd,&pEnd,16);
  cout << "pEnd: " << pEnd << " -- &pEnd : " << &pEnd << endl;
  li3 = strtol (pEnd,&pEnd,2);
  cout << "pEnd: " << pEnd << " -- &pEnd : " << &pEnd << endl;
  li4 = strtol (pEnd,NULL,0);
  cout << "pEnd: " << pEnd << " -- &pEnd : " << &pEnd << endl;
  printf ("The decimal equivalents are: %ld, %ld, %ld and %ld.\n", li1, li2, li3, li4);
  return 0;
}
/* http://www.cplusplus.com/reference/cstdlib/strtol/ */