
void	f_printchar(char c);

void	f_printnum(int num)
{
  if (num == -2147483648)
    {
      f_printchar('-');
      f_printchar('2');
      f_printnum(147483648);
    }
  else if (num < 0)
    {
      f_printchar('-');
      f_printnum(-num);
    }
  else  if (num > 9)
    {
      f_printnum(num / 10);
      f_printnum(num % 10);
    }
  else
    f_printchar(num + '0');
}
