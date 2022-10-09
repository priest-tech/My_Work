def skip_elements(elements):
    element = []
    for i, e in enumerate(elements):
        if i % 2 == 0:
            element.append(e)
    return element
        
print(skip_elements(["a", "b","c","d","e","f","g"]))    