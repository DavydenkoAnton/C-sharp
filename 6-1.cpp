using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

/*Создать класс «Товар», содержащий следующие закрытые поля: название товара, количество, стоимость товара в рублях.
 * Обеспечить проверку на правильность ввода данных. Предусмотреть свойства для получения состояния объекта. 
  
 * 
 * Создать класс «Склад», содержащий закрытый массив товаров. Обеспечить: 
• вывод информации о товаре по номеру с помощью индекса; 
• вывод информации о товаре, название которого введено с клавиатуры, если таких товаров нет, выдать соответствующее сообщение; 
• сортировку товаров по наименованию, по количеству и по цене.  

*/



namespace Laba_6 {
    class Product {
        string name;
        int num;
        int price;

        public Product() {
        }

        public string NAME {
            set {
                if (value.Length > 0)
                    name = value;
                else
                    Console.WriteLine ("Wrong value");
            }
            get {
                return name;
            }
        }

        public int NUM {
            set {
                if (value > 0)
                    num = value;
                else
                    Console.WriteLine ("Wrong value");
            }
            get {
                return num;
            }
        }
        public int PRICE {
            set {
                if (value > 0)
                    price = value;
                else
                    Console.WriteLine ("Wrong value");
            }
            get {
                return price;
            }
        }


        class Storage {

            int numberOfProduct;



            public Storage() {


            }

            







        }




    }




    class Program {
        static void Main(string [] args) {
            Product prod1 = new Product ( );
            prod1.NAME = "Meat";
            prod1.NUM = 100;
            prod1.PRICE = 120;
            Console.WriteLine (@"Name  - {0}
Num   - {1}
Price - {2}", prod1.NAME, prod1.NUM, prod1.PRICE);





        }
    }
}
