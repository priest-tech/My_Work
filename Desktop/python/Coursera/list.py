def get_word(sentence, n):
    if n >= 0:
        words = sentence.split()
        if n <= len(words):
            return words[n-1]
        return("")    
print(get_word("This is a lesson about lists", 4))        