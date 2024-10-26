def process_word(word):
    if len(word) == 1 or word[1:].isupper():
        return word.swapcase()
    else:
        return word

word = input().strip()

print(process_word(word))
