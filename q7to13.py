''' Question 7 : Write a function that accepts two strings
and returns the indices of all the occurrences of the second
string in the first string as a list.
If the second string is not present in the first string then it should return -1.'''

def find_occurrences(string1, string2):
    if string2 not in string1:
        return -1
    else:
        indices = []
        start = 0
        while start < len(string1):
            index = string1.find(string2, start)
            if index == -1:
                break
            indices.append(index)
            start = index + 1
        return indices

print(find_occurrences("hello world", "l"))
print(find_occurrences("hello world", "z"))
print(find_occurrences("hello world", "hello"))
print(find_occurrences("hello hello world", "hello"))

print()

'''Question 8 : WAP to create a list of the cubes of only the even
integers appearing in the input list (may have elements of other
types also) using the following:
a. 'for' loop 
b. list comprehension '''

# Using For Loop
def cube_even_numbers(lst):
    result = []
    for i in lst:
        if type(i) == int and i % 2 == 0:
            result.append(i**3)
    return result

input_list = [1, 2, 3, 4, '5', 6, 7.5, 8]
print(cube_even_numbers(input_list))

# Using List Comprehension
def cube_even_numbers(lst):
    return [i**3 for i in lst if type(i) == int and i % 2 == 0]

input_list = [1, 2, 3, 4, '5', 6, 7.5, 8]
print(cube_even_numbers(input_list))


print()

'''Question 9 : 9. WAP to read a file and 
a. Print the total number of characters, words and lines in the file. 
b. Calculate the frequency of each character in the file. Use a variable of dictionary 
type to maintain the count. 
c. Print the words in reverse order. 
d. Copy even lines of the file to a file named ‘File1’ and odd lines to another file 
named ‘File2 '''


def read_file(file):
    with open(file,"r") as f:
        content = f.read()
        # a. Print the total number of characters, words, and lines in the file
        num_chars = len(content)
        num_words = len(content.split())
        num_lines = content.count("\n")
        print("Total characters:", num_chars)
        print("Total words:", num_words)
        print("Total lines:", num_lines)
        
        # b. Calculate the frequency of each character in the file
        char_freq = {}
        for char in content:
            if char in char_freq:
                char_freq[char] += 1
            else:
                char_freq[char] = 1
        print("Character frequency:", char_freq)
        
        # c. Print the words in reverse order
        words = content.split()
        reversed_words = [word[::-1] for word in words]
        print("Reversed words:", reversed_words)
        
        # d. Copy even lines of the file to a file named 'File1' and odd lines to another file named 'File2'
        lines = content.split("\n")
        with open("File1", "w") as f1:
            for i, line in enumerate(lines):
                if i % 2 == 0:
                    f1.write(line + "\n")
        with open("File2", "w") as f2:
            for i, line in enumerate(lines):
                if i % 2 == 1:
                    f2.write(line + "\n")

read_file("file.txt")

print()


''' Ques 10 : WAP to define a class Point with coordinates x and y as attributes.
Create relevant methods and print the objects. Also define a method distance
to calculate the distance between any two point objects.'''

import math

class Point:
    def __init__(self, x, y):
        self.x = x
        self.y = y
    
    def __str__(self):
        return f"Point({self.x}, {self.y})"
    
    def distance(self, other):
        return math.sqrt((self.x - other.x)**2 + (self.y - other.y)**2)

p1 = Point(0, 0)
p2 = Point(3, 4)

print(p1)
print(p2)
print("Distance between p1 and p2:", p1.distance(p2))

print()

 Ques 11 : Write a function that prints a dictionary where the keys are numbers between 1 and 5 
and the values are cubes of the keys. 

def print_dict():
    d = {i: i**3 for i in range(1, 6)}
    for key, value in d.items():
        print(f"{key}: {value}")

print_dict()

print()

''' Ques 12 : Consider a tuple t1=(1, 2, 5, 7, 9, 2, 4, 6, 8, 10). WAP to perform following operations: 
a. Print half the values of the tuple in one line and the other half in the next line. 
b. Print another tuple whose values are even numbers in the given tuple. 
c. Concatenate a tuple t2=(11,13,15) with t1. 
d. Return maximum and minimum value from this tuple '''

t1 = (1, 2, 5, 7, 9, 2, 4, 6, 8, 10)

# a. Print half the values of the tuple in one line and the other half in the next line.
print(t1[:len(t1)//2])
print(t1[len(t1)//2:])

# b. Print another tuple whose values are even numbers in the given tuple.
even_numbers = tuple(filter(lambda x: x % 2 == 0, t1))
print(even_numbers)

# c. Concatenate a tuple t2=(11,13,15) with t1.
t2 = (11, 13, 15)
t3 = t1 + t2
print(t3)

# d. Return maximum and minimum value from this tuple
print("Max:", max(t3))
print("Min:", min(t3))


print()

''' Ques 13 : WAP to accept a name from a user. Raise and handle appropriate
exception(s) if the text entered by the user contains digits and/or special characters.'''

class NameError(Exception):
    pass

def get_name():
    name = input("Enter your name: ")
    if any(char.isdigit() or not char.isalnum() for char in name):
        raise NameError("Name cannot contain digits or special characters")
    return name

try:
    name = get_name()
    print("Hello, ", name)
except NameError as e:
    print(e)










