package jogodado;

import java.util.Scanner;
public class JogoDado {
    public static void main(String[] args) {
        int sorteio;
        char resp = 's';
        Scanner teclado = new Scanner(System.in);

        try {
            while(resp == 's') {
                sorteio = (int)(Math.random() * 6 + 1);
                switch (sorteio) {
                    case 1:
                        System.out.println("+------------+");
                        System.out.println("|            |");
                        System.out.println("|      0     |");
                        System.out.println("|            |");
                        System.out.println("+------------+");
                        break;
                    case 2:
                        System.out.println("+------------+");
                        System.out.println("|  0         |");
                        System.out.println("|            |");
                        System.out.println("|          0 |");
                        System.out.println("+------------+");
                        break;
                    case 3:
                        System.out.println("+------------+");
                        System.out.println("|  0         |");
                        System.out.println("|      0     |");
                        System.out.println("|          0 |");
                        System.out.println("+------------+");
                        break;
                    case 4:
                        System.out.println("+------------+");
                        System.out.println("|  0       0 |");
                        System.out.println("|            |");
                        System.out.println("|  0       0 |");
                        System.out.println("+------------+");
                        break;
                    case 5:
                        System.out.println("+------------+");
                        System.out.println("|  0       0 |");
                        System.out.println("|      0     |");
                        System.out.println("|  0       0 |");
                        System.out.println("+------------+");
                        break;                                    
                    case 6:
                        System.out.println("+------------+");
                        System.out.println("|  0   0   0 |");
                        System.out.println("|            |");
                        System.out.println("|  0   0   0 |");
                        System.out.println("+------------+");
                        break;
                    default:
                        break;
                }
                System.out.println();
                System.out.print("Deseja jogar o dado novamente? [S/N]");
                resp = teclado.nextLine().charAt(0);
            } 
        } finally {
            teclado.close();
        }
    }
    
}
