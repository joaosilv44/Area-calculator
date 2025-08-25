while True:
    print("\nEste é um programa para cálculo de áreas")
    print('1--Qaudrado')
    print('2--Retângulo')
    print('3--Triãngulo')
    print('4--Losango')
    print('5--Trapézio')
    print('6--Círculo')
    print('0-- Sair')

    option = int(input('Digite o tipo de área que você irá calcular: '))
    
    if option == 1 or option == 2:
        print("--Área do Quadrado/Retângulo--")
        largura = float(input('Digite a largura: '))
        comp = float(input('Digite o comprimento: '))
        result = largura*comp
        print('A área do quadrado/retângulo é ' , result)
        
    elif option == 3:
        print("--Área do Triângulo--")
        altura = float(input('Digite a altura: '))
        base = float(input('Digite a base: '))
        result = (base*altura) / 2
        print('A área do triângulo é ', result)
        
    elif option == 4:
        print("--Área do Losango--")
        Dmaior = float(input('Digite o tamanho da diagonal maior: '))
        Dmenor = float(input('Digite o tamanho da diagonal menor: '))
        result = (Dmaior*Dmenor) / 2
        print('A área do losango é ', result)
        
    elif option == 5:
        print("--Área do Trapézio--")
        baseMaior = float(input('Digite o tamanho da base maior: '))
        baseMenor = float(input('Digite o tamanho da base menor: '))
        altura = float(input('Digite a altura do trapézio: '))
        result = ((baseMaior + baseMenor)*altura) / 2
        print('A área do trapézio é ', result)
    
    elif option == 6:
        print("--Área do Círculo--")
        raio = float(input('Digite o tamanho do raio: '))
        result = 3.14*(raio**2)
        print(result)
        
    elif option == 0:
        print("Saindo do programa")
        break
    
    else :
        print("Opção inválida, tente novamente\n")