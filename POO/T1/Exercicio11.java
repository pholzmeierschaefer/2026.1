public class Exercicio11 {
    
     public static void main(String[] var0) {

        int encontrados = 0;
        int quinze = 15;
        int atual = 2;
        

        while(encontrados < quinze){
            boolean eh = true;
            for(int i =2; i < atual; i++){
                if(atual % i == 0){
                eh = false;
                break;
                }
            }

             if (eh){
                System.out.println("numero primo: " + atual);
                encontrados ++;
            }
            atual ++;
        }

           
     }

}
