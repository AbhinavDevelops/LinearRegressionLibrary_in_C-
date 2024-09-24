
import csv
import random

x = []
y = []

for i in range(400):

    x.append(i)

    y.append(3*x[i] + 2 + random.uniform(-0.4, 0.4))


# write x and y to csv file


with open('data.csv', 'w', newline='') as file:

    writer = csv.writer(file)

    writer.writerow(["x", "y"])

    for i in range(400):

        writer.writerow([x[i], y[i]])
