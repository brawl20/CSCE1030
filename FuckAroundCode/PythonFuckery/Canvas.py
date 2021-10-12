import requests
import urllib.request
import json
from bs4 import BeautifulSoup
from requests.models import Response

student = {
    "USER.NAME": "e3104361",
    "CURR.PWD": "Monkeybut123",
}

token = {
"TOKENIDX": "7445921841",
"type": "M",
"constituency": "WBST",
"pid": "CORE-WBST",}

cookie = {
"Cookie": "7445921841=dG7AmNEp+slrQJkCH07B5JEYQvrzTFaXwnU3AdobA4tIUZtzwNqCDHfN69+8e56wDl0=; LASTTOKEN=7445921841"
}

fuckIt = {
"Accept": "text/html,application/xhtml+xml,application/xml;q=0.9,image/avif,image/webp,image/apng,*/*;q=0.8,application/signed-exchange;v=b3;q=0.9",
"Accept-Encoding": "gzip, deflate, br",
"Accept-Language": "en-US,en;q=0.9",
"Cache-Control": "max-age=0",
"Connection": "keep-alive",
"Cookie": "LASTTOKEN=7445921841; 7445921841=nPSmKLUQrN3sX2L4dILCzmHQFs0ycCXSYfbUFG78yGhOJMpAwAD%2FeymBc%2FMKe0eMIWU%3D",
'DNT': "1",
"Host": "econnect.dcccd.edu",
"Referer": "https://econnect.dcccd.edu/eConnect/eConnect?TOKENIDX=7445921841&type=M&constituency=WBST&pid=CORE-WBST",
"sec-ch-ua": '"Google Chrome";v="93", " Not;A Brand";v="99", "Chromium";v="93"',
'sec-ch-ua-mobile': '?0',
'sec-ch-ua-platform': '"Windows"',
'Sec-Fetch-Dest': 'document',
'Sec-Fetch-Mode': 'navigate',
'Sec-Fetch-Site': 'same-origin',
'Sec-Fetch-User': '?1',
'Upgrade-Insecure-Requests': '1',
'User-Agent': 'Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/93.0.4577.82 Safari/537.36',
}

response = requests.post('https://econnect.dcccd.edu/eConnect/eConnect?&TOKENIDX=7445921841&SS=1&APP=ST&CONSTITUENCY=WBST',student).text

maybe = requests.post("https://econnect.dcccd.edu/eConnect/eConnect?&TOKENIDX=7445921841&SS=1&APP=ST&CONSTITUENCY=WBST",cookies={"Cookie":"LASTTOKEN=7445921841; 7445921841=nPSmKLUQrN3sX2L4dILCzmHQFs0ycCXSYfbUFG78yGhOJMpAwAD%2FeymBc%2FMKe0eMIWU%3D"}).text

print(maybe)
#print(maybe)
