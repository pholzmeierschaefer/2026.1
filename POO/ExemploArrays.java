public class ExemploArrays {
    public static void main (String[] args){
        int[] vet = new int[15]; //cria vetor

        // duas formas funcionam

        int[] vet2;
        vet2 = new int[15];

        vet2[2] = 27;

        System.out.println(vet2[0]);

        
        //ambos os for funcionam porem com o nomeVetor.length não precisa saber o tamanho do vetor
        //assim podemos alterar o valor do tamanho do vetor
        //for (int i = 0; i < 20; i++);
        for (int i = 0; i < vet.length; i++){
            System.out.println("vet2[" + i + "]: " + vet2[i]);
        }
        System.out.println();
        System.out.println("outra forma de for");
        System.out.println();

        //for(tipo do vetor nome variavel : nome do vetor){
        //  System.out.println("nome vetor[_]: " + nome variavel)
        //}

        for(int v : vet2){
          System.out.println("nome vetor[_]: " + v);
        }

        System.out.println();

        // podemos usar break também para parar o for ou while

        


        





    }
}
