def chatbot():

    print("Chatbot: Hello! Type 'bye' to exit.")

    while True:

        user = input("You: ").lower()

        if user == "hello":
            print("Chatbot: Hi there!")

        elif user == "how are you":
            print("Chatbot: I am fine. How can I help you?")

        elif user == "your name":
            print("Chatbot: I am a simple chatbot.")

        elif user == "help":
            print("Chatbot: I can answer simple questions.")

        elif user == "course":
            print("Chatbot: We provide Python and AI courses.")

        elif user == "fees":
            print("Chatbot: Please contact the office for fee details.")

        elif user == "bye":
            print("Chatbot: Goodbye!")
            break

        else:
            print("Chatbot: Sorry, I don't understand.")

chatbot()