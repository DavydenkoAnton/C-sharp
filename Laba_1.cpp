using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Globalization;


namespace Laba_1 {
    class Program {
        static void Main ( string[] args ) {
            
            
            int A = 0, B = 0, C = 0, count = 0, count2 = 0, TmpValue = 0; ;
            int[] IntArr = new int[100];
            char[] CharArr = new char[0];
            string Line;
            
            // 1-------------------------------------
            Console.Write ( "--- 1 ---\nEnter value of   A: " );
            A = int.Parse ( Console.ReadLine ( ) );// парсим значение в инт
            Console.Write ( "Enter value of B>A: " );
            B = int.Parse ( Console.ReadLine ( ) );// парсим значение в инт
            count = A;// присваиваем значение А
            if ( A < B ) {// проверяем условие
                for ( int i = A; i <= B; i++ ) {// выводим от А до В
                    for ( int j = 0; j < count; j++ ) {// цикл на вывод значения А столько раз, сколько равно А 
                        Console.Write ( "{0}", count );// выводим А
                    }
                    Console.WriteLine ( );// каретку на начало строки троки
                    count += 1;// плюсуем А
                }
            } else { Console.WriteLine ( "Wrong value of B" ); }// если А больше В
            
            // 2-------------------------------------
            int numOfSigns = 4;
            Console.Write ("\n--- 2 ---\nEnter num of strings: ");
            A = int.Parse (Console.ReadLine ());
            Console.WriteLine ();
            string alpha_string = "ABCDEFGHIJKLMNOPQRSTUVWXYZABC";
            char [] alpha_char = alpha_string.ToCharArray ();
            for (int i = 0; i < A; i++) {                
                for (int j = 0; j < numOfSigns; j++) {
                    Console.Write ("{0} ", alpha_char [count+j]);
                    }
                count++;
                if (count==26) {
                    count=0;
                }
                Console.WriteLine ();
            }
            
            // 3-------------------------------------
            Console.Write ("\n--- 3 ---\nEnter value: ");
            count=0;
            Line=Console.ReadLine ();
            A=int.Parse (Line);
            B=Line.Length;
            char [] digits = Line.ToCharArray ();
            if (A>20 || A==11) {
                do {
                    if (digits [count]!=digits [B-1]) {
                        Console.WriteLine ("It`s not polindrom");
                        Console.WriteLine (digits [count]);
                        break;
                    }
                    if (digits [count]==digits [B-1]) {
                        count++;
                        B--;
                    }
                    if (count==Line.Length/2  || A==11 || A==-11) {
                        Console.WriteLine ("It`s polindrom");
                        break;
                    }
                } while (true);
            } else {
                Console.WriteLine ("It`s not polindrom");
            }

             // 4-------------------------------------
             Console.WriteLine ( "\n--- 4 ---\n" );
             A = 'e'; B = 'n';
             Console.WriteLine ( "'e'={0} 'n'={1}",A,B );
             for ( int i = A; i < B; i++ ) {
                 if ( i % 7 == 0 ) {
                     Console.WriteLine ( "Step {0}%7=0",i );
                 }
             }
            
             // 5-------------------------------------
             Console.Write ( "\n--- 5 ---\nEnter value -3, 6 or 99: " );
             A = int.Parse ( Console.ReadLine ( ) );// парсим значение в инт
               switch ( A ) {
                   case -3:
                   Console.Write ( "Right!\n" );
                   break;
                   case 6:
                   Console.Write ( "Right!\n" );
                   break;
                   case 99:
                   Console.Write ( "Right!\n" );
                   break;
                   default:
                   Console.Write ( "Wrong!\n" );
                   break;
               }
           
           // 6-------------------------------------
            Console.Write ("\n--- 6 ---\nRange from -5 to 5\nEnter value not more than 5: ");
            Line=Console.ReadLine ();
            count=int.Parse (Line);
            A = -5;
            B = 5;
            if (count<10) {

                for (int i = A; i <= B; i++) {
                    if (count*i>=A && count*i<=B) {
                        Console.Write ("{0} ", count*i);
                    }                    
                }
            }
            Console.WriteLine ();
             
          
            // 7-------------------------------------
            Console.Write ( "\n--- 7 ---\nEnter number value: " );
            Line = Console.ReadLine ( );
            A = int.Parse ( Line );
            if ( A > 9 ) {
                count = A; count2 = 0;
                for ( int i = 0; i < Line.Length; i++ ) {
                    B = A % 10;
                    if ( B < count ) { count = B; }
                    if ( B > count2 ) { count2 = B; }
                    A /= 10;
                }
                Console.WriteLine ( "min {0} + max {1} = {2}", count, count2, count + count2 );
            } else { Console.WriteLine ( "max {0} + 0 = {0}",A,A  ); }
           
           // 8-------------------------------------
           Console.Write ("Sum of 100 numbers = ");
            ulong fib=0,fib1 = 0, fib2 = 1;
            
            int NumOfFib=10;
            ulong sum=0;
                for (int i = 1; i < NumOfFib+1; i++) {
                    fib = fib2 + fib1;
                    fib2 = fib1;
                    fib1 = fib;
                    sum+=fib;
                    //Console.Write ("{0} ", fib);
                }
                Console.WriteLine ("{0} ",sum);
           /*
           // 9-------------------------------------
            Console.WriteLine ( "\n--- 9 ---\nEnter num of strings: " );
              */
        }
    }
}
