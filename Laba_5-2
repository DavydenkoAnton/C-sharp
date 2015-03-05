using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _5._2 {






    class Fraction {
        public int numerator;
        public int denominator;


        public Fraction() {
            numerator = 0;
            denominator = 0;
        }
        public Fraction(int num, int den) {
            numerator = num;
            denominator = den;
        }
        public static Fraction operator *(Fraction f, int x) {
            Fraction fract = new Fraction ( );
            fract.numerator = f.numerator * x;
            fract.denominator = f.denominator * x;
            return fract;
        }
        public static Fraction operator *(int x, Fraction f) {
            Fraction fract = new Fraction ( );
            fract.numerator = f.numerator * x;
            fract.denominator = f.denominator * x;
            return fract;
        }

        public int separate(double x) {
            double b = 0;
            int count = 0;
            int a = 0;
            do {
                b *= 10;
                a = ( int ) x;
                b = x - a;
                count++;
            } while (b != 0);
            return count;
        }


        public static Fraction operator +(Fraction f, double x) {
            Fraction fract = new Fraction ( );
            return fract;
        }


    }



    class Program {
        static void Main(string [] args) {
            Fraction f1 = new Fraction (3, 4);
            int a = 10;
            Fraction f2 = f1 * a;
            Fraction f3 = a * f1;
            double d = 1.5;

           // int f = Fraction.
                // Fraction f4=f1+d;
            Console.WriteLine ("f2={0}/{1} ", f2.numerator, f2.denominator);
            Console.WriteLine ("f3={0}/{1} ", f3.numerator, f3.denominator);
            //Console.WriteLine ("f4={0}/{1} ", f4.numerator, f4.denominator);






        }
    }
}
