#include<stdio.h>
struct Student{
        int length,wide,height;
        char name[10];
} s[20][9];
int k[20];//°à¼¶¸öÊý
int main(){
        int i=0;
        void input();
        void find(int people,int class);
        input();
        while(k[i++]!=-1){
            find(k[i-1],i-1);
            printf("\n");
        }
        return 0;
}
void input(){
        int i=0,j=0,g;
        do{
            scanf("%d",&k[i++]);
            for(g=0;g<k[i-1];g++)
            scanf("%d%d%d%s",&s[j][g].length,&s[j][g].wide,&s[j][g].height,s[j][g].name);
            j++;
        }while(k[i-1]!=-1);
}
void find(int people,int class){
        int i,j=0,t,aver,sum=0,max,min[9];
        for(i=0;i<people;i++)
            sum=sum+s[class][i].length*s[class][i].wide*s[class][i].height;
            aver=sum/people;
        for(i=0;i<people;i++){
            if(s[class][i].length*s[class][i].wide*s[class][i].height>aver)
                max=i;
           if(s[class][i].length*s[class][i].wide*s[class][i].height<aver)
                min[j++]=i;
        }
        printf("%s took clay from ",s[class][max].name);
        for(t=0;t<j;t++)
            printf("%s ",s[class][min[t]].name);
}
