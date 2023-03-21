#include <stdio.h>
#include <time.h>
#include <Windows.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

void class21();
void class22();
void class23();
void class24();
void class25();
void class26();
void class27();
void class28();
void class29();
void class210();
// 학급별로 나눠놓음 

void test(); 
void println(); // 줄 바꾸기
void printstar(); // 줄별 표시
void egg(); // 이스터에그

void mathBJ(); //수학 병준 -기하
void mathJH();//수학 지현 -기하
void mathHA();//수학 현아
void mathSY();//수학 시영
void mathHM();//수학 혜미
void mathSW();//수학 승옹 -확통

void englishYG();//영어 영곤
void englishKW();//영어 기완
void englishBL();//영어 보라

void literatureJY();//문학 준영
void literatureNG();//문학 남곤
void literatureSY();//문학 신영

void asia();//동아시아사 주영
void korean_geography();//한국지리 태관
void law();//정치와 법 성현
void ethics();//윤리와 사상 조현

void chemistryKM();//화학 경민
void chemistryYH();//화학 양현
void physicsYM();//물리 유미
void biologySH();//생명 승혁
void earthSY();//지구과학 승영
void scienceSH();//과학교양 승혁
void scienceSY();//과학교양 숭영
void scienceHJ();//과학교양 희진

void artJS();//미술창작 지수
void artHG();//미술창작 현경
void pe();//체육탐구 종회
void careerKH();//진로와 직업 금희
void careerIG();//진로와 직업 일규
void careerCH();//진로 춘형
void careerH();//진로 현

void etcYG();//특색 영곤
void etcSW();//특색 승옹
void etcKW();//특색 기완
void etcBL();//특색 보라
void etcBJ();//특색 병준




int main (void)
{
   SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
   println();
   printf("A       l       p       h       a       M       e       c       h      _\n");
   printstar();
   println();
   printf("Update at 2021/03/13\n");
   printf("AlphaMech_ 허수아비 프로그래밍팀 (임규연, 장문규, 정찬하, 변호석, 박재석) 제작, AlphaMech_ 공동소유\n");
   printf("For 효성고등학교 2021년도 2학년\n");
   printf("Copyright ⓒ by AlphaMech_, All Rights Reserved.\n");
   println();
   printstar();
   println();
   printf("허 수 아 비 : 집 념 의 들 판 Ver.2021 2학년 (2.0)\n");
   printf("(비대면 수업 반-자동참가 프로그램)\n");
   printf("이 프로그램은 Ahnlab에게 여러 데이터베이스를 제공받아 제작하였습니다.\n");
   println();
   printstar();
   println();
   time_t timer;
   struct tm* t;
   int classnum;
   printf ("자동 모드를 진행하시려면 1을, 수동 모드를 진행하시려면 2를 눌러주세요.\n");

   int mode; /// 모드 입력
   scanf ("%d", &mode);

      SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),11);

   if (mode == 0)
   {
      printf ("이스터에그 발견! We Are AlphaMech_ Engine 1\n");
      system ("cmd /c start https://lky473736.wixsite.com/alphamech");
   }

   else if (mode == 1)
   {
   srand(time(NULL));
   time_t timer;
   struct tm*t;
   time (&timer);
   t = (struct tm*) localtime (&timer);
   printf ("\n");
   printf ("자동 모드 실행 중 ...\n");
   Sleep (3000);
   printf ("자신의 학급의 숫자를 입력해주세요.\n");
       scanf("%d", &classnum);
       
       if (classnum == 1)
       {
          class21();
      }
      else if (classnum == 2)
      {
         class22();
      }
      else if (classnum == 3)
      {
         class23();
      }
      else if (classnum == 4)
      {
         class24();
      }
      else if (classnum == 5)
      {
         class25();
      }
      else if (classnum == 6)
      {
         class26();
      }
      else if (classnum == 7)
      {
         class27();
      }
      else if (classnum == 8)
      {
         class28();
      }
      else if (classnum == 9)
      {
         class29();
      }
      else if (classnum == 10)
      {
         class210();
      }
      else if (classnum == 100)
      {
         printf ("cmd 테스트, 3초 뒤에 네이버.\n");
         Sleep(3000);
         system ("cmd /c start https://www.naver.com");
      }
      else 
      {
         printf ("ERROR 001, 학급을 잘못 입력하셨습니다. 3초 뒤에 자동으로 종료됩니다.\n");
         Sleep (3000);
         return 0;
      }
}

