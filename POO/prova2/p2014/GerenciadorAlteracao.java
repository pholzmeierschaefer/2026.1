package prova2.p2014;
//questao 2
public class GerenciadorAlteracao {
    public void transforma(Forma[] formas){
        for(int i = 0; i < formas.length; i++){
            if (formas[i] instanceof Rotacionavel){
                Rotacionavel r = (Rotacionavel) formas[i];
                r.rotacionar(45.0); //rotaciona 45 graus
            }
            
            if(formas[i] instanceof Transformavel){
                Transformavel t = (Transformavel) formas[i];
                t.transformar(0.5); //diminui pela metade a forma

            }
        }
    }

    public void moveParaOrigem(Forma[] formas){
        for (int i = 0; i < formas.length; i++){
            formas[i].setX(0); //transforma o x em 0
            formas[i].setY(0); //transforma o y em 0
        }
    }
}


