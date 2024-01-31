#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>

void displayscore()
 {
 char nama[20];
 float a;
 FILE *f;
 system("cls");
 f=fopen("skor.txt","r");
 fscanf(f,"%s%f",&nama,&a);
 printf("\n\n\t\t ");
 printf("\n\n\t\t %s telah mendapatkan skor tertinggi: %.2f",nama,a);
 printf("\n\n\t\t ");
 fclose(f);
 getch();
 }


void help()
 {
 system("cls");
 printf("\n\n\n\tSelamat datang di Kuis Informatika!");
 printf("\n\n\tProjek ini dibuat untuk memenuhi tugas TIK");
 printf("\n\n\tPada Quiz ini Anda akan diberikan pertanyaan beserta pilihan jawaban");
 printf("\n\n\tAnda dapat memilih opsi A-D dengan memasukkan huruf yang sesuai. Jika");
 printf("\n\n\tjawaban Anda benar, maka Anda akan mendapatkan poin. Di akhir permainan,");
 printf("\n\n\ttotal poin Anda akan ditampilkan. Jika Anda mendapat skor tertinggi, maka");
 printf("\n\n\tnama Anda akan direkam. SELAMAT BERMAIN!");
 }

void writescore(float score, char plnm[20])
 {
 float sk;
 char nm[20];
 FILE *f;
 system("cls");
 f=fopen("skor.txt","r");
 fscanf(f,"%s%f",&nm,&sk);
 if (score>=sk)
   { sk=score;
     fclose(f);
     f=fopen("skor.txt","w");
     fprintf(f,"%s\n%.2f",plnm,sk);
     fclose(f);
   }
 }