else if (mode == 2)
    {
        char a [50];
        int sw;
       printf ("참가하실 수업의 교과선생님 성함을 입력해주세요.\n");
       scanf ("%s", &a);
       if (strcmp(a, "장준영") == 0)
      sw = 0;
   else if (strcmp(a, "김남곤") == 0)
      sw = 1;
   else if (strcmp(a, "박신영") == 0)
      sw = 2;
   else if (strcmp(a, "조영곤") == 0)
      sw = 3;
   else if (strcmp(a, "김기완") == 0)
      sw = 4;
   else if (strcmp(a, "박보라") == 0)
      sw = 5;
   else if (strcmp(a, "김병준") == 0)
      sw = 6;
   else if (strcmp(a, "신지현") == 0)
      sw = 7;
   else if (strcmp(a, "오현아") == 0)
      sw = 8;
   else if (strcmp(a, "박시영") == 0)
      sw = 9;
   else if (strcmp(a, "오혜미") == 0)
      sw = 10;
   else if (strcmp(a, "강승웅") == 0)
      sw = 11;
   else if (strcmp(a, "김유미") == 0)
      sw = 12;
   else if (strcmp(a, "이경민") == 0)
       sw = 13;
   else if (strcmp(a, "김양현") == 0)
      sw = 14;
   else if (strcmp(a, "백승혁") == 0)
      sw = 15;
   else if (strcmp(a, "이승영") == 0)
      sw = 16;
   else if (strcmp(a, "권희진") == 0)
      sw = 17;
   else if (strcmp(a, "정주영") == 0)
      sw = 18;
   else if (strcmp(a, "임태관") == 0)
      sw = 19;
   else if (strcmp(a, "김성현") == 0)
      sw = 20;
   else if (strcmp(a, "조현") == 0)
      sw = 21;
   else if (strcmp(a, "이지수") == 0)
      sw = 22;
   else if (strcmp(a, "황현경") == 0)
      sw = 23;
   else if (strcmp(a, "이종회") == 0)
      sw = 24;
   else if (strcmp(a, "강금희") == 0)
      sw = 25;
   else if (strcmp(a, "한일규") == 0)
      sw = 26;
   else if (strcmp(a, "조춘형") == 0)
      sw = 27;
   else
      sw = -1;
      
   
   switch(sw)
   {
   case 0:
      printf("\n");
      printf("참여를 시작합니다.\n");
         literatureJY();//문학 준영
      break;
   case 1:
      printf("\n");
      printf("참여를 시작합니다.\n"); 
         literatureNG();//문학 남곤
      break;
   case 2:
      printf("\n");
      printf("참여를 시작합니다.\n");
         literatureSY();//문학 신영
      break;
   case 3:
      printf("\n");
      printf("참여를 시작합니다.\n");
         englishYG();//영어 영곤
      break;
   case 4:
      printf("\n");
      printf("참여를 시작합니다.\n");
         englishKW();//영어 기완
      break;
   case 5:
      printf("\n");
      printf("참여를 시작합니다.\n");
         englishBL();//영어 보라
      break;
   case 6:
      printf("\n");
      printf("참여를 시작합니다.\n");
         mathBJ(); //수학 병준 -기하
      break;
   case 7:
      printf("\n");
      printf("참여를 시작합니다.\n");
         mathJH();//수학 지현 -기하
      break;
   case 8:
      printf("\n");
      printf("참여를 시작합니다.\n");
         mathHA();//수학 현아
      break;
   case 9:
      printf("\n");
      printf("참여를 시작합니다.\n");
         mathSY();//수학 시영
      break;
   case 10:
      printf("\n");
         mathHM();//수학 혜미
      system("start ");
      break;
   case 11:
      printf("\n");
      printf("참여를 시작합니다.\n");
         mathSW();//수학 승웅 -확통
      break;
   case 12:
      printf("\n");
      printf("참여를 시작합니다.\n");
         physicsYM();//물리 유미
      break;
   case 13:
      printf("\n");
      printf("참여를 시작합니다.\n");
         chemistryKM();//화학 경민
      break;
   case 14:
      printf("\n");
      printf("참여를 시작합니다.\n");
         chemistryYH();//화학 양현
      break;
   case 15:
      printf("\n");
      printf("참여를 시작합니다.\n");
         biologySH();//생명 승혁
      break;
   case 16:
      printf("\n");
      printf("참여를 시작합니다.\n");
         earthSY();//지구과학 승영
      break;
   case 17:
      printf("\n");
      printf("참여를 시작합니다.\n");
         scienceHJ();//과학교양 희진
      break;
   case 18:
      printf("\n");
      printf("참여를 시작합니다.\n");
         asia();//동아시아사 주영
      break;
   case 19:
      printf("\n");
      printf("참여를 시작합니다.\n");
         korean_geography();//한국지리 태관
      break;
   case 20:
      printf("\n");
      printf("참여를 시작합니다.\n");
         law();//정치와 법 성현
      break;
   case 21:
      printf("\n");
      printf("참여를 시작합니다.\n");
         ethics();//윤리와 사상 조현
      break;
   case 22:
      printf("\n");
      printf("참여를 시작합니다.\n");
         artJS();//미술창작 지수
      break;
   case 23:
      printf("\n");
      printf("참여를 시작합니다.\n");
         artHG();//미술창작 현경
      break;
   case 24:
      printf("\n");
      printf("참여를 시작합니다.\n");
         pe();//체육탐구 종회
      break;
   case 25:
      printf("\n");
      printf("참여를 시작합니다.\n");
         careerKH();//진로와 직업 금희
      break;
   case 26:
      printf("\n");
      printf("참여를 시작합니다.\n");
         careerIG();//진로와 직업 일규
      break;
   case 27:
      printf("\n");
      printf("참여를 시작합니다.\n");
         careerCH();//진로 춘형
      break;
}
   }


return 0;
}


////////////////////////////////////////////////////////////////////

void class21()
{
      printf ("실행 가동하였습니다. 절대로 이 프로그램을 종료하지 말아주세요.\n");
   printf ("수업 시작 3분 전에 ZOOM에 입장합니다.\n");
   printf ("이 프로그램은 AhnLab의 V3 서비스 센터에 의하여 보호되고 있습니다. \n");
   printf ("** 아침조례 및 종례는 지원하지 않습니다.\n");
   srand(time(NULL));
   time_t timer;
   struct tm*t;
   time (&timer);
   t = (struct tm*) localtime (&timer);
   if (t -> tm_wday == 1)
{
    printf ("\n");
    printf ("오늘은 월요일입니다.\n");
    printf ("1교시 : 특색 (조영곤)\n");
    printf ("2교시 : 수1  (박시영)\n");
    printf ("3교시 : 윤사 (조현)\n");
    printf ("4교시 : 체탐 (이종회)\n");
    printf ("5교시 : 문학 (박신영)\n");
    printf ("6교시 : 미창 (황현경)\n");
    printf ("7교시 : 확통 (강승웅)\n");
    printf ("\n");
    
    
    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
       etcYG();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathSY();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       ethics();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
      pe();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureSY();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       artHG();
    }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathSW();
   }
}
}

else if (t -> tm_wday == 2)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 화요일입니다.\n");
    printf ("1교시 : 진로 (조춘형)\n");
    printf ("2교시 : 문학 (장준영)\n");
    printf ("3교시 : 논술 (박신영)\n");
    printf ("4교시 : 미창 (황현경)\n");
    printf ("5교시 : 한지 (임태관)\n");
    printf ("6교시 : 영1 (김기완)\n");
    printf ("7교시 : 정법 (김성현)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        careerCH();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
        literatureJY();  
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       literatureSY();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       artHG();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       korean_geography();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       englishKW();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       law();
   }
}
}

else if (t -> tm_wday == 3)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 수요일입니다.\n");
    printf ("1교시 : 문학 (장준영)\n");
    printf ("2교시 : 영1 (조영곤)\n");
    printf ("3교시 : 한지 (임태관)\n");
    printf ("4교시 : 진직 (한일규)\n");
    printf ("5교시 : 수1 (오현아)\n");
    printf ("6교시 : 확통 (강승웅)\n");
    printf ("7교시 : 윤사 (조현)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
       literatureJY();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
      englishYG();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
      korean_geography(); 
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
      careerIG(); 
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
      mathHA(); 
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
      mathSW(); 
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
      ethics(); 
   }
}
 }

else if (t -> tm_wday == 4)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 목요일입니다.\n");
    printf ("1교시 : 수1 (오현아)\n");
    printf ("2교시 : 논술 (박신영)\n");
    printf ("3교시 : 한지 (임태관)\n");
    printf ("4교시 : 영1 (김기완)\n");
    printf ("5교시 : 동사 (정주영)\n");
    printf ("6교시 : 문학 (장준영)\n");
    printf ("7교시 : 정법 (김성현)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        mathHA();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       literatureSY();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
      korean_geography();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       englishKW();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       asia();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureJY();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       law();
   }
}
}

else if (t -> tm_wday == 5)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
   printf ("\n");
    printf ("오늘은 금요일입니다.\n");
    printf ("1교시 : 영1 (조영곤)\n");
    printf ("2교시 : 수1 (오현아)\n");
    printf ("3교시 : 확통 (강승웅)\n");
    printf ("4교시 : 동사 (정주영)\n");
    printf ("5, 6교시 : 창체\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        englishYG();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathHA();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathSW();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
      asia();
   }
}
}

