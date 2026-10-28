on run
    local Hours, Rate, Salary, DailyHours, MaxHours
    local DeductionPercent
    local Day, NetSalary, MaxDay

    set Hours to 0
    display dialog "Өдөр | Ажилласан цаг"
    display dialog "--------------------------"
    set MaxHours to -1
    set MaxDay to 0
    repeat with Day from 1 to 7
        display dialog Day as string & "-р өдрийн ажилласан цаг"
        display dialog "Enter a value for DailyHours" default answer "" buttons {"ok"} with title "Enter a value"
        set DailyHours to the text returned of the result
        if DailyHours is greater than MaxHours
            set MaxHours to DailyHours
            set MaxDay to Day
        end if
        display dialog Day as string & " | " & DailyHours
        set Hours to Hours + DailyHours
    end repeat
    display dialog "7 хоногт нийт ажилласан цаг: " & Hours
    display dialog "Хамгийн их ажилласан өдөр: " & MaxDay
    display dialog MaxHours
    display dialog "Цагийн хөлс"
    display dialog "Enter a value for Rate" default answer "" buttons {"ok"} with title "Enter a value"
    set Rate to the text returned of the result
    if Hours is greater than 40
        set Salary to 40 * Rate + Hours - 40 * Rate * 1.5
    else
        set Salary to Hours * Rate
    end if
    display dialog "Нийт цалин: " & Salary
    display dialog "Суутгалын хувь оруулна уу"
    display dialog "Enter a value for DeductionPercent" default answer "" buttons {"ok"} with title "Enter a value"
    set DeductionPercent to the text returned of the result
    set NetSalary to Salary - Salary * DeductionPercent / 100
    display dialog "Гар дээр ирэх цалин: " & NetSalary
end run
