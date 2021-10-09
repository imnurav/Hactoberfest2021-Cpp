import random
n=random.randint(0,6)
while(1):
    a=int(input("Guess the number! "))
    if(a==n):
        print("Number was",n)
        print("Game Over!")
        break
    elif(a<n):
        print("Number is greater than this.")
    elif(a>n):
        print("Number is smaller than this.")
