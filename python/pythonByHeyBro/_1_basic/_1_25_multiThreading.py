# multithreading = used to perform multiple task concurrently (multi-tasking)
#                  good for input output bound task like reading files or fetching data from APIs\
#                  threading.Thread(target=my_function)
import threading
import time


def walk_dog(first_name, last_name):
    time.sleep(5)
    print(f"You finished walking {first_name} {last_name}")


def take_out_trash():
    time.sleep(2)
    print("You have took the trash out")


def get_mail():
    time.sleep(4)
    print("You get a new mail")


chore2 = threading.Thread(target=take_out_trash)
chore2.start()

chore3 = threading.Thread(target=get_mail)
chore3.start()

chore1 = threading.Thread(target=walk_dog, args=("Scooby", "Doo"))
chore1.start()

chore1.join()
chore2.join()
chore3.join()
print("All tasks finished")
