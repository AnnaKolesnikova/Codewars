char *makeUpperCase (char *string);
char *makeUpperCase (char *string) {
  for(int i = 0; i < strlen(string); i++) 
  {
    if(string[i] > 96 && string[i] < 123) 
    {
      string[i] -= 32;
    }
    else 
    {
      string[i] = string[i];
    }
  }
  return string;
}