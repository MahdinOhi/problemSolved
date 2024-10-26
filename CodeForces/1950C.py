def convert_to_12_hour_format(time):
    hour, minute = map(int, time.split(':'))
    if hour < 12:
        period = "AM"
    else:
        period = "PM"

    if hour == 0:
        hour = 12
    elif hour > 12:
        hour -= 12

    hour_str = str(hour).zfill(2)
    minute_str = str(minute).zfill(2)

    return f"{hour_str}:{minute_str} {period}"


t = int(input())

for _ in range(t):
    time_24_hour = input()

    print(convert_to_12_hour_format(time_24_hour))
