package ExamenParcial2;
import java.util.*;

public class Operaciones {
	public  static void main (String[] args){
		Scanner ingresar = new Scanner(System.in);
			int num1;
			int num2;
			int resul;
			int a;
			int b;
			
			System.out.println("Programa un valor que pida un número desde teclado entre 1 y 6:  ");
			System.out.println("-----");
			System.out.println("1.Suma\t2.Resta\t3.Multiplicacion\t4.Divicion\t5.Suma de a+b\t6.Multiplicacionde a*b: ");
			
			int num = ingresar.nextInt();
			switch(num) {
			case 1:
				System.out.println("1.Suma");
				System.out.println("Ingrese el primer valor");
				num1 = ingresar.nextInt();
				System.out.println("Ingrese el segundo valor");
				num2 = ingresar.nextInt();
				resul=num1+num2;
				System.out.println("El resultado de la suma es:" + resul);
				break;
			case 2:
				System.out.println("2.Resta");
				System.out.println("Ingrese el primer valor");
				num1 = ingresar.nextInt();
				System.out.println("Ingrese el segundo valor");
				num2 = ingresar.nextInt();
				resul=num1-num2;
				System.out.println("El resultado de la resta es:" + resul);
				break;
			case 3:
				System.out.println("3.Multiplicacion");
				System.out.println("Ingrese el primer valor");
				num1 = ingresar.nextInt();
				System.out.println("Ingrese el segundo valor");
				num2 = ingresar.nextInt();
				resul=num1*num2;
				System.out.println("El resultado de la multiplicacion es:" + resul);
				break;
			case 4:
				System.out.println("4.Divicion");
				System.out.println("Ingrese el primer valor");
				num1 = ingresar.nextInt();
				System.out.println("Ingrese el segundo valor");
				num2 = ingresar.nextInt();
				resul=num1/num2;
				System.out.println("El resultado de la divicion es:" + resul);
				break;
			case 5:
				System.out.println("5.La suma de a+b");
				System.out.println("Ingrese el valor de a");
				a = ingresar.nextInt();
				System.out.println("Ingrese el valor de b");
				b = ingresar.nextInt();
				resul=a+b;
				System.out.println("El resultado de la suma de a+b es de:" + resul);
				break;
			case 6:
				System.out.println("6.La multipliacion de a*b");
				System.out.println("Ingrese el valor de a");
				a = ingresar.nextInt();
				System.out.println("Ingrese el valor de b");
				b = ingresar.nextInt();
				resul=a*b;
				System.out.println("El resultado de la multipliacion de a*b es de:" + resul);
				break;
			}
		}
	}
