int main()
{
  int data[5] = {5,2,1,4,3};

  int temp = 0;

  for (int y = 0; y < 5; y++)
  {
    for (int x = y + 1; x < 5 - y; x++)
    {
      if (data[y] > data[x])
      {
        temp = data[y];
        data[y] = data[x];
        data[x] = temp;
      }
    }
  }
	return 0;
}
