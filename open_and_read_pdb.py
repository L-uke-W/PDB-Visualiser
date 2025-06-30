import numpy
import pickle

file = 'C:\\Users\\lward\\Downloads\\8s6k.cif'
with open(file, 'rb') as fp:
    protein_stucture = fp.read()

print(type(protein_stucture))
