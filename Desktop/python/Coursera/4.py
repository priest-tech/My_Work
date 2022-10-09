def full_emails(people):
    result = []
    for email, name in people:
        result.append("{} <{}>".format(name, email))
    return result
print(full_emails([("kevinnehpets@gmail.com", "Stephen Nephets"), ("unamak86@gmail.com","Kevin Stephen")]))    