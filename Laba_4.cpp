using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
/*# LR4
ЛР_4. Классы, искл. Ситуации, пространства имен
1.	Придумать класс, описывающий студента и предусмотреть в нем следующие характеристики: фамилия, имя, отчество, группа ,
 * возраст, массив оценок (рваный) по программированию, администрированию и  дизайну. Добавить методы по работе с перечисленными данными:
 * возможность установки/получения оценки, получение среднего балла по заданному предмету, распечатка данных о студенте.
2.	Разработать собственный класс для хранения целочисленных коэффициентов А и В линейного уравнения A*X + B*Y = 0. В классе реализовать
 * статический метод Parse, которые принимает строку со значениями коэффициентов, разделенных запятой или пробелом. В случае передачи в метод
 * строки недопустимого формата генерируется исключение FormatException.
3.	Разработать метод для решения системы 2 линейных уравнений:
A1*x + B1*y = 0
A2*x + B2*y = 0
Метод с помощью выходных параметров должен возвращать найденной решение или генерирует исключение ArgumentOutOfRangeException, если решение не существует. 
4.	Разработайте приложение «7 чудес света», где каждое чудо будет представлено отдельным классом. Создайте дополнительный класс, содержащий точку входа.
 * Распределите приложение по файлам проекта и с помощью пространства имен обеспечьте возможность взаимодействия классов. 
5.	Разработать приложение, в котором бы сравнивалось население трех столиц из разных стран. Причем страна бы обозначалась пространством имен,
 * а город – классом в данном пространстве.
 * */
namespace ClassWork {

    class Student {
         static string surname; 
         static string name;
         static string fathersname;
         static int group;
         static int age;
         static int[][] ArrRating=new int[3][];

         public Student (string surname_, string name_, string fathersname_, int age_, int group_) {
         surname=surname_;
         name=name_;
         fathersname=fathersname_;
         age=age_;
         group=group_;
         }

         public void StudentList ( ) {
         Console.WriteLine("{0} {1} {2}, возраст-{3} группа-{4}\n", surname, name, fathersname,age,group);
         }

         public void GetRate ( ) {
         Console.WriteLine("Выберите предмет: \n1.Программирование\n2.Администрирование\n3.Дизайн\n");
         int count=int.Parse(Console.ReadLine());
         Console.WriteLine("Выставьте оценку:");
         int count2=int.Parse(Console.ReadLine());

         int count3=ArrRating[count-1].Length;
         ArrRating=new int[count-1][count3];


         }

    }

    class Program{
        static void Main (string[] args) {


        Student student1=new Student("Gates","Bill","Adamovich",25,118);
        student1.StudentList();
        student1.GetRate();



        }
    }
}