else
{
   printf ("\n");
   printf ("오늘은 주말입니다. 편안한 주말 보내세요 :) \n");
   Sleep (2000);
}
}







void class22(){
      printf ("실행 가동하였습니다. 절대로 이 프로그램을 종료하지 말아주세요.\n");
   printf ("수업 시작 3분 전에 ZOOM에 입장합니다.\n");
   printf ("이 프로그램은 AhnLab의 V3 서비스 센터에 의하여 보호되고 있습니다. \n");
   printf ("** 아침조례 및 종례는 지원하지 않습니다.\n");
   srand(time(NULL));
   time_t timer;
   struct tm*t;
   time (&timer);
   t = (struct tm*) localtime (&timer);
   if (t -> tm_wday == 1)
   {
    printf ("\n");
    printf ("오늘은 월요일입니다.\n");
    printf ("1교시 : 미창 (황현경)\n");
    printf ("2교시 : 논술 (박신영)\n");
    printf ("3교시 : 문학 (김남곤)\n");
    printf ("4교시 : 영1 (조영곤)\n");
    printf ("5교시 : 수1 (오현아)\n");
    printf ("6교시 : 특색 (강승웅)\n");
    printf ("7교시 : 한지 (임태관)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
       artHG();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       literatureSY();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
      literatureNG(); 
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
      englishYG();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
      mathHA(); 
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
      etcSW(); 
    }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
     korean_geography();  
   }
}
}

else if (t -> tm_wday == 2)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 화요일입니다.\n");
    printf ("1교시 : 윤사 (조현)\n");
    printf ("2교시 : 정법 (김성현)\n");
    printf ("3교시 : 한지 (임태관)\n");
    printf ("4교시 : 확통 (강승웅)\n");
    printf ("5교시 : 영1 (김기완)\n");
    printf ("6교시 : 수1 (오현아)\n");
    printf ("7교시 : 진직 (한일규)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
       ethics();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       law();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
      korean_geography();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathSW();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       englishKW();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
      mathHA();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       careerIG();
   }
}
}

else if (t -> tm_wday == 3)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 수요일입니다.\n");
    printf ("1교시 : 영1 (김기완)\n");
    printf ("2교시 : 수1 (박시영)\n");
    printf ("3교시 : 확통 (강승웅)\n");
    printf ("4교시 : 진로 (조춘형)\n");
    printf ("5교시 : 동사 (정주영)\n");
    printf ("6교시 : 문학 (김남곤)\n");
    printf ("7교시 : 논술 (박신영)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
       englishKW();
}
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
      mathSY();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathSW();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
      careerCH();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       asia();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureNG();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureSY();
   }
}
 }

else if (t -> tm_wday == 4)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 목요일입니다.\n");
    printf ("1교시 : 한지 (임태관)\n");
    printf ("2교시 : 확통 (강승웅)\n");
    printf ("3교시 : 문학 (박신영)\n");
    printf ("4교시 : 수1 (오현아)\n");
    printf ("5교시 : 미창 (황현경)\n");
    printf ("6교시 : 정법 (김성현)\n");
    printf ("7교시 : 체탐 (이종회)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        korean_geography();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
      mathSW();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       literatureSY();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathHA();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       artHG();  
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       law();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       pe();
   }
}
}

else if (t -> tm_wday == 5)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
   printf ("\n");
    printf ("오늘은 금요일입니다.\n");
    printf ("1교시 : 윤사 (조현)\n");
    printf ("2교시 : 동사 (정주영)\n");
    printf ("3교시 : 문학 (김남곤)\n");
    printf ("4교시 : 영1 (조영곤)\n");
    printf ("5, 6교시 : 창체\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
       ethics();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       asia();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
      literatureNG();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       englishYG();
   }
}
}

else
{
   printf ("\n");
   printf ("오늘은 주말입니다. 편안한 주말 보내세요 :) \n");
   Sleep (2000);
}
}





void class23()
{
         printf ("실행 가동하였습니다. 절대로 이 프로그램을 종료하지 말아주세요.\n");
   printf ("수업 시작 3분 전에 ZOOM에 입장합니다.\n");
   printf ("이 프로그램은 AhnLab의 V3 서비스 센터에 의하여 보호되고 있습니다. \n");
   printf ("** 아침조례 및 종례는 지원하지 않습니다.\n");
   srand(time(NULL));
   time_t timer;
   struct tm*t;
   time (&timer);
   t = (struct tm*) localtime (&timer);
   if (t -> tm_wday == 1)
   {
    printf ("\n");
    printf ("오늘은 월요일입니다.\n");
    printf ("1교시 : 수1 (오현아)\n");
    printf ("2교시 : 동사 (정주영)\n");
    printf ("3교시 : 확통 (강승웅)\n");
    printf ("4교시 : 미창 (황현경)\n");
    printf ("5교시 : 영1 (박보라)\n");
    printf ("6교시 : 진직 (한일규)\n");
    printf ("7교시 : 문학 (박신영)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
       mathHA();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       asia();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathSW();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       artHG();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       englishBL();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       careerIG();
    }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureSY();
   }
}
}

else if (t -> tm_wday == 2)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 화요일입니다.\n");
    printf ("1교시 : 정법 (김성현)\n");
    printf ("2교시 : 한지 (임태관)\n");
    printf ("3교시 : 영1 (조영곤)\n");
    printf ("4교시 : 문학 (장준영)\n");
    printf ("5교시 : 논술 (박신영)\n");
    printf ("6교시 : 체탐 (이종회)\n");
    printf ("7교시 : 수1 (오현아)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
       law();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
      korean_geography(); 
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
     englishYG();  
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
      literatureJY(); 
}
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
      literatureSY(); 
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       pe();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathHA();
   }
}
}

else if (t -> tm_wday == 3)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 수요일입니다.\n");
    printf ("1교시 : 한지 (임태관)\n");
    printf ("2교시 : 확통 (강승웅)\n");
    printf ("3교시 : 영1 (박보라)\n");
    printf ("4교시 : 윤사 (조현)\n");
    printf ("5교시 : 수1 (박시영)\n");
    printf ("6교시 : 진로 (조춘형)\n");
    printf ("7교시 : 문학 (장준영)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        korean_geography();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
      mathSW();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       englishBL();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
      ethics();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathSY();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       careerCH();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureJY();
   }
}
 }

else if (t -> tm_wday == 4)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 목요일입니다.\n");
    printf ("1교시 : 영1 (조영곤)\n");
    printf ("2교시 : 윤사 (조현)\n");
    printf ("3교시 : 미창 (황현경)\n");
    printf ("4교시 : 문학 (장준영)\n");
    printf ("5교시 : 특색 (강승웅)\n");
    printf ("6교시 : 논술 (박신영)\n");
    printf ("7교시 : 동사 (정주영)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
       englishYG();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       ethics();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
      artHG();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureJY();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       etcSW();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureSY();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       asia();
   }
}
}