int main()
     {
     int r,i;
     int countq,countr;
     int pa;int nq[6];int w;
     float skor;
     char input1;
     char namauser[20];
     time_t waktuawal,waktuakhir;
     system("cls");
     mainhome:
     system("cls");
     puts("\n\t\t SELAMAT DATANG DI KUIS INFORMATIKA!\n") ;
     puts("\n\t\t Dipersembahkan oleh Kelompok 4");
     puts("\n\t\t-------------------------------");
     puts("\n\t\t Tekan 'M' untuk memulai permainan");
     puts("\n\t\t Tekan 'S' untuk melihat skor  ");
     puts("\n\t\t Tekan 'H' untuk instruksi     ");
     puts("\n\t\t Tekan 'Q' untuk keluar        ");
     printf("\n\t\t-------------------------------\n\n\t\t  ");
     input1=toupper(getch());
     if (input1=='S')
 {
 displayscore();
 goto mainhome;
 }
     else if (input1=='Q')
 exit(1);
     else if (input1=='H')
 {
 help();
 getch();
 goto mainhome;
 }
    else if(input1=='M'){
     system("cls");

     printf("\n\n\n\t\t\tTolong masukkan namamu...");
     printf("\n\t\t\t(satu kata)\n\n\t\t\t");
     gets(namauser);

     home:
     system("cls");
     waktuawal=time(NULL);
     countq=countr=0;
     i=1;
     start:
     srand ( time(NULL) );
     r=rand()%23+1;
     nq[i]=r;
     for (w=0;w<i;w++)
 if (nq[w]==r) goto start;

     switch(r)
  {
  case 1:
  printf("\n\nKumpulan rangkaian intruksi terstruktur (tersusun) dan juga terbatas");
  printf("\n\nuntuk menyelesaikan suatu permasalahan komputasi tertentu, disebut ....");
  printf("\n\nA. Program\tB. Bahasa Pemrograman\n\nC. Algoritma\tD. Aplikasi\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah C. Algoritma");break;}

  case 2:
  printf("\n\n\nBerikut adalah contoh bahasa pemrograman prosedural, kecuali ....");
  printf("\n\nA. Python\tB. C\n\nC. Pascal\tD. COBAL\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         printf("\n\nSalah!!! Jawaban yang benar adalah A. Python");
  break;

  case 3:
  printf("\n\n\nBahasa C memiliki beberapa karakteristik. Yang bukan merupakan karakteristik C adalah ....");
  printf("\n\nA. God's Programming Language\n\nB. Procedural Programming Language\n\nC. Object Oriented\n\nD. High Level Programming Language\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah C. Object Oriented");break;}


  case 4:
  printf("\n\n\nSimbol flowchart yang digunakan untuk percabangan atau pilihan adalah ....");
  printf("\n\nA. Oval\tB. Bulat\n\nC. Panah\tD. Belah Ketupat\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\Benar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah D. Belah Ketupat");break;}


  case 5:
  printf("\n\n\nBahasa buatan manusia yang bersifat informal untuk merepresentasikan algoritma disebut ....");
  printf("\n\nA. Humancode\tB. Pseudocode\n\nC. Autocode\tD. Precode\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah B. Pseudocode");break;}

  case 6:
  printf("\n\n\nBahasa pemrograman memiliki berbagai macam paradigma");
  printf("\n\n\nYang bukan termasuk paradigma bahasa pemrograman adalah ....");
  printf("\n\nA. Procedural\tB. Declarative\n\nC. Interogative\tD. Object Oriented\n\n");
  countq++;
  if (toupper(getch())=='C' )
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah C. Interogative");break;}


  case 7:
  printf("\n\n\nSiapakah pencipta dari bahasa pemrograman C?");
  printf("\n\nA. Bjorne Stroustrup\tB. Kernighan & Ritchie\n\nC. Charles Babbage\tD. James Gosling\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah B. Kernighan & Ritchie");break;}


  case 8:
  printf("\n\n\nBahasa C membutuhkan beberapa perangkat lunak untuk dapat berjalan\n\nYang bukan merupakan perangkat lunak yang dibutuhkan adalah ....");
  printf("\n\nA. Editor\tB. Compiler\n\nC. Assembly\tD. Displayer\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah D. Displayer");break;}


  case 9:
  printf("\n\n\nIdentifier memiliki beberapa syarat, kecuali ....");
  printf("\n\nA. Tidak boleh sama dengan keyword bahasa C\n\nB. Disusun dari kombinasi huruf (besar dan kecil), angka, dan underscore\n\nC. Harus dimulai dengan huruf atau underscore\n\nD. Bersifat case-insensitive\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah D. Case-insensitive");break;}


  case 10:
  printf("\n\n\nData berupa bilangan dengan desimal dapat disimpan di dalam tipe data");
  printf("\n\nA. int\tB. char\n\nC. boolean\tD. double\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah D. double");break;}


  case 11:
  printf("\n\n\nDalam bahasa pemrogramaan C++, untuk menampilkan teks 'Halo Dunia!', maka \n\ndapat menggunakan sintaks ....");
  printf("\n\nA. printf('Halo Dunia!')\tB. print('Halo Dunia!')\n\nC. cout >> 'Halo Dunia!'\tD. system.out.println('Halo Dunia')\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah C. cout >> 'Halo Dunia!'");break;}

  case 12:
  printf("\n\n\nSetiap perintah dalam proyek C/C++ selalu diakhiri dengan tanda ....");
  printf("\n\nA. '{}'\tB. ';'\n\nC. ':'\tD. '//'\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah B. ';'");break;}

  case 13:
  printf("\n\n\nOperator yang bukan merupakan bagian dari operator logika adalah ....");
  printf("\n\nA. '!'\tB. '&&'\n\nC. '||'\tD. '*'\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah D. '*'");break;}

  case 14:
  printf("\n\n\nUntuk menyatakan fungsi utama berakhir di running dan dijalankan tanpa \n\nadanya debug atau eror adalah ....");
  printf("\n\nA. getch\tB. return 0\n\nC. using namespace std\tD. int main\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah B. return 0");break;}

  case 15:
  printf("\n\n\nSuatu tahapan atau bagian alir yang berfungsi untuk menggambarkan \n\npenyelesaian masalah secara sederhana dan jelas adalah ...");
  printf("\n\nA. Pengulangan\tB. Diagram Alir\n\nC. Dimensi\tD. Variabel\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah B. Diagram alir");break;}

  case 16:
  printf("\n\n\nPemesanan tempat memori variabel dan tipe data atau fungsi tertentu disebut ....");
  printf("\n\nA. Deklarasi\tB. Algoritma\n\nC. Integer\tD. Looping\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah A. Deklarasi");break;}


  case 17:
  printf("\n\n\nYang tidak termasuk ke dalam tipe data numerik ialah ....");
  printf("\n\nA. int\tB. double\n\nC. char\tD. short\n\n");
  countq++;
  if (toupper(getch())=='C')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah C. char");break;}

  case 18:
  printf("\n\n\nUntuk membuat komentar di dalam Bahasa C adalah ....");
  printf("\n\nA. '#'\tB. '</>'\n\nC. '?>'\tD. '//'\n\n");
  countq++;
  if (toupper(getch())=='D')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah D. '//'");break;}

  case 19:
  printf("\n\n\nTipe data yang digunakan untuk menghasilkan nilai TRUE dan FALSE adalah ....");
  printf("\n\nA. integer\tB. boolean\n\nC. long\tD. string\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah B. boolean");break;}

  case 20:
  printf("\n\n\nSuatu kondisi di mana struktur if berada di dalam if lainnya adalah statement \n\ndalam kondisi ....");
  printf("\n\nA. if else\tB. if bersarang\n\nC. else if\tD. if then\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah A. if-else");break;}

  case 21:
  printf("\n\n\nBentuk umum dari pernyataan perulangan for adalah ....");
  printf("\n\nA. for (inisiasi;syarat;modifier)pernyataan\n\nB. for (insialisasi;syarat;pernyataan)\n\nC. for (inisialisasi;syarat;pernyataan)modifier\n\nD. for (syarat;inisialisasi;modifier)pernyataan\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah A. for (inisiasi;syarat;modifier)pernyataan");break;}

  case 22:
  printf("\n\n\n3 hal yang diperlukan dalam membuat fungsi antara lain ....");
  printf("\n\nA. Nama fungsi, parameter, nilai yang dikembalikan\n\nB. Nama fungsi, rumus, hasil\n\nC. Hasil, keperluan, rumus\tD. Nilai yang dikembalikan, rumus, nama fungsi\n\n");
  countq++;
  if (toupper(getch())=='A')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah A. Nama fungsi, parameter, nilai yang dikembalikan");break;}

  case 23:
  printf("\n\n\nTipe data yang harus dinyatakan dengan tanda petik satu adalah ....");
  printf("\n\nA. boolean\tB. char\n\nC. string\tD. int\n\n");
  countq++;
  if (toupper(getch())=='B')
   {printf("\n\nBenar!!!");countr++; break;}
  else
         {printf("\n\nSalah!!! Jawaban yang benar adalah B. char");break;}



  }
 i++;
 if (i<=10) goto start;
 waktuakhir=time(NULL);
 skor=(float)countr/countq*100-difftime(waktuakhir,waktuakhir)/3;
 if (skor<0) skor=0;
 printf("\n\n\nSkor Anda: %.2f",skor);
 if (skor==100) printf("\n\nSELAMAT! ANDA SUDAH MENGUASAI MATERI INI.");
 else if (skor>=80 && skor<100) printf("\n\nSELAMAT! ANDA LULUS");
 else if (skor>=60 &&skor<80) printf("\n\nTINGKATKAN LAGI!");
 else if (skor>=40 && skor<60) printf("\n\nBAIK, TAPI TIDAK CUKUP.");
 else printf("\n\nCOBA PAHAMI KEMBALI MATERI INI.");
 puts("\n\nBERMAIN LAGI?(Y/T)");
 if (toupper(getch())=='Y')
  goto home;
 else
  {
  writescore(skor,namauser);
  goto mainhome;
  }
 }
     else
 {
 Sleep(700);
 goto mainhome;
 }
 return 0;
}
