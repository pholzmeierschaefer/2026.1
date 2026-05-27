package prova2.p2014;


public class Principal {
    public static void main(String[] args) {
        System.out.println("--- INICIANDO TESTES DO SOFTWARE CAD --- \n");

        // 1. Criando o vetor polimórfico de Formas (Capacidade de armazenar qualquer filho)
        Forma[] formas = new Forma[5];
        
        // Instanciando as formas em posições variadas no plano cartesiano
        formas[0] = new Quadrado(10, 10, 5);          // Posição (10,10), Lado 5
        formas[1] = new Retangulo(20, 30, 4, 8);      // Posição (20,30), Altura 4, Largura 8
        formas[2] = new Circulo(50, 50, 10);          // Posição (50,50), Raio 10
        formas[3] = new Triangulo(100, 150, 6, 12);   // Posição (100,150), Base 6, Altura 12
        formas[4] = new Trapezio(15, 25, 20, 10, 8);  // Posição (15,25), bMaior 20, bMenor 10, Altura 8

        // 2. Testando o Gerenciador de Alterações (Questão 2)
        GerenciadorAlteracao gerenciador = new GerenciadorAlteracao();

        System.out.println(">> Executando método 'transforma' (Rotação e Escala)...");
        // Este método vai varrer o vetor, descobrir quem é quem usando instanceof e aplicar as modificações
        gerenciador.transforma(formas);
        System.out.println("Modificações aplicadas com sucesso!\n");

        System.out.println(">> Executando método 'moveParaOrigem'...");
        // Modifica o X e Y de absolutamente todas as formas para 0
        gerenciador.moveParaOrigem(formas);
        
        // Verificando se todas foram para a origem (0,0)
        for (int i = 0; i < formas.length; i++) {
            System.out.println("Forma [" + formas[i].getClass().getSimpleName() + "] movida para a posição: (" 
                               + formas[i].getX() + ", " + formas[i].getY() + ")");
        }
        System.out.println();

        // 3. Testando a Interface Depuravel e Segmentos (Questão 4)
        System.out.println(">> Testando Depuração de Formas Retas (Questão 4)...");
        
        // Pegamos especificamente o Quadrado que está na posição 0 do vetor
        Forma formaGenerica = formas[0]; 

        // Checamos se ele implementa Depuravel antes de forçar o Downcasting
        if (formaGenerica instanceof Depuravel) {
            Depuravel objetoDepuravel = (Depuravel) formaGenerica;
            
            // Chama o método que calcula e retorna os 4 lados do quadrado
            Segmentos[] lados = objetoDepuravel.getLados();
            
            System.out.println("O Quadrado possui " + lados.length + " segmentos de reta:");
            for (int i = 0; i < lados.length; i++) {
                Segmentos seg = lados[i];
                // Imprime as coordenadas cartesianas de cada ponto que compõe o lado
                System.out.println(" Lado " + (i + 1) + ": PontoA(" + seg.getPA().getX() + "," + seg.getPA().getY() + ") "
                                   + "até PontoB(" + seg.getPB().getX() + "," + seg.getPB().getY() + ")");
            }
        }
        
        System.out.println("\n--- FIM DOS TESTES ---");
    }
}