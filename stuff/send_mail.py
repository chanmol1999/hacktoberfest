import smtplib 
from email.mime.text import MIMEText
from email.mime.multipart import MIMEMultipart
# import xlrd 


# loc = ("C:\\Users\\user\\av.xlsx") 
# wb = xlrd.open_workbook(loc) 
# sheet = wb.sheet_by_index(0) 

# recipients = []
# for i in range(sheet.nrows):
#     recipients.append(str(sheet.cell_value(i,2)))


  
s = smtplib.SMTP('mail.iitp.ac.in', 587) 
s.starttls() 
s.login("[EMAIL]", "[PASS]") 

body = "[MESSAGE_BODY]"
recipients = ["ARRAY_OF_RECIPIENTS"]

msg = MIMEMultipart()
msg["Subject"] = "[SUBJECT]"
msg["From"] = "[FROM]"
msg["To"] = ", ".join(recipients)
# msg["Cc"] = "serenity@example.com,inara@example.com"
msg.attach(MIMEText(body))


for i in range(0,2) :
    s.sendmail("[EMAIL]", msg["To"], msg.as_string()) 
s.quit() 