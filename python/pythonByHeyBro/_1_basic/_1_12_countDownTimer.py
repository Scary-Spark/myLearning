import time

time.sleep(2)
print("Times up")

myTime = int(input("Enter the time in second: "))
for x in range(myTime, 0, -1):
    seconds = x % 60
    print(f"00:00:{seconds}")
    time.sleep(1)
