import math

i = 0
seno = 0
coseno = 0
tangente = 0
logaritmo = 0
raizCuad = 0
while i < 10:
    seno += math.sin(i)
    coseno += math.cos(i)
    tangente += math.tan(i)
    logaritmo += math.log(i + 1)
    raizCuad += math.sqrt(i)
    i += 1
