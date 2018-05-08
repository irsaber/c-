/*
  invalid:
    "[{(])}"
    "}"
    "{"
    "(]"
    
   valid: 
    "(()){()}[]"
    "()"
    ""
 */
#include <assert.h>
#include <stack>
#include <iostream>
using namespace std;

bool there_is(char top, char current) {
  
  if (top == '(' && current ==')') return true;
  if (top == '[' && current ==']') return true;
  if (top == '{' && current =='}') return true;
  
  return false;
}
  


bool check(const char* str) {
    // TODO
printf("str: %s\n", str);  
     /* get the first token */
  stack<char> S;
  for (int i = 0; i < sizeof(str)/sizeof(char); i++) {
    if(str[i] == '(' || str[i] == '{' || str[i] == '[')
      S.push(str[i]);
    else if(str[i] == ')' || str[i] == '}' || str[i] == ']')
    {
      if(S.empty() ||!there_is(S.top(), str[i]))
        return false;
      else 
        S.pop();
    }
    
    
  }
  
return S.empty() ? true:false;

}

int main() {
    assert(check("(()){()}[]"));
    assert(!check("[{(])}"));
    return 0;
}
