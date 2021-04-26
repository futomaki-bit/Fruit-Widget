
[Variables]



; #### Symbols -----------------------------------

; Find Symbols by going to http://www.cnbc.com then entering the stock/index name you want in the search box. When the page opens look in the top-left address window and make a note of EXACTLY what comes after https://www.cnbc.com/quotes/  If there is a Period "." after the backslash "/" you must include it. or it will not work. 

;eg. https://www.cnbc.com/quotes/.SPX   --> Symbol3=.SPX -----------------

;If there is no period "." do not add one or it will not work.

;eg https://www.cnbc.com/quotes/AAPL   --> Symbol4=AAPL -----------------

Nindex1=Dow Jones
Nfullname1=Dow Jones Industrial Average
Symbol1=.DJI

Nindex2=S&P 500
Nfullname2=S&P 500
Symbol2=.SPX

Nindex3=^NDX
Nfullname3=NASDAQ 100
Symbol3=.NDX


;---------------------------------------------------------
; #### UserAgent string #   ---
;If the skins don't work out of the box you need to check and assign a new UserAgent string. To find out the UserAgent string for your internet browser, you can connect to WhatIsMyBrowser ( https://www.whatismybrowser.com/detect/what-is-my-user-agent ) and then paste the string it returns below:  -------------------------------
 
MyUserAgent = Mozilla/5.0 (Windows NT 10.0; Win64; x64; rv:84.0) Gecko/20100101 Firefox/84.0

; Shhh... DRAGONS ARE SLEEPING BELOW
;---------------------------------------------------------
; UpdateQuotes determines how often CNBC.com will be checked for any changes in price.  The default value is 600 or once every ten minutes (600 / 60 = 10 ).  Please don't make it update any more frequently as that could cause your IP to be blocked.  

UpdateQuotes=600

