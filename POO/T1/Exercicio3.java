import java.util.Arrays; 

public class Exercicio3{

    public static void main(String[] args){
        
        double soma = 0;
        double media;
        int meio;
        double mediana;

        double[] vetor = {8.5, 7.0, 4.2, 10.0, 3.5};

        
        for (double numeros : vetor){ //para cada numero dentro do vetor
            soma += numeros;
        }

        media = soma / vetor.length;
        

        Arrays.sort(vetor); //coloca o vetor em ordem
        System.out.println("vetor organizado: " + Arrays.toString(vetor));

        meio = vetor.length / 2;

        if(vetor.length % 2 == 0){ //se o tamanho for par a mediana é a media dos numeros centrais
            mediana = (vetor[meio - 1] + vetor[meio]) / 2.0;
        }

        else{ //se for impar a mediana é o meio
            mediana = vetor[meio];
        }

        System.out.printf("media: %.2f\n", media);
        System.out.printf("Mediana: %.2f\n", mediana);
        




    }
    
}
