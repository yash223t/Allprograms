questions = {
    "Capital of India": "Delhi",
    "5 + 5": "10",
    "Python creator": "Guido"
}

score = 0

for question, answer in questions.items():
    user_answer = input(question + ": ")

    if user_answer == answer:
        print("Correct!")
        score += 1
    else:
        print("Wrong!")

print("Final Score:", score)