else if (t -> tm_wday == 5)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer); 
   printf ("\n");
    printf ("오늘은 금요일입니다.\n");
    printf ("1교시 : 확통 (강승웅)\n");
    printf ("2교시 : 한지 (임태관)\n");
    printf ("3교시 : 수1 (오현아)\n");
    printf ("4교시 : 정법 (김성현)\n");
    printf ("5, 6교시 : 창체\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        mathSW();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       korean_geography();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathHA();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       law();
   }
}
}

else
{
   printf ("\n");
   printf ("오늘은 주말입니다. 편안한 주말 보내세요 :) \n");
   Sleep (2000);
}
}






void class24()
{
            printf ("실행 가동하였습니다. 절대로 이 프로그램을 종료하지 말아주세요.\n");
   printf ("수업 시작 3분 전에 ZOOM에 입장합니다.\n");
   printf ("이 프로그램은 AhnLab의 V3 서비스 센터에 의하여 보호되고 있습니다. \n");
   printf ("** 아침조례 및 종례는 지원하지 않습니다.\n");
   srand(time(NULL));
   time_t timer;
   struct tm*t;
   time (&timer);
   t = (struct tm*) localtime (&timer);
   if (t -> tm_wday == 1)
   {
    printf ("\n");
    printf ("오늘은 월요일입니다.\n");
    printf ("1교시 : 확통 (강승웅)\n");
    printf ("2교시 : 정법 (김성현)\n");
    printf ("3교시 : 한지 (임태관)\n");
    printf ("4교시 : 문학 (박신영)\n");
    printf ("5교시 : 윤사 (조현)\n");
    printf ("6교시 : 수1 (박시영)\n");
    printf ("7교시 : 동사 (정주영)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
       mathSW();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       law();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       korean_geography();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
      literatureSY();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       ethics();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathSY();
    }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       asia();
   }
}
}

else if (t -> tm_wday == 2)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 화요일입니다.\n");
    printf ("1교시 : 수1 (오현아)\n");
    printf ("2교시 : 미창 (황현경)\n");
    printf ("3교시 : 문학 (김남곤)\n");
    printf ("4교시 : 정법 (김성현)\n");
    printf ("5교시 : 특색 (강승웅)\n");
    printf ("6교시 : 영1 (박보라)\n");
    printf ("7교시 : 한지 (임태관)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        mathHA();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       artHG();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
      literatureNG();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       law();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       etcSW();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       englishBL();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       korean_geography();
   }
}
}

else if (t -> tm_wday == 3)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 수요일입니다.\n");
    printf ("1교시 : 진로 (조춘형)\n");
    printf ("2교시 : 미창 (황현경)\n");
    printf ("3교시 : 수1 (오현아)\n");
    printf ("4교시 : 논술 (박신영)\n");
    printf ("5교시 : 확통 (강승웅)\n");
    printf ("6교시 : 영1 (조영곤)\n");
    printf ("7교시 : 문학 (김남곤)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        careerCH();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
      artHG();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathHA();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureSY();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
      mathSW();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       englishYG();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureNG();
   }
}
 }

else if (t -> tm_wday == 4)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 목요일입니다.\n");
    printf ("1교시 : 영1 (박보라)\n");
    printf ("2교시 : 문학 (김남곤)\n");
    printf ("3교시 : 동사 (정주영)\n");
    printf ("4교시 : 확통 (강승웅)\n");
    printf ("5교시 : 한지 (임태관)\n");
    printf ("6교시 : 수1 (오현아)\n");
    printf ("7교시 : 윤사 (조현)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        englishBL();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       literatureNG();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       asia();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathSW();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       korean_geography();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
      mathHA();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       ethics();
   }
}
}

else if (t -> tm_wday == 5)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
   printf ("\n");
    printf ("오늘은 금요일입니다.\n");
    printf ("1교시 : 체탐 (이종회)\n");
    printf ("2교시 : 영1 (조영곤)\n");
    printf ("3교시 : 진직 (한일규)\n");
    printf ("4교시 : 논술 (박신영)\n");
    printf ("5, 6교시 : 창체\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        pe();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       englishYG();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
      careerIG();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureSY();
   }
}
}

else
{
   printf ("\n");
   printf ("오늘은 주말입니다. 편안한 주말 보내세요 :) \n");
   Sleep (2000);
}
}




void class25()
{
            printf ("실행 가동하였습니다. 절대로 이 프로그램을 종료하지 말아주세요.\n");
   printf ("수업 시작 3분 전에 ZOOM에 입장합니다.\n");
   printf ("이 프로그램은 AhnLab의 V3 서비스 센터에 의하여 보호되고 있습니다. \n");
   printf ("** 아침조례 및 종례는 지원하지 않습니다.\n");
   srand(time(NULL));
   time_t timer;
   struct tm*t;
   time (&timer);
   t = (struct tm*) localtime (&timer);
   if (t -> tm_wday == 1)
   {
    printf ("\n");
    printf ("오늘은 월요일입니다.\n");
    printf ("1교시 : 문학 (장준영)\n");
    printf ("2교시 : 미술 (황현경)\n");
    printf ("3교시 : 수학 (오현아)\n");
    printf ("4교시 : 생명 (백승혁)\n");
    printf ("5교시 : 지구 (이승영)\n");
    printf ("6교시 : 영어 (조영곤)\n");
    printf ("7교시 : 특색 (김기완)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
       literatureJY();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       artHG();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathHA();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
      biologySH();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       earthSY();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       englishYG();
    }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       etcKW();
   }
}
}

else if (t -> tm_wday == 2)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 화요일입니다.\n");
    printf ("1교시 : 화학 (김양현)\n");
    printf ("2교시 : 영어 (김기완)\n");
    printf ("3교시 : 기하 (신지현)\n");
    printf ("4교시 : 수학 (오현아)\n");
    printf ("5교시 : 문학 (장준영)\n");
    printf ("6교시 : 진직 (강금희)\n");
    printf ("7교시 : 과교 (백승혁)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        chemistryYH();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       englishKW();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
      mathJH;
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathHA();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureJY();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
      careerKH();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       scienceSH();
   }
}
}

else if (t -> tm_wday == 3)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 수요일입니다.\n");
    printf ("1교시 : 생명 (백승혁)\n");
    printf ("2교시 : 화학 (이경민)\n");
    printf ("3교시 : 수학 (박시영)\n");
    printf ("4교시 : 지구 (이승영)\n");
    printf ("5교시 : 물리 (김유미)\n");
    printf ("6교시 : 기하 (김병준)\n");
    printf ("7교시 : 영어 (김기완)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        biologySH();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
      chemistryKM();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathSY();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       earthSY();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       physicsYM();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathBJ();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       englishKW();
   }
}
 }

