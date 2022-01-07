#include<iostream>
#include<ctime>
#include<random>

int main()
{
   int headcount=0, tailcount=0, tallylist[13], trials;

   std::cout<<"Enter the total number of trials: ";
   std::cin>>trials;
   std::cout<<" "<<std::endl;

   std::srand(time(0));

   for(int i=0; i<13; i++)
   {
       tallylist[i]=0;
   }

   for(int i=0; i<trials; i++)
   {
     for(int j=0; j<12; j++)
     { 
         double n=static_cast<double>(std::rand())/ RAND_MAX;
         n=round(n);
         if(n==1)
         {
             headcount++;
         }else
         {
             tailcount++;
         }
     }
     tallylist[headcount]++;
     headcount = 0;
     tailcount = 0;
   }
for(int i=0; i<13; i++)
{
    std::cout<<i<<": "<<tallylist[i]<<std::endl;
}

}





