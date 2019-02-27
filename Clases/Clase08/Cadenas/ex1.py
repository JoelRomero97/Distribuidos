import random


def generate_word():
    string = chr(random.randint(65, 90))
    string += chr(random.randint(65, 90))
    string += chr(random.randint(65, 90))
    return string + ' '


string = ''
for i in range(100):
    string += generate_word()

print(string)
print('La cadena \'IPN\' aparece ' + str(string.count('IPN')) + ' veces')