else if (t -> tm_wday == 4)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 목요일입니다.\n");
    printf ("1교시 : 미술 (황현경)\n");
    printf ("2교시 : 수학 (오현아)\n");
    printf ("3교시 : 영어 (조영곤)\n");
    printf ("4교시 : 화학 (이경민)\n");
    printf ("5교시 : 문학 (박신영)\n");
    printf ("6교시 : 물리 (김유미)\n");
    printf ("7교시 : 진로 (조춘형)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        artHG();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
      mathHA();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       englishYG();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       chemistryKM();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureSY();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       physicsYM();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       careerCH();
   }
}
}

else if (t -> tm_wday == 5)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
   printf ("\n");
    printf ("오늘은 금요일입니다.\n");
    printf ("1교시 : 과교 (이승영)\n");
    printf ("2교시 : 기하 (김병준)\n");
    printf ("3교시 : 체탐 (이종회)\n");
    printf ("4교시 : 문학 (장준영)\n");
    printf ("5, 6교시 : 창체\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        scienceSY();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathBJ();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       pe();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureJY();
   }
}
}

else
{
   printf ("\n");
   printf ("오늘은 주말입니다. 편안한 주말 보내세요 :) \n");
   Sleep (2000);
}
}




void class26()
{
   printf ("실행 가동하였습니다. 절대로 이 프로그램을 종료하지 말아주세요.\n");
   printf ("수업 시작 3분 전에 ZOOM에 입장합니다.\n");
   printf ("이 프로그램은 AhnLab의 V3 서비스 센터에 의하여 보호되고 있습니다. \n");
   printf ("** 아침조례 및 종례는 지원하지 않습니다.\n");
   srand(time(NULL));
   time_t timer;
   struct tm*t;
   time (&timer);
   t = (struct tm*) localtime (&timer);
   
   if (t -> tm_wday == 1)
{
srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 월요일입니다.\n");
    printf ("1교시 : 영어 (김기완)\n");
    printf ("2교시 : 과교 (이승영)\n");
    printf ("3교시 : 화학 (이경민)\n");
    printf ("4교시 : 수학 (박시영)\n");
    printf ("5교시 : 문학 (김남곤)\n");
    printf ("6교시 : 기하 (김병준)\n");
    printf ("7교시 : 미창 (이지수)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        englishKW();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       scienceSY();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       chemistryKM();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
      mathSY();
  }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureNG();
      }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathBJ(); 
    }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       artJS(); 
   }
}
}


else if (t -> tm_wday == 2)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 화요일입니다.\n");
    printf ("1교시 : 미창 (황현경)\n");
    printf ("2교시 : 영어 (조영곤)\n");
    printf ("3교시 : 과교 (백승혁)\n");
    printf ("4교시 : 지학 (이승영)\n");
    printf ("5교시 : 수학 (오혜미)\n");
    printf ("6교시 : 물리 (김유미)\n");
    printf ("7교시 : 문학 (김남곤)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
       artHG();  
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       englishYG(); 
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       scienceSH();  
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       earthSY(); 
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathHM();  
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       physicsYM(); 
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureNG(); 
   }
}
}

else if (t -> tm_wday == 3)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 수요일입니다.\n");
    printf ("1교시 : 화1 (김양현)\n");
    printf ("2교시 : 문학 (박신영)\n");
    printf ("3교시 : 수학 (오혜미)\n");
    printf ("4교시 : 영어 (조영곤)\n");
    printf ("5교시 : 진로 (조현)\n");
    printf ("6교시 : 특색 (박보라)\n");
    printf ("7교시 : 생명 (백승혁)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        chemistryYH(); 
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       literatureSY(); 
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathHM(); 
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       englishYG(); 
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       careerH(); 
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       etcBL(); 
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       biologySH(); 
   }
}
}


else if (t -> tm_wday == 4)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 목요일입니다.\n");
    printf ("1교시 : 생명 (백승혁)\n");
    printf ("2교시 : 수학 (오혜미)\n");
    printf ("3교시 : 진직 (강금희)\n");
    printf ("4교시 : 체탐 (이종회)\n");
    printf ("5교시 : 물리 (김유미)\n");
    printf ("6교시 : 화학 (이경민)\n");
    printf ("7교시 : 기하 (신지현)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        biologySH(); 
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
        mathHM();  
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       careerKH(); 
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       pe(); 
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       physicsYM(); 
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       chemistryKM(); 
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathJH; 
   }
}
}

else if (t -> tm_wday == 5)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
   printf ("\n");
    printf ("오늘은 금요일입니다.\n");
    printf ("1교시 : 문학 (김남곤)\n");
    printf ("2교시 : 영어 (김기완)\n");
    printf ("3교시 : 기하 (김병준)\n");
    printf ("4교시 : 지학 (이승영)\n");
    printf ("5, 6교시 : 창체\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        literatureNG(); 
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       englishKW(); 
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathBJ(); 
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       earthSY(); 
   }
}
}

else
{
   printf ("\n");
   printf ("오늘은 주말입니다. 편안한 주말 보내세요 :) \n");
   Sleep (2000);
}
}




void class27()
{
   printf ("실행 가동하였습니다. 절대로 이 프로그램을 종료하지 말아주세요.\n");
   printf ("수업 시작 3분 전에 ZOOM에 입장합니다.\n");
   printf ("이 프로그램은 AhnLab의 V3 서비스 센터에 의하여 보호되고 있습니다. \n");
   printf ("** 아침조례 및 종례는 지원하지 않습니다.\n");
   srand(time(NULL));
   time_t timer;
   struct tm*t;
   time (&timer);
   t = (struct tm*) localtime (&timer);
   if (t -> tm_wday == 1)
{
srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 월요일입니다.\n");
    printf ("1교시 : 영어 (박보라)\n");
    printf ("2교시 : 생명 (백승혁)\n");
    printf ("3교시 : 물리 (김유미)\n");
    printf ("4교시 : 문학 (장준영)\n");
    printf ("5교시 : 미창 (이지수)\n");
    printf ("6교시 : 화학 (이경민)\n");
    printf ("7교시 : 진직 (강금희)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
      englishBL();  
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
      biologySH();  
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       physicsYM(); 
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureJY(); 
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       artJS(); 
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       chemistryKM(); 
    }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       careerKH(); 
   }
}
}


else if (t -> tm_wday == 2)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 화요일입니다.\n");
    printf ("1교시 : 문학 (박신영)\n");
    printf ("2교시 : 기하 (김병준)\n");
    printf ("3교시 : 수1 (오혜미)\n");
    printf ("4교시 : 체탐 (이종회)\n");
    printf ("5교시 : 영1 (조영곤)\n");
    printf ("6교시 : 미창 (황현경)\n");
    printf ("7교시 : 과교 (이승영)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
       literatureSY();  
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathBJ(); 
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathHM();  
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       pe(); 
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       englishYG(); 
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       artHG();  
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       scienceSY(); 
   }
}
}

