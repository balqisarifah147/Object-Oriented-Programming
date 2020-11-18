package pecahan;

import java.util.Scanner;
public class Pecahan(){}

    //definisi atribut dan tipe data

    private int penyebut;
    private int pembilang;

    public int getPembilang(){
        return pembilang;
    } 
     
    public int getPenyebut(){
         return penyebut;
    }  
    public Pecahan (int pembilang, int penyebut){
        this.pembilang = pembilang;
        this.penyebut = penyebut;
    }
    public Pecahan (Pecahan p){
        this.p = p;
    }
}
        // definisi objek
public class Main(){
    public static void  main(String[] args){

        //objek1 3/2
        Objek1.pembilang = 3;
        objek1.penyebut = 2;

        //menampilkan data
        System.out.PrintIn (Objek1.pembilang + "/"+ objek1.penyebut);


        //objek2 5/6
        objek2.pembilang = 5;
        objek2.penyebut = 6;

        //menampilkan data
        System.out.PrintIn (objek2.pembilang + "/" + objek2.penyebut);
        System.out.PrintIn ("Output Hasil tambah =");
    }
}
    
    // definisi method
    Pecahan tambah {
        System.out.PrintIn (Objek1.pembilang + "/"+ objek1.penyebut + "+"  + objek2.pembilang + "/" + objek2.penyebut);
    }
}   