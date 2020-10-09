/*
Maros Kocur, 111119, cv.3
*/
#include <stdio.h>

int main(){
pr_1();
//pr_2();
//pr_3();
//volitelny_pr_4();
//volitelny_pr_5();
//volitelny_pr_6();
//volitelny_pr_7();
}

int pr_1(){
int n,zap=0;
float c,min,max,ap=0;
printf("Zadaj pocet realnych cisel: ");
scanf("%d", &n);
int i;
for(i=1;i<=n;i++){
    printf("zadaj %d.: ",i);
    scanf("%f",&c);
    if(i==1){
        min = c;
        max = c;
    }
    ap += c;
    if(c>max)
        max = c;
    if(c<min)
        min = c;
    if(c<0)
        zap++;
}
ap=ap/n;
printf("Minimum: %2.f\n",min);
printf("Maximum: %.2f\n",max);
printf("Priemer: %.2f\n",ap);
printf("Zaporne: %d",zap);
}
int pr_2(){
    int n, c, par=0, klad=0, sucin=1;
    printf("Zadajte pocet celych cisel: ");
    scanf("%d",&n);
    int i;
    for(i=1;i<=n;i++){
        printf("Zadaj %i.: ",i);
        scanf("%d",&c);
        if((c%2)==0)
            par++;
        if(c>=0)
            klad++;
        sucin *= c;
    }
printf("Parne: %d\n", par);
printf("Kladne: %d\n", klad);
printf("Sucin: %d\n",sucin);
}
int pr_3(){
char c;
int male=0,velke=0,speci=0,cisla=0;
printf("zadaj retazec: ");
do{
  c = getchar();
  if(c>=97 && c<=122)
    male++;
  if(c>=65 && c<=90)
    velke++;
  if(c==42 || c==43 || c==45 || c==47)
    speci++;
  if(c>=48 && c<=57)
    cisla++;
}while(c!=32);
printf("Pocet malych pismen je %d\n",male);
printf("Pocet velkych pisnen je %d\n",velke);
printf("Pocet cisel je %d\n",cisla);
printf("Pocet specialnych je %d\n",speci);
}
int volitelny_pr_4(){
int i,f,g;
printf("Zadajte hranice intervalu(dve cele cisla oddelene medzerou): ");
scanf("%d %d",&f, &g);
if(g<f){
    i = f;
    f = g;
    g = i;
}
printf("V intervale <%d, %d> su delitelne 3mi: ",f,g);
for(i=f;i<=g;i++){
    if(i%3==0)
        printf("%d ",i);
}
}
int volitelny_pr_5(){
int i,f,g,d;
printf("Zadajte hranice intervalu a delitel(tri cele cisla oddelene medzerou): ");
scanf("%d %d %d",&f, &g, &d);
if(g<f){
    i = f;
    f = g;
    g = i;
}
printf("V intervale <%d, %d> su delitelne cislom %d: ",f,g,d);
for(i=f;i<=g;i++){
    if(i%d==0)
        printf("%d ",i);
}
}
int volitelny_pr_6(){
    int i = 0;
    float a, b;
    char c;
    printf("Zadaj dve realne cisla(oddelene medzerou): ");
    scanf("%f %f",&a,&b);
    getch();
    while(i==0){
        printf("Zadaj operaciu: ");
        scanf("%c",&c);
        switch(c){
            case '+':
                printf("Vysledok %.1f %c %.1f je %.1f\n",a,c,b,(a+b));
                break;
            case '-':
                printf("Vysledok %.1f %c %.1f je %.1f\n",a,c,b,(a-b));
                break;
            case '*':
                printf("Vysledok %.1f %c %.1f je %.1f\n",a,c,b,(a*b));
                break;
            case '/':
                printf("Vysledok %.1f %c %.1f je %.1f\n",a,c,b,(a/b));
                break;
            case 'a':
                printf("Autorom programu je Maros Kocur\n");
                break;
            default:
                i = 1;
                break;
        }

    }
}
int volitelny_pr_7(){
int podvaha=0,normal=0,nadvaha=0,obezita=0;
int n,h,m,i;
float bmi;
printf("zadaj pocet ludi: ");
scanf("%d",&n);
for(i=1;i<=n;i++){
    printf("clovek c. %d - vyska[cm] a vaha[kg]: ",i);
    scanf("%f %f", &h,&m);
    bmi = m/((h/100)*h/100);
    if(bmi<=18.5)
        podvaha++;
    else if(bmi>18.5 && bmi<25)
        normal++;
    else if(bmi>=25 && bmi < 30)
        nadvaha++;
    else
        obezita++;
}
printf("Podvaha: %d\n",podvaha);
printf("Normalna hmotnost: %d\n",normal);
printf("Nadvaha: %d\n",nadvaha);
printf("Obezita: %d\n",obezita);
}
