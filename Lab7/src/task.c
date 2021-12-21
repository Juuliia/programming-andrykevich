//повертає кількість неправильних пар в масиві//
int count ( int a[], int l)
{
 int a2; 
  //перебираємо массив//
  for(int i = 0; i < l-1; i++)
  {
    if (a[i] < a[i+1])
    {
      a2++;
    }
  }
  return (a2);
}

int main()
{
  int l = 5;
  int a[] = {2, 2, 2, 2, 2};
  int res = count(a, l);
return 0;
}
