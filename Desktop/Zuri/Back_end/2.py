class Person:
    apples = 0
    ideas = 0

johanna = Person()
johanna.apples = 1
johanna.ideas = 1

martin = Person()
martin.apples = 2
martin.ideas = 1

def exchange_apples(you, me):
  #"you" and "me" will exchange ALL our apples with one another
    temp = you.apples
    you.apples = me.apples
    me.apples = temp

    return you.apples, me.apples

def exchange_ideas(you, me):
    #"you" and "me" will share our ideas with one another
    temp = you.ideas
    you.ideas += me.ideas
    me.ideas += temp

    return you.ideas, me.ideas

exchange_apples(johanna, martin)

print("Johanna has {} ideas and Martin has {} ideas".format(johanna.ideas, martin.ideas))

exchange_ideas(johanna, martin)