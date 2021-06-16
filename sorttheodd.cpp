std::vector<int> sortArray(std::vector<int> array)
    {
      int temp;
      for(unsigned long i=0;i<array.size();i++)
        {
        for(unsigned long j=i;j<array.size();j++)
          {
             if((array[i]%2==1)&&(array[j]%2==1))
               {
                if(array[i]>array[j])
                  {
                   temp=array[i];
               array[i]=array[j];
               array[j]=temp;
                }
              
               }
          }
       }
        return array;
}
