#include <stdio.h>
#include <assert.h>
#include <string.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>

string ari(string s)
{
 int i;
 float cha=0.000000;
 float words=0.000000;
 float sentence=0.000000;
 for(i=0;s[i]!='\0';i++)
 {
  if(isalnum(s[i]))
  {
    ++cha;
  }
 }

  for(i=0;s[i]!='\0';i++)
 {
  if(s[i]=='.' || s[i]=='?' || s[i]=='!')
  {
    ++sentence;
  }
 }

  for(i=0;s[i]!='\0';i++)
 {
  if(s[i]==' ')
  {
    ++words;
  }
 }

 
 float result;
 result= (4.71*cha/words) + (0.5*words/sentence) - 21.43;
 int x;
 string w;
 x=ceil(result);
 if(x==1)
 {
  w= "Kindergarten";
  return w;
 }
 if(x==2)
 {
  w="First/Second Grade";
  return w;
 }
 if(x==3)
 {
  w="Third Grade";
  return w;
 }
 if(x==4)
 {
 w="Fourth Grade";
 return w;
}
 if(x==5)
  {
 w="Fifth Grade";
 return w;
}
 if(x==6)
  {
 w="Sixth Grade";
 return w;
}
 if(x==7)
  {
 w="Seventh Grade";
 return w;
}
 if(x==8)
  {
 w="Eigth Grade";
 return w;
}
 if(x==9)
 {
 w="Ninth Grade";
 return w;
}
 if(x==10)
  {
 w="Tenth Grade";
 return w;
}
 if(x==11)
  {
 w="Eleventh Grade";
 return w;
}
 if(x==12)
 {
 w="Twelfth Grade";
 return w;
}
 if(x==13)
 {
 w="College student";
 return w;
}
 if(x==14)
 {
 w="Professor";
 return w;
}
}