else if (t -> tm_wday == 3)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 수요일입니다.\n");
    printf ("1교시 : 기하 (신지현)\n");
    printf ("2교시 : 진로 (조현)\n");
    printf ("3교시 : 문학 (장준영)\n");
    printf ("4교시 : 과교 (백승혁)\n");
    printf ("5교시 : 수1 (오혜미)\n");
    printf ("6교시 : 화학 (이경민)\n");
    printf ("7교시 : 지구 (이승영)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
      mathJH; 
   }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       careerH(); 
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       literatureJY(); 
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       scienceSH(); 
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathHM(); 
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       chemistryKM(); 
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       earthSY(); 
   }
}
 }

else if (t -> tm_wday == 4)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 목요일입니다.\n");
    printf ("1교시 : 수1 (오혜미)\n");
    printf ("2교시 : 물리 (김유미)\n");
    printf ("3교시 : 지구 (이승영)\n");
    printf ("4교시 : 기하 (김병준)\n");
    printf ("5교시 : 영1 (조영곤)\n");
    printf ("6교시 : 특색 (박보라)\n");
    printf ("7교시 : 생명 (백승혁)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
      mathHM();  
   }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       physicsYM(); 
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       earthSY();  
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathBJ(); 
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       englishYG();  
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       etcBL();  
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       biologySH(); 
   }
}
}

else if (t -> tm_wday == 5)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
   printf ("\n");
    printf ("오늘은 금요일입니다.\n");
    printf ("1교시 : 수1 (박시영)\n");
    printf ("2교시 : 문학 (장준영)\n");
    printf ("3교시 : 화1 (김양현)\n");
    printf ("4교시 : 영1 (박보라)\n");
    printf ("5, 6교시 : 창체\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
      mathSY(); 
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       literatureJY(); 
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       chemistryYH(); 
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       englishBL(); 
   }
}
}

else
{
   printf ("\n");
   printf ("오늘은 주말입니다. 편안한 주말 보내세요 :) \n");
   Sleep (2000);
}
}




void class28()
{
   printf ("실행 가동하였습니다. 절대로 이 프로그램을 종료하지 말아주세요.\n");
   printf ("수업 시작 3분 전에 ZOOM에 입장합니다.\n");
   printf ("이 프로그램은 AhnLab의 V3 서비스 센터에 의하여 보호되고 있습니다. \n");
   printf ("** 아침조례 및 종례는 지원하지 않습니다.\n");
   srand(time(NULL));
   time_t timer;
   struct tm*t;
   time (&timer);
   t = (struct tm*) localtime (&timer);
   if (t -> tm_wday == 1)
{
srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 월요일입니다.\n");
    printf ("1교시 : 기하 (신지현)\n");
    printf ("2교시 : 체탐 (이종회)\n");
    printf ("3교시 : 과교 (이승영)\n");
    printf ("4교시 : 화1 (김양현)\n");
    printf ("5교시 : 생1 (백승혁)\n");
    printf ("6교시 : 영어 (박보라)\n");
    printf ("7교시 : 수학 (오혜미)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
       mathJH;
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       pe();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       scienceSY();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
      chemistryYH();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       biologySH();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       englishBL();
    }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathHM();
   }
}
}


else if (t -> tm_wday == 2)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 화요일입니다.\n");
    printf ("1교시 : 문학 (김남곤)\n");
    printf ("2교시 : 진로 (조현)\n");
    printf ("3교시 : 영어 (김기완)\n");
    printf ("4교시 : 화1 (이경민)\n");
    printf ("5교시 : 지1 (이승영)\n");
    printf ("6교시 : 수학 (박시영)\n");
    printf ("7교시 : 과교 (권희진)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        literatureNG();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       careerH();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
      englishKW();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       chemistryKM();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       earthSY();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathSY();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       scienceHJ();
   }
}
}

else if (t -> tm_wday == 3)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 수요일입니다.\n");
    printf ("1교시 : 수학 (오혜미)\n");
    printf ("2교시 : 문학 (김남곤)\n");
    printf ("3교시 : 진직 (강금희)\n");
    printf ("4교시 : 물리 (김유미)\n");
    printf ("5교시 : 영어 (박보라)\n");
    printf ("6교시 : 미창 (황현경)\n");
    printf ("7교시 : 기하 (김병준)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        mathHM();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
      literatureNG();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       careerKH();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
      physicsYM();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       englishBL();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
      artHG();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathBJ();
   }
}
 }

else if (t -> tm_wday == 4)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 목요일입니다.\n");
    printf ("1교시 : 기하 (김병준)\n");
    printf ("2교시 : 화학 (이경민)\n");
    printf ("3교시 : 생물 (백승혁)\n");
    printf ("4교시 : 특색 (박보라)\n");
    printf ("5교시 : 문학 (김남곤)\n");
    printf ("6교시 : 지구 (이승영)\n");
    printf ("7교시 : 미창 (이지수)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        mathBJ();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       chemistryKM();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       biologySH();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       etcBL();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureNG();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       earthSY();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       artJS();
   }
}
}

else if (t -> tm_wday == 5)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
   printf ("\n");
    printf ("오늘은 금요일입니다.\n");
    printf ("1교시 : 물리 (김유미)\n");
    printf ("2교시 : 문학 (박신영)\n");
    printf ("3교시 : 수학 (오혜미)\n");
    printf ("4교시 : 영어 (김기완)\n");
    printf ("5, 6교시 : 창체\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        physicsYM();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       literatureSY();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathHM();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       englishKW();
  }
}
}

else
{
   printf ("\n");
   printf ("오늘은 주말입니다. 편안한 주말 보내세요 :) \n");
   Sleep (2000);
}
}




void class29()
{
   printf ("실행 가동하였습니다. 절대로 이 프로그램을 종료하지 말아주세요.\n");
   printf ("수업 시작 3분 전에 ZOOM에 입장합니다.\n");
   printf ("이 프로그램은 AhnLab의 V3 서비스 센터에 의하여 보호되고 있습니다. \n");
   printf ("** 아침조례 및 종례는 지원하지 않습니다.\n");
   srand(time(NULL));
   time_t timer;
   struct tm*t;
   time (&timer);
   t = (struct tm*) localtime (&timer);
if (t -> tm_wday == 1)
{
srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 월요일입니다.\n");
    printf ("1교시 : 생물 (백승혁)\n");
    printf ("2교시 : 화학 (이경민)\n");
    printf ("3교시 : 영어 (김기완)\n");
    printf ("4교시 : 수학 (오혜미)\n");
    printf ("5교시 : 문학 (장준영)\n");
    printf ("6교시 : 지구 (이승영)\n");
    printf ("7교시 : 기하 (김병준)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
       biologySH();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       chemistryKM();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       englishKW();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
      mathHM();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureJY();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       earthSY();
    }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathBJ();
   }
}
}


