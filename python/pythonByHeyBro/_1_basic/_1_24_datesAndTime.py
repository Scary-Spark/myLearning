import datetime

date = datetime.date(2025, 10, 27)
today = datetime.date.today()
time = datetime.time(12, 30, 0)
now = datetime.datetime.now()

print(date)
print(today)
print(time)
print(now)

now = now.strftime("%H:%M:%S,   %m-%d-%Y")
print(now)

print()

target_date_time = datetime.datetime(2030, 10, 27, 12, 34, 53)
current_date_time = datetime.datetime.now()

if target_date_time < current_date_time:
    print("target date already passed")
else:
    print(f"You're {target_date_time - current_date_time} times behind")
