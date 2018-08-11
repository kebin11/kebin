int main()
{
  int data[5] = {5,2,1,4,3};

  int temp = 0;

  for (int y = 0; y < 5; y++)
  {
    for (int x = 0; x < 5 - y - 1; x++)
    {
      if (data[x] > data[x + 1])
      {
        temp = data[x + 1];
        data[x + 1] = data[x];
        data[x] = temp;
      }
    }
  }
	return 0;
}