else if (t -> tm_wday == 2)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 화요일입니다.\n");
    printf ("1교시 : 수학 (오혜미)\n");
    printf ("2교시 : 진직 (강금희)\n");
    printf ("3교시 : 물리 (김유미)\n");
    printf ("4교시 : 영어 (박보라)\n");
    printf ("5교시 : 기하 (신지현)\n");
    printf ("6교시 : 진로 (조현)\n");
    printf ("7교시 : 문학 (장준영)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        mathHM();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       careerKH();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
      physicsYM();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       englishBL();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathJH;
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       careerH();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureJY();
   }
}
}

else if (t -> tm_wday == 3)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 수요일입니다.\n");
    printf ("1교시 : 미창 (이지수)\n");
    printf ("2교시 : 지구 (이승영)\n");
    printf ("3교시 : 과교 (권희진)\n");
    printf ("4교시 : 특색 (김병준)\n");
    printf ("5교시 : 문학 (박신영)\n");
    printf ("6교시 : 화학 (김양현)\n");
    printf ("7교시 : 수학 (박시영)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        artJS();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
      earthSY();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       scienceHJ();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
        etcBJ();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureSY();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       chemistryYH();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
      mathSY();
   }
}
 }

else if (t -> tm_wday == 4)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 목요일입니다.\n");
    printf ("1교시 : 문학 (장준영)\n");
    printf ("2교시 : 과교 (이승영)\n");
    printf ("3교시 : 물리 (김유미)\n");
    printf ("4교시 : 수학 (오혜미)\n");
    printf ("5교시 : 영어 (김기완)\n");
    printf ("6교시 : 체탐 (이종회)\n");
    printf ("7교시 : 기하 (김병준)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        literatureJY();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       scienceSY();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       physicsYM();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathHM();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
      englishKW();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       pe();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathBJ();
   }
}
}

else if (t -> tm_wday == 5)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
   printf ("\n");
    printf ("오늘은 금요일입니다.\n");
    printf ("1교시 : 화학 (이경민)\n");
    printf ("2교시 : 영어 (박보라)\n");
    printf ("3교시 : 미창 (황현경)\n");
    printf ("4교시 : 생물 (백승혁)\n");
    printf ("5, 6교시 : 창체\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        chemistryKM();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       englishBL();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       artHG();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       biologySH();
   }
}
}

else
{
   printf ("\n");
   printf ("오늘은 주말입니다. 편안한 주말 보내세요 :) \n");
   Sleep (2000);
   exit(0);
}
}





void class210()
{
   printf ("실행 가동하였습니다. 절대로 이 프로그램을 종료하지 말아주세요.\n");
   printf ("수업 시작 3분 전에 ZOOM에 입장합니다.\n");
   printf ("이 프로그램은 AhnLab의 V3 서비스 센터에 의하여 보호되고 있습니다. \n");
   printf ("** 아침조례 및 종례는 지원하지 않습니다.\n");
   srand(time(NULL));
   time_t timer;
   struct tm*t;
   time (&timer);
   t = (struct tm*) localtime (&timer);

if (t -> tm_wday == 1)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 월요일입니다.\n");
    printf ("1교시 : 체탐 (이종회)\n");
    printf ("2교시 : 수1 (오혜미)\n");
    printf ("3교시 : 영1 (박보라)\n");
    printf ("4교시 : 특색 (김병준)\n");
    printf ("5교시 : 물1 (김유미)\n");
    printf ("6교시 : 과교 (권희진)\n");
    printf ("7교시 : 기하 (신지현)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        pe();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathHM();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       englishBL();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
        etcBJ();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       physicsYM();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       scienceHJ();
    }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
      mathJH;
   }
}
}

else if (t -> tm_wday == 2)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 화요일입니다.\n");
    printf ("1교시 : 과교 (이승영)\n");
    printf ("2교시 : 영1 (박보라)\n");
    printf ("3교시 : 기하 (김병준)\n");
    printf ("4교시 : 진(2) (조현)\n");
    printf ("5교시 : 생1 (백승혁)\n");
    printf ("6교시 : 문학 (김남곤)\n");
    printf ("7교시 : 수1 (오혜미)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        scienceSY();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       englishBL();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathBJ();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       careerH();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       biologySH();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
       literatureNG();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathHM();
   }
}
}

else if (t -> tm_wday == 3)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 수요일입니다.\n");
    printf ("1교시 : 화1 (이경민)\n");
    printf ("2교시 : 기하 (김병준)\n");
    printf ("3교시 : 영1 (김기완)\n");
    printf ("4교시 : 문학 (김남곤)\n");
    printf ("5교시 : 지1 (이승영)\n");
    printf ("6교시 : 생1 (백승혁)\n");
    printf ("7교시 : 미창 (황현경)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
       chemistryKM();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       mathBJ();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       englishKW();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
      literatureNG();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       earthSY();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
      biologySH();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
      artHG();
   }
}
 }

else if (t -> tm_wday == 4)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    printf ("\n");
    printf ("오늘은 목요일입니다.\n");
    printf ("1교시 : 영1 (김기완)\n");
    printf ("2교시 : 진직 (강금희)\n");
    printf ("3교시 : 문학 (김남곤)\n");
    printf ("4교시 : 미창 (이지수)\n");
    printf ("5교시 : 지1 (이승영)\n");
    printf ("6교시 : 화1 (김양현)\n");
    printf ("7교시 : 수1 (오혜미)\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
       englishKW();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
      careerKH();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
       literatureNG();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       artJS();
   }
   else if (t->tm_hour == 13 && t->tm_min == 17 && t->tm_sec == 0)
    {
       earthSY();
   }
   else if (t->tm_hour == 14 && t->tm_min == 17 && t->tm_sec == 0)
    {
      chemistryYH();
   }
   else if (t->tm_hour == 15 && t->tm_min == 17 && t->tm_sec == 0)
    {
       mathHM();
   }
}
}

else if (t -> tm_wday == 5)
{
   srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
   printf ("\n");
    printf ("오늘은 금요일입니다.\n");
    printf ("1교시 : 문학 (박신영)\n");
    printf ("2교시 : 물1 (김유미)\n");
    printf ("3교시 : 수1 (박시영)\n");
    printf ("4교시 : 화1 (이경민)\n");
    printf ("5, 6교시 : 창체\n");
    printf ("\n");

    while (t->tm_hour < 23)
    {
       srand(time(NULL));
   time (&timer);
   t = (struct tm*) localtime (&timer);
    if (t->tm_hour == 8 && t->tm_min == 27 && t->tm_sec == 0)
   {
        literatureSY();
    }
    else if (t->tm_hour == 9 && t->tm_min == 27 && t->tm_sec == 0)
    {
       physicsYM();
   }
    else if (t->tm_hour == 10 && t->tm_min == 27 && t->tm_sec == 0)
    {
      mathSY();
   }
   else if (t->tm_hour == 12 && t->tm_min == 17 && t->tm_sec == 0)
    {
       chemistryKM();
   }
}
}

else
{
   printf ("\n");
   printf ("오늘은 주말입니다. 편안한 주말 보내세요 :) \n");
   Sleep (2000);
}
}




