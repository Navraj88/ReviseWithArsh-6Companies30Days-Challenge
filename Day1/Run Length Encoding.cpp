string encode(string src)
{     
  string ans="";
  int count=0;
  int i=0;
  int n=src.length();
  while(i<n){
      char a=src[i];
      ans+=a;
      while(src[i]==a){
          count++;
          i++;
      }
      ans+=to_string(count);
      count=0;
  }
  return ans;
}     
 
