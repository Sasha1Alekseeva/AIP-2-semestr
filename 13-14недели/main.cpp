#include <iostream>
struct Zavod{
    std::string name,specialnost;
    int srage,srsalary,num;
}z1,z2,z3,z4;

int main(){
   /* //1a
    int rnum[10];
    for(int i=0;i<10;i++){
       rnum[i]=rand()%11;
       std::cout<<rnum[i]<<"\t";
    }*/
    /* //2a
    int nums[20];
    int sum=0,sum2=0,sum3=0;
    for(int i=0;i<20;i++){
       nums[i]=rand()%21;
       if(nums[i]>5)
           sum+=nums[i];
       if(nums[i]<7)
           sum2+=nums[i];
       if(nums[i]>3)
           sum3+=nums[i];
       std::cout<<nums[i]<<'\t';
    }

    std::cout<<"\n"<<"summa num >5= "<<sum<<"\n"
             <<"summa num <7= "<<sum2<<"\n"
             <<"summa num >3= "<<sum3<<"\n";
             */
    //3
    /*
    int nums[10];
    for (int i=0;i<10;i++){
        nums[i]=rand()%11;
        std::cout<<nums[i]<<"\t";
    }
    int sumchet=0,sumnechet=0;
    for (int i=0;i<10;i+=2){
        sumchet+=nums[i];
    }
    for (int i=1;i<10;i+=2){
            sumnechet+=nums[i];
        }
    std::cout<<std::endl;
    std::cout<<sumchet<<'\t'<<sumnechet;
   */
    //12
    /*
    int nums[10];
    for (int i=0;i<10;i++){
        nums[i]=rand()%11;
        std::cout<<nums[i]<<"\t";
    }
    for (int i=0;i<10;i+=2){
         nums[i]*=2;
    }
    for (int i=1;i<10;i+=2){
         nums[i]+=3;
        }
    std::cout<<std::endl;
    for(int i=0;i<10;i++)
        std::cout<<nums[i]<<'\t';
        */
    //13
    /*
    int nums[10];
    for (int i=0;i<10;i++){
        nums[i]=rand()%21-10;
        std::cout<<nums[i]<<"\t";
    }
    for (int i=0;i<10;i++){
         if(nums[i]>=0)
             nums[i]-=1;
         else nums[i]+=5;
   }

    std::cout<<std::endl;
    for(int i=0;i<10;i++)
        std::cout<<nums[i]<<'\t';
        */
    //14a
    /*
    int nums1[10],nums2[10],nums3[10];
    for (int i=0;i<10;i++){
        nums1[i]=rand()%21-10;
        nums2[i]=rand()%16-20;
        std::cout<<nums1[i]<<"\t";
    }
    std::cout<<std::endl;

    for(int i=0;i<10;i++)
        std::cout<<nums2[i]<<"\t";
    std::cout<<std::endl;

    for(int i=0;i<10;i++){
        nums3[i]=nums1[i]*nums2[i];
        std::cout<<nums3[i]<<"\t";
    }*/
    z1.num=1;z2.num=2;z3.num=3;z4.num=4;
    z1.name="manilov";z2.name="ivanov";z3.name="slepen";z4.name="tolstoy";
    z1.specialnost="slesar";z2.specialnost="slesar";z3.specialnost="tokar";z4.specialnost="nachalnik";
    z1.srage=40;z2.srage=45;z3.srage=32;z4.srage=52;
    z1.srsalary=60000;z2.srsalary=56000;z3.srsalary=73000;z4.srsalary=72500;
    Zavod mass[4]={z1,z2,z3,z4};
    //15a
    int count=0;
    for(int i=0;i<4;i++)
        if((mass[i].specialnost=="slesar")||(mass[i].specialnost=="tokar"))
            count++;
    std::cout<<"kolichestvo slesarey i tokarey= "<<count<<std::endl;
    //15b
    std::cout<<"sredniy vozrast >35: ";
    for(int i=0;i<4;i++)
        if(mass[i].srage>35)
            std::cout<<mass[i].num<<"\t";
    std::cout<<std::endl;
    //15c
    int oklad=0,n=4,sroklad=0,zavod_count=0;
    for (int i=0;i<4;i++)
        oklad+=mass[i].srsalary;
    sroklad=oklad/n;
    std::cout<<"sredniy po vsem= "<<sroklad<<std::endl;
    for(int i=0;i<4;i++)
        if(mass[i].srsalary>sroklad){
            zavod_count++;
        std::cout<<mass[i].num<<'\t'
                <<mass[i].name<<'\t'
               <<mass[i].specialnost<<'\t'
              <<mass[i].srage<<'\t'
             <<mass[i].srsalary<<std::endl;
        }
    std::cout<<"chislo zavodov= "<<zavod_count;
}
