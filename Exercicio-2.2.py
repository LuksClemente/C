def ler():
    n1=int(raw_input("Digite um numero: "))
    n2=int(raw_input("Digite outro numero: "))
    return n1,n2
def impr(n1,n2):
    for i in range(n1+1,n2):
        print i,
    return
n1,n2=ler()
impr(n1,n2)