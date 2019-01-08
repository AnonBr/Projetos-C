#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>

/*Criar um programa que interaja com o usuario e que cada decisão tomada pelo usuario ele obtenha uma resposta diferente*/

int main()
{
    //char ch;
    char nome[40]="";
    float soma1, soma2, subtracao1, subtracao2, multiplicacao1, multiplicacao2, divisao1, divisao2, potenciacao1, potenciacao2;
    int intch,calculo = 0;
    int idade, idaderamon,opcao,controle;//variavel controle será só para digitar enter apos uma instrução
    char ler,s,n,ch;

    printf("Olá, antes de começar vou te dar algumas instruções!\n", setlocale(LC_ALL,""));
    printf("Leia atentamente tudo que o programa mostrar pra você,\n");
    printf("para um melhor aproveitamento da sua interação.\n");
    printf("Bem, vamos começar!!!\n\n");
    printf("\n*************************************************************************\n");
    printf("Qual o seu nome?\n");
    scanf("%s%*c",&nome);
    printf("Muito bonito o seu nome %s.\n", nome);
    printf("Então %s, qual a sua idade?\n", nome);
    scanf("%d%*c",&idade);
    printf("Nossa!!! Você já tem %d anos %s? Que legal", idade, nome);
    printf("\n");
    printf("Voce sabe quantos anos o meu criador tem?\n");
    printf("Vamos la quantos anos voce acha que ele tem?\n");
    printf("Digite o seu palpite:\n");
    scanf("%d%*c", &idaderamon);

    if (idaderamon == 27)
    {
        printf("UALLL!!! Você acertou\n");
        printf("Que chute em!!! Parabéns\n");
    }
    else
    {
        printf("Ah! Você errou, ele tem 27 anos\n");
        printf("Se acertasse seria um belo chute, hehehehe!!!\n");
    }
    printf("\n");
    printf("Mas e ai %s, você gosta de ler? (s/n)\n", nome);
    scanf("%c",&ler);

    /*while((ler!=0)||(ler!=1))
    {
        printf("*****ATENÇÃO*****\n");
        printf("Digite 1 ou 0 para escolha!!!");
        printf("Mas e ai %s, você gosta de ler?\nResponda 1(numero um) para sim \nou 0(numero zero) para não:\n");
        scanf("%d",&ler);
    }*/
    if((ler == 's') || (ler == 'S'))
    {
        printf("Muito bom,fico muito feliz em saber que você gosta de ler.\n");
        printf("Para chegar até aqui nesse programa o Ramon teve que estudar muito.\n");
    }
    else
    {
        printf("Como assim, você não gosta de ler?\n");
        printf("Ler vai expandir seus conhecimentos e fazer você\nir muito mais longe!\n");
    }
    printf("\n");//a partir daqui começará algumas atividade com o usuário.
    //http://www.qdivertido.com.br/contos.php (site de onde contem as historias)
    printf("\n*************************************************************************\n");
    printf("Bem vamos aproveitar que estamos aqui, e ler alguma historia.\n");
    printf("Vou dizer algumas opções que tenho salvo aqui.\n");
    printf("1 - A batalha na neve.\n");
    printf("2 - A galinha dos ovos de ouro.\n");
    printf("3 - A patinha esmeralda.\n");
    //printf("4 - A cigarra e a formiga.\n");
    printf("\n*************************************************************************\n");
    printf("Após digitar a opção desejada pode ser que não\ncaiba a historia inteira na tela\nrole com a bolinha do mouse pra cima.\n");
    printf("Digite o numero da historia que você quer ler: ");
    scanf("%d",&opcao);
    switch(opcao)
    {
    case 1:
        printf("\n*****A BATALHA NA NEVE*****\n\n");
        printf("Os coelhinhos gostam de ir ao jardim de infância,todo dia.\n");
        printf("Também com neve e gelo, pois movimentam-se e o frio então passa.\n");
        printf("À noite nevou, e de manhã tudo está coberto com uma grossa camada de neve.\n");
        printf("Os coelhinhos correm para fora.\n");
        printf("De tanta alegria alguns fazem cambalhotas na neve.\n");
        printf("O que o Puque está querendo?\n");
        printf("Ele faz bolas de neve e as joga nos outros.\n");
        printf("Logo os outros jogam de volta e já começa a maior\n");
        printf("batalha de bolas de neve.");
        printf("Todos se mexem!\n");
        printf("Pega! -Agarra! -Aih! -Espera só! -Assim! escuta-se pela mata.\n");
        printf("Bums! Uma bola de neve acerta a cabeça de Pim. Huuu!\n");
        printf("Ele começa a chorar.\n");
        printf("Não seja dengoso, Pim! Alguém lhe bate amigavelmente nas costas.\n");
        printf("Em troca você pode me derrubar na neve!\n");
        printf("Não é preciso repetir pois todos já estão \nparticipando da brincadeira outra vez.\n");
        break;

    case 2:
        printf("\n*****A GALINHA DOS OVOS DE OURO*****\n\n");
        printf("Certa manhã, um fazendeiro descobriu \nque sua galinha tinha posto um ovo de ouro.\n");
        printf("Apanhou o ovo, correu para casa, \nmostrou-o à mulher, dizendo:\n");
        printf("Veja! Estamos ricos!\n");
        printf("Levou o ovo ao mercado e vendeu-o por um bom preço.\n");
        printf("Na manhã seguinte, a galinha tinha \nposto outro ovo de ouro,\n");
        printf("que o fazendeiro vendeu a melhor preço.\n");
        printf("E assim aconteceu durante muitos dias.\n");
        printf("Mas, quanto mais rico ficava o fazendeiro, \nmais dinheiro queria.\n");
        printf("Até que pensou:\n");
        printf("Se esta galinha põe ovos de ouro, dentro \ndela deve haver um tesouro!\n");
        printf("Matou a galinha e ficou admirado pois, por dentro,\n");
        printf("a galinha era igual a qualquer outra.\n");
        printf("Resumindo:\n");
        printf("Quem tudo quer tudo perde.\n\n");
        break;

    case 3:
        printf("\n*****A PATINHA ESMERALDA*****\n\n");
        printf("Meu nome é Esmeralda.\n");
        printf("Antes de nascer, eu era assim, um ovo!\n");
        printf("Depois de um tempo, quebrei a casca e \nsaí de dentro e agora sou uma patinha.\n");
        printf("Aí, eu vi que tinha muitos irmãos patinhos. \nE todos eles gostam de banho de sol pela manhã. \nEu também!\n");
        printf("Então, eu fico com muita sede.\nMas sou desastrada e muitas vezes \ncaio na tigela ao tomar água.\n");
        printf("Os patos gostam de se refrescar nadando no lago. \nÉ uma aventura muito divertida.\n");
        printf("Certa vez, um ganso correu atrás de mim. \nAcho que os gansos não gostam de patinhos como eu.\n");
        printf("Os patos adultos comem milho. Mas eu sou pequena, por isso, \ncomo farelo de fubá com água para não engasgar.\n");
        printf("No final da tarde, mamãe pata fica contente ao ver \nseus filhotes em fila atrás dela, \nvoltando para casa.\n");
        break;

    default: printf("**********opção invalida*********\n");
    }
    printf("\n");
    // Começa algumas operações matemáticas.
    printf("\n*************************************************************************\n");
    printf("Espero que você tenha gostado do que leu e aprendeu até aqui.\n");
    printf("Agora nós vamos fazer algumas operações matemáticas para que você pratique.");
    printf("\n*************************************************************************\n");
    do
    {
    printf("Estes são as opções de calculo para você praticar\n");
    printf("1 = SOMA!\n");
    printf("2 = SUBTRAÇÃO!\n");
    printf("3 = MULTIPLICAÇÃO!\n");
    printf("4 = DIVISÃO!\n");
    printf("5 = POTENCIAÇÃO!\n");
    //printf("6 = ENCERRA OPERAÇÃO\n");
    //inicio da escolha do usuario
    printf("Escolha uma das operações: ");
    scanf("%d",&calculo);

    switch (calculo)
    {
    case 1:
        printf("Digite o primeiro numero que você quer somar: ");
        scanf("%f",&soma1);
        printf("Digite o segundo numero para a soma: ");
        scanf("%f",&soma2);
        printf("\n*************************************************************************\n");
        printf("O resultado da soma é de: %.2f\n", soma1 + soma2);
        printf("\n*************************************************************************\n");
        break;

    case 2:
        printf("Digite o primeiro numero que você quer subtrair: ");
        scanf("%f",&subtracao1);
        printf("Digite o segundo numero para a subtrção: ");
        scanf("%f",&subtracao2);
        printf("O resultado da subtração é de: %.2f\n", subtracao1 - subtracao2);
        break;

    case 3:
        printf("Digite o primeiro numero que você quer multiplicar: ");
        scanf("%f",&multiplicacao1);
        printf("Digite o segundo numero para a multiplicação: ");
        scanf("%f",&multiplicacao2);
        printf("\n*************************************************************************\n");
        printf("O total da multiplicação é de: %.2f\n", multiplicacao1 * multiplicacao2);
        printf("\n*************************************************************************\n");
        break;

    case 4:
        printf("Digite o primeiro numero que você quer dividir: ");
        scanf("%f",&divisao1);
        printf("Digite o segundo numero para a divisão: ");
        scanf("%f",&divisao2);
        printf("\n*************************************************************************\n");
        printf("O resultado da divisão é de: %.2f\n", divisao1 / divisao2);
        printf("\n*************************************************************************\n");
        break;

    case 5:
        printf("Digite a base: ");
        scanf("%f",&potenciacao1);
        printf("Digite o a potencia: ");
        scanf("%f",&potenciacao2);
        printf("\n*************************************************************************\n");
        printf("O valor da potenciação é de: %.2f\n", pow(potenciacao1,potenciacao2));//pow(num,potencia) ==> retorna num^potencia. tem que incluir a biblioteca math.
        printf("\n*************************************************************************\n");
        break;
    default:
        printf("****ATENÇÃO****\n");
        printf("****OPÇÃO INVALIDA****");
    }
    printf("Deseja fazer algum outro calculo?(1 para sim/0 para não)");
    scanf("%c",&ch);
    }
    while(ch == 's');
    printf("\nPara que eu saiba se voce gostou digite uma nota: ");
    scanf("%d",&controle);


    printf("\n\n\n");

    system ("pause");
    return 0;
}