void test()
{
   printf ("테스트, 3초 안에 네이버\n");
   Sleep (2500);
   system ("cmd /c start https://www.naver.com\n");
}

void println()
{
  printf("\n");
}
void printstar()
{
  printf("************************************************************************\n");
}


void mathBJ()
{
  system ("cmd /c start https://us02web.zoom.us/j/7412490253?pwd=dS9lQVlkazFsaEQ2UFR4cCtxcUxXdz09");
}
void mathJH()
{
  system ("cmd /c start https://zoom.us/j/6620251058?pwd=c21Kb2tBdEkyS1JjNnZLWkIvLzBrZz09");
}
void mathHA()
{
  system ("cmd /c start  https://zoom.us/j/3824764473?pwd=azNaRHc1Y1BESEI5am44eUt1WHo5QT09");
}
void mathSY()
{
  system ("cmd /c start https://us02web.zoom.us/j/2971534279?pwd=LzNUdEFSdGpRRnVwQXRYdVBRdWdKZz09 ");
}
void mathHM()
{
  system ("cmd /c start https://us02web.zoom.us/j/7029964982?pwd=VE83Z25QazYwVE5CZGlZV0xQdFNiZz09");
}
void mathSW()
{
  system ("cmd /c start https://us02web.zoom.us/j/4215961422?pwd=OWxxRjJScDNHbTgzU3pPNEcrdTZrZz09");
}

void englishYG()
{
  system ("cmd /c start https://us02web.zoom.us/j/2669056200?pwd=Q3JOQUprR2c0bzRzVkptdmdXTGs4QT09");
}
void englishKW()
{
  system ("cmd /c start https://us02web.zoom.us/j/7317018056?pwd=KytteHdEV29CVzMxU0dYTUpTamlYdz09");
}
void englishBL()
{
  system ("cmd /c start https://zoom.us/j/5104395898?pwd=ci9ncHpRTkV6amtvTHVSYzhNK043QT09");
}

void literatureJY()
{
  system ("cmd /c start https://us02web.zoom.us/j/3309633175?pwd=ajh5STV4NlNHemNDTjhWbms2SXFqdz09");
}
void literatureNG()
{
  system ("cmd /c start https://us04web.zoom.us/j/5212617285?pwd=SzNmMVZyN0VybG12bGwwZ3ZvbmpJUT09");
}
void literatureSY()
{
  system ("cmd /c start https://zoom.us/j/6117180017?pwd=QTJnNUF3SytDU0RVL1hrRCtqMzVGdz09");
}


void asia()
{
  system ("cmd /c start https://us02web.zoom.us/j/4178463767?pwd=djlQaHI2TlBka0F0bk9wZnRybnFvUT09");
}
void korean_geography()
{
  system ("cmd /c start https://zoom.us/j/3824764473?pwd=azNaRHc1Y1BESEI5am44eUt1WHo5QT09");
}
void law()
{
  system ("cmd /c start https://zoom.us/j/9754876984?pwd=ZGVPSmxZZzliZlNUMlErYUlKRE8vQT09");
}
void ethics()
{
  system ("cmd /c start https://us02web.zoom.us/j/5980025567?pwd=KzVtSm43aTBtN0hpellzd09QcVdYUT09");
}

void chemistryKM()
{
  system ("cmd /c start https://us02web.zoom.us/j/4501224672?pwd=U0k2RW5MN0s0WXMxd2JvSWFOdkNXQT09");
}
void chemistryYH()
{
  system ("cmd /c start  https://us04web.zoom.us/j/7011986737?pwd=ZWxBRnM3ZTU1SWgwdVE5QWl5cG5QZz09");
}
void physicsYM()
{
  system ("cmd /c start  https://us02web.zoom.us/j/4569059741?pwd=a3Bvc3NXRS80ajMzN2VMajZVUHpPZz09");
}
void biologySH()
{
  system ("cmd /c start https://zoom.us/j/6574050599?pwd=OHYxdS9PWUdEaS91Y2h1TXpOZXh6Zz09");
}
void earthSY()
{
  system ("cmd /c start https://us02web.zoom.us/j/5655603297?pwd=Sjk3UnhLODVqdVEwTXJRZk5qbXNGdz09");
}

void scienceSY()
{
  system ("cmd /c start https://us02web.zoom.us/j/5655603297?pwd=Sjk3UnhLODVqdVEwTXJRZk5qbXNGdz09");
}
void scienceSH()
{
  system ("cmd /c start https://zoom.us/j/6574050599?pwd=OHYxdS9PWUdEaS91Y2h1TXpOZXh6Zz09");
}
void scienceHJ()
{
  system ("cmd /c start https://us02web.zoom.us/j/8399914024?pwd=R2I3TDNNcEZjRVRZOGFxTnZGTmhvdz09");
}

void artJS()
{
  system ("cmd /c start https://us02web.zoom.us/j/2770224072?pwd=czVuNjB2bHRhWDU2VWhycWZKM0xyUT09");
}
void artHG()
{
  system ("cmd /c start https://us02web.zoom.us/j/9167725349?pwd=TW1SdXZSS1p6K2VwZ0lTSFZNY294dz09");
}
void pe()
{
  system ("cmd /c start https://us04web.zoom.us/j/6231503832?pwd=WmJCeFA1K3Q1emloMzNoZ3MwaEVnQT09");
}
void careerKH()
{
  system ("cmd /c start  https://us02web.zoom.us/j/5303705413?pwd=NnNwUGJOMWhPYXpCbEVEWDJZbUVmUT09");
}
void careerIG()
{
  system ("cmd /c start https://us02web.zoom.us/j/3639620124?pwd=T1RDbWd1dHJnVVV2ckt3aklBTU94QT09");
}
void careerCH()
{
  system ("cmd /c start https://us02web.zoom.us/j/6530979393?pwd=MGJwMVIrVURSbm1TT1dQK0V1bzFrUT09");
}
void careerH()
{
  system ("cmd /c start https://us02web.zoom.us/j/5980025567?pwd=KzVtSm43aTBtN0hpellzd09QcVdYUT09");
}

void etcYG()
{
  system ("cmd /c start https://us02web.zoom.us/j/2669056200?pwd=Q3JOQUprR2c0bzRzVkptdmdXTGs4QT09");
}
void etcSW()
{
  system ("cmd /c start https://us02web.zoom.us/j/4215961422?pwd=OWxxRjJScDNHbTgzU3pPNEcrdTZrZz09");
}
void etcKW()
{
  system ("cmd /c start https://us02web.zoom.us/j/7317018056?pwd=KytteHdEV29CVzMxU0dYTUpTamlYdz09");
}
void etcBL()
{
  system ("cmd /c start https://zoom.us/j/5104395898?pwd=ci9ncHpRTkV6amtvTHVSYzhNK043QT09");
}
void etcBJ()
{
  system ("cmd /c start https://us02web.zoom.us/j/7412490253?pwd=dS9lQVlkazFsaEQ2UFR4cCtxcUxXdz09");
}