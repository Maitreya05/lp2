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


# Simple Expert System for Medical Diagnosis

def expert_system():

    print("=== Medical Expert System ===")
    print("Answer with yes or no\n")

    fever = input("Do you have fever? ").lower()
    cough = input("Do you have cough? ").lower()
    headache = input("Do you have headache? ").lower()
    cold = input("Do you have cold? ").lower()

    print("\n--- Diagnosis Result ---")

    if fever == "yes" and cough == "yes":
        print("You may have Flu.")

    elif fever == "yes" and headache == "yes":
        print("You may have Viral Fever.")

    elif cold == "yes" and cough == "yes":
        print("You may have Common Cold.")

    elif headache == "yes":
        print("You may be suffering from Stress or Migraine.")

    else:
        print("Symptoms are unclear. Please consult a doctor.")

# Function Call
expert_system()