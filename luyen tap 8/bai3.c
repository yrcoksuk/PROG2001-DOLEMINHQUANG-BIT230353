//DoLeminhQuang
#include <stdio.h>

struct Owner{
char ten[50];
int tuoi;
};

struct Car{
char model[50];
int nam;
struct Owner chusohuu;
};

int main(){
struct Car xe1={
"porsche turbo GT",
2025,
{"leon",60}
};

printf("model :%s\n",xe1.model);
printf("Nam :%d\n",xe1.nam);
printf("ten :%s\n",xe1.chusohuu.ten);
printf("tuoi :%d\n",xe1.chusohuu.tuoi);

return 0;
}
