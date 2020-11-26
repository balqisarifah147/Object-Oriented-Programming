public class Member {
   protected String nama;
   protected int umur;
   
   //Constructor 2 parameter
   public Member(String nama, int umur) {
       this.nama = nama;
       this.umur = umur;
   }
   
   // Display Method
   public void display() {
       System.out.println("Nama : " + nama);
       System.out.println("Umur : " + umur);
   }
}