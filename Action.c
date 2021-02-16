Action()
{

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_url("xl_chrome_ext_config.json", 
		"URL=http://static-xl.a.88cdn.com/json/xl_chrome_ext_config.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=88", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("ACCOUNT_CHOOSER=AFx_qI5U7UwNu3TbUbs0rDb0p7Q64MDDLGefJVPKcGqt-szxZpK2qaDQSE_Zm_IEMYy-Ut_zJJCNkgqKYmyGXXr1n_nozzhj0LXePVcHszoeB8RclAEN4w23E7Z-CzHuaGvpfDRahrIH; DOMAIN=accounts.google.com");

	web_add_cookie("CONSENT=YES+NL.zh-CN+20180701-00-0; DOMAIN=accounts.google.com");

	web_add_cookie("ANID=OPT_OUT; DOMAIN=accounts.google.com");

	web_add_cookie("HSID=AuO3QzzX8adZBfyWx; DOMAIN=accounts.google.com");

	web_add_cookie("SSID=AAc2fMRgrh8SAO2Qg; DOMAIN=accounts.google.com");

	web_add_cookie("APISID=V7dIzmEpMwbBs97-/AJEJ3j4R2S8bIqn8Y; DOMAIN=accounts.google.com");

	web_add_cookie("SAPISID=qKLrsVmzQ0jgW9Tj/AdsabWJ0f9QjkRNkc; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PAPISID=qKLrsVmzQ0jgW9Tj/AdsabWJ0f9QjkRNkc; DOMAIN=accounts.google.com");

	web_add_cookie("LSID=doritos|o.myaccount.google.com|s.NL|s.youtube:4QeICH1IdSkOLCXqqjaF72B6OtI5IcK1AXSZWGEHjZ0ySOxEFGcnHf9UR7oPkHGPAS8dnA.; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-3PLSID=doritos|o.myaccount.google.com|s.NL|s.youtube:4QeICH1IdSkOLCXqqjaF72B6OtI5IcK1AXSZWGEHjZ0ySOxEw-qTz1uNb5HZCYFmhsFGnw.; DOMAIN=accounts.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIxJEB; DOMAIN=accounts.google.com");

	web_add_cookie("__Host-GAPS=1:iytBtsybVrrQ5u8yT3dXhDBy1QB5EdwuGG3EZ-ZdLp8XpT_shrR22jB1z4HJHxkcHVbHt-XThQZGfhicxredVw83wY_NAg:xkus3MxQJlcD38d4; DOMAIN=accounts.google.com");

	web_add_cookie("SID=6QeICC7LyUidQfVYfocYddxH3piMdKWOgNig5XnQ7k9pDA2r4l9zliUId51EDotbeaV8UA.; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSID=6QeICC7LyUidQfVYfocYddxH3piMdKWOgNig5XnQ7k9pDA2rE6-SPh9XXHS-EmX0ATMm9g.; DOMAIN=accounts.google.com");

	web_add_cookie("OGPC=19022591-1:; DOMAIN=accounts.google.com");

	web_add_cookie("NID=209=qc4F_w7wAjD8Mxo8rTj_FrYn18K8cYRRR7lUAbE32YZfij3XlM74ac-OFiesjBrR6KofZaI81qPUkJ6rm4gmfwtuH3r5ahX0CL4y4-FXaL4P7dih29UlAqpoZxSA9FCEdNl8F_vsDgxBembn7XAscpdkJQNRQ2hjFQQUgQRRLWN1XDVzZIDlCpnZNOW8sWQ3LnEPTePcWDRduReKQRA5UyHlaAVrA8xjQyo8RlpmzsOezs4; DOMAIN=accounts.google.com");

	web_add_cookie("1P_JAR=2021-02-16-14; DOMAIN=accounts.google.com");

	web_add_cookie("SIDCC=AJi4QfG_UGacjbYUd_SRxrgjHYJLgO7aaMMSsSpxmcTBWkP7As26kXvrNJwYPvvezlthdf4iIg; DOMAIN=accounts.google.com");

	web_add_cookie("__Secure-3PSIDCC=AJi4QfHwhCxz_yQeW1cyCBNohBz0d8TZX_BWVRJaima1A8dd_-SB72K-YilhXPfOOt_q3zOrhw; DOMAIN=accounts.google.com");

	web_add_header("Origin", 
		"https://www.google.com");

	web_custom_request("ListAccounts", 
		"URL=https://accounts.google.com/ListAccounts?gpsia=1&source=ChromiumBrowser&json=standard", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		"Body= ", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_custom_request("token", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//06OiK6IdEEXRYCgYIARAAGAYSNwF-L9Irh79xfzCqa9JLq9UQfGwjeJCWk59iJAZXbasqbBUHmZh2uXfbp6KT-1FsdLAZqrNEN2A", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_add_cookie("PREF=f4=4000000&tz=Asia.Shanghai; DOMAIN=www.youtube.com");

	web_url("www.youtube.com", 
		"URL=https://www.youtube.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/s/desktop/3748dff5/jsbin/desktop_polymer_inlined_html_polymer_flags.vflset/desktop_polymer_inlined_html_polymer_flags.js", ENDITEM, 
		"Url=/s/desktop/3748dff5/jsbin/web-animations-next-lite.min.vflset/web-animations-next-lite.min.js", ENDITEM, 
		"Url=/s/desktop/3748dff5/jsbin/custom-elements-es5-adapter.vflset/custom-elements-es5-adapter.js", ENDITEM, 
		"Url=/s/desktop/3748dff5/jsbin/webcomponents-sd.vflset/webcomponents-sd.js", ENDITEM, 
		"Url=/s/desktop/3748dff5/cssbin/www-main-desktop-home-page-skeleton.css", ENDITEM, 
		"Url=/s/desktop/3748dff5/cssbin/www-onepick.css", ENDITEM, 
		"Url=/s/desktop/3748dff5/cssbin/www-main-desktop-watch-page-skeleton.css", ENDITEM, 
		"Url=/s/desktop/3748dff5/jsbin/scheduler.vflset/scheduler.js", ENDITEM, 
		"Url=/s/desktop/3748dff5/jsbin/www-tampering.vflset/www-tampering.js", ENDITEM, 
		"Url=/s/desktop/3748dff5/jsbin/www-i18n-constants-zh_CN.vflset/www-i18n-constants.js", ENDITEM, 
		"Url=/s/desktop/3748dff5/jsbin/www-prepopulator.vflset/www-prepopulator.js", ENDITEM, 
		"Url=https://fonts.googleapis.com/css?family=Roboto:500,300,700,400", ENDITEM, 
		"Url=https://fonts.googleapis.com/css?family=YT%20Sans%3A300%2C500%2C700", ENDITEM, 
		"Url=https://fonts.googleapis.com/css?family=YouTube+Sans:400,500", ENDITEM, 
		"Url=/s/desktop/3748dff5/jsbin/spf.vflset/spf.js", ENDITEM, 
		"Url=/s/desktop/3748dff5/jsbin/network.vflset/network.js", ENDITEM, 
		"Url=https://fonts.googleapis.com/css?family=Roboto+Mono:400,700", ENDITEM, 
		"Url=https://fonts.googleapis.com/css?family=Roboto:400,300,300italic,400italic,500,500italic,700,700italic", ENDITEM, 
		"Url=/s/player/490079fb/www-player-webp.css", ENDITEM, 
		"Url=https://i.ytimg.com/vi/ZnZqB5Z75zI/hq720.jpg?sqp=-oaymwEcCNAFEJQDSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLAIObDDt5Gl3qW68sIV0wqbsXGfmw", ENDITEM, 
		"Url=/sw.js", ENDITEM, 
		"Url=https://i.ytimg.com/vi/5qap5aO4i9A/hq720_live.jpg?sqp=CJy-r4EG-oaymwEcCNAFEJQDSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLADo4KPJ5WGQe5b1h8AfCdpOlb2jg", ENDITEM, 
		"Url=https://yt3.ggpht.com/ytc/AAUvwnhsVM5M9_ORfyX7dMx85lSXLbnqu3c2lgOITMLOxVM=s68-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://i.ytimg.com/vi/De4jPjoHatA/hqdefault.jpg?sqp=-oaymwEcCOADEI4CSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLDvhfHD5x8Y9P3N2pS5ohZ_zvKAgA", ENDITEM, 
		"Url=https://yt3.ggpht.com/ytc/AAUvwnijtFY9wDnh8vqLYWVx7qMmvC7FGwrAMmzy0c66=s68-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://yt3.ggpht.com/ytc/AAUvwngxN7bqF1iAvn63o2kdsrQg4XO_TaFt33iyRuvY=s68-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://yt3.ggpht.com/ytc/AAUvwnht6c9eAFl7xdGc798TcXnHz0xZhwM9tmQ99AqO1g=s68-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://yt3.ggpht.com/ytc/AAUvwngCtwmoAFKUyOgwuJumD1nR43xblIkq100GM0cC=s88-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://yt3.ggpht.com/ytc/AAUvwnguVqXlqTkJh7VyNGp5tCgWPMf9npRMX981Y1BLxQ=s68-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://i.ytimg.com/vi/SmrpbgAfMu4/hq720.jpg?sqp=-oaymwEcCNAFEJQDSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLAxhr2DVfymGjWinXjhTQONllB5dg", ENDITEM, 
		"Url=https://i.ytimg.com/vi/Hp_Eg8NMfT0/hq720.jpg?sqp=-oaymwEcCNAFEJQDSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLDJF2vDTj33qw4FxoyZw7TcTvC8FQ", ENDITEM, 
		"Url=https://i.ytimg.com/vi/wO02uW15_WU/hq720.jpg?sqp=-oaymwEcCNAFEJQDSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLBtfJlh0wYTl7EKwXhHFQLVRzJMBg", ENDITEM, 
		"Url=https://i.ytimg.com/vi/FkbR2XfpzCE/hq720.jpg?sqp=-oaymwEcCNAFEJQDSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLC91gZtIpTE1H0Ocxor9po1actwnw", ENDITEM, 
		"Url=https://yt3.ggpht.com/tWy-vEn1Ngd36z0b49RVBF-bCD6frJPi1_5Wd-oMnCGCxbBO2O3QcnLxT8l6tePJP1hraPhIyw=s88-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://yt3.ggpht.com/rlJtucPu_Jh1XIW0Qt3Yb29bUIrEndZSia9lF4Rsi2ewqWhssQsj2RLoSfryDpxKAQX_dwkhQw=s88-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://yt3.ggpht.com/ytc/AAUvwnidVc3Wl5Oxke2Tj3oE0luw99gHyYUd_3Dl_SNsjA=s68-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://yt3.ggpht.com/ytc/AAUvwnhRJwangTvsQKigTf_cvE0WEHmK0QKsJs_fzk89XQ=s68-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://i.ytimg.com/vi/4GdO6geg4r4/hq720.jpg?sqp=-oaymwEcCNAFEJQDSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLBU1mFr6sfxzB8T5zaeDkE2R2KHAw", ENDITEM, 
		"Url=https://yt3.ggpht.com/PCcSjeKGAwAxqmHe-IKSGXixNeKThfMb-gFTeanoReMCgNshBHOQRKz1hznx1NIZdhS8mONUz8c=s88-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://yt3.ggpht.com/8D6JlsnvwDZFMdcbjqVji82kggP3aXXbO-yBD0RFrKlp4G1zNt9wcqcVTSPnAI8GuUAbDYQwsg=s88-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://yt3.ggpht.com/ytc/AAUvwnhTXA5gPQc5tQB2-2lMOHJIzRJ-mdl8C1LYkftskg=s68-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://yt3.ggpht.com/6lo97rUTO7xhIBXZqLiaW2kA_eMBIEmqc27EqlKLyE4nAY-yzcKBG0Hs0YdUka3gJ629HcwgyzQ=s88-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://i.ytimg.com/vi/_uwNDiU04zE/hq720.jpg?sqp=-oaymwEcCNAFEJQDSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLB3T0sFWT12y9MjDz1gUeJdZACpKA", ENDITEM, 
		"Url=https://i.ytimg.com/vi/PnJpJBl4X_k/hq720.jpg?sqp=-oaymwEcCNAFEJQDSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLAJqxfj4tOXuo-7I06kFlwf3Ycoiw", ENDITEM, 
		"Url=https://i.ytimg.com/vi/GMHSDIHOTrc/hq720.jpg?sqp=-oaymwEcCNAFEJQDSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLA4afMJdFNZxxIBVtbkk-KaVNP7Rg", ENDITEM, 
		"Url=https://i.ytimg.com/vi/tH2tKigOPBU/hq720.jpg?sqp=-oaymwEcCNAFEJQDSFXyq4qpAw4IARUAAIhCGAFwAcABBg==&rs=AOn4CLDYW1wEtkGBhnfxOTkPX1V1VzSesQ", ENDITEM, 
		"Url=https://yt3.ggpht.com/v4oKY-0KfXXg0m_cFdjVmCm8y0O_YlFUaR6Tg78g6FMg97nPUOEMvYGtITYShRkn2HRPVKyA=s88-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://yt3.ggpht.com/ytc/AAUvwnjkJpLgp2SRPKSsCqxt9juug2BvXNFW16DjHTyQBMc=s68-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://yt3.ggpht.com/ytc/AAUvwnhL2suWx4XHAshVXnSqPdXWHR_kQV_m1bkxDJw=s68-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://yt3.ggpht.com/ytc/AAUvwnhRtFzPwDXnfvtnQCAm1HZ1EQyHoOHjQ78AqzA6BQ=s68-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://yt3.ggpht.com/sPQf4J-WhZm2LBkjgaIFrOrvqLimuN8ExNWAEBaqbZ-_J9fsmSBCDOe-Y9OwEFrJKipvwqVrzg=s88-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://yt3.ggpht.com/ytc/AAUvwnjF2lmkwh5hSWpkpEckEunyx1KHTC9rdWvign77vg=s88-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://yt3.ggpht.com/zDs3PPg-GKNbe6wPeC6LQfqJZqh2mY2qmJyz_QQMoNGYAWt8Z9Mux2i6vgtFCVnHxDSTM9km=s88-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://www.google.com/pagead/lvz?evtid=AKB78cjhml6Vpeaww2D5TKB7IqdZdgK3u8Hc2YxrCoBoED9hUPlJ8nVH8vVOkLnAF5K7afdrMflxFIWAXiIXMDlsh0Y1nt4Ukw&req_ts=1613488197&pg=MainAppBootstrap%3AHome&az=1&sigh=AKFpyYUb9C7PzbbPni_bssf7PVaL1aCxbA", ENDITEM, 
		"Url=https://yt3.ggpht.com/yoBf6TKokNKJAk_RlStqFINV5IZCTGpaevbDKBInSBsZHHwIBROZPEpcphwyAGBc4qzGXJf1lJo=s88-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://static.doubleclick.net/instream/ad_status.js", ENDITEM, 
		"Url=https://www.gstatic.com/cv/js/sender/v1/cast_sender.js", ENDITEM, 
		"Url=https://yt3.ggpht.com/ytc/AAUvwnht6c9eAFl7xdGc798TcXnHz0xZhwM9tmQ99AqO1g=s88-c-k-c0x00ffffff-no-rj", ENDITEM, 
		"Url=https://www.gstatic.com/youtube/img/promos/growth/b4679ce8aeacf18fc02523d86e54112fbb119f787e1314f696de76e82440e22c_384x384.png", ENDITEM, 
		"Url=https://www.gstatic.com/feedback/js/help/prod/service/lazy.min.js", ENDITEM, 
		"Url=https://yt3.ggpht.com/qUIDL12Ak4OQkgOQAWHjrFOkfJi7RIk_PmXZS0m6PrDETqU4N6iwVNAeDzYe6rKaJGJNMHxN=w48-h48-c-k-nd", ENDITEM, 
		"Url=https://yt3.ggpht.com/ytc/AAUvwni4jP6IOxeyljl8I2tW4dFqe2CqpWTUAbGFPOymtzA=s176-c-k-c0x00ffffff-no-rj", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("issuetoken", 
		"URL=https://oauthaccountmanager.googleapis.com/v1/issuetoken", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		"Body=force=false&response_type=token&scope=https://www.googleapis.com/auth/cclog+https://www.googleapis.com/auth/client_channel+https://www.googleapis.com/auth/memento&enable_granular_permissions=false&client_id=192748556389-k5lj2ak6j74mo13ulslbkqkrd8d6b1bh.apps.googleusercontent.com&origin=lpcaedmchfhocbbapmcbpinfpgnhiddi&lib_ver=88.0.4324.150&release_channel=stable&device_id=961f88e2-84e1-42d0-acf6-1f49bae7a3b0&device_type=chrome", 
		LAST);

	web_custom_request("issuetoken_2", 
		"URL=https://oauthaccountmanager.googleapis.com/v1/issuetoken", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"Body=force=false&response_type=token&scope=https://www.googleapis.com/auth/calendar.readonly+https://www.googleapis.com/auth/hangouts+https://www.googleapis.com/auth/hangouts.readonly+https://www.googleapis.com/auth/meetings+https://www.googleapis.com/auth/userinfo.email&enable_granular_permissions=false&client_id=919648714761-55j965o0km033psv3i9qls5mo3qtdrb0.apps.googleusercontent.com&origin=pkedcjkdefgpdelpbcmbmeomcjbeemfm&lib_ver=88.0.4324.150&release_channel=stable&device_id="
		"961f88e2-84e1-42d0-acf6-1f49bae7a3b0&device_type=chrome", 
		EXTRARES, 
		"Url=https://ssl.gstatic.com/safebrowsing/csd/client_model_v5_variation_6.pb", "Referer=", ENDITEM, 
		LAST);

	web_add_cookie("CONSENT=YES+NL.zh-CN+20180701-00-0; DOMAIN=adservice.google.com");

	web_add_cookie("ANID=OPT_OUT; DOMAIN=adservice.google.com");

	web_add_cookie("HSID=AuO3QzzX8adZBfyWx; DOMAIN=adservice.google.com");

	web_add_cookie("SSID=AAc2fMRgrh8SAO2Qg; DOMAIN=adservice.google.com");

	web_add_cookie("APISID=V7dIzmEpMwbBs97-/AJEJ3j4R2S8bIqn8Y; DOMAIN=adservice.google.com");

	web_add_cookie("SAPISID=qKLrsVmzQ0jgW9Tj/AdsabWJ0f9QjkRNkc; DOMAIN=adservice.google.com");

	web_add_cookie("__Secure-3PAPISID=qKLrsVmzQ0jgW9Tj/AdsabWJ0f9QjkRNkc; DOMAIN=adservice.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIxJEB; DOMAIN=adservice.google.com");

	web_add_cookie("SID=6QeICC7LyUidQfVYfocYddxH3piMdKWOgNig5XnQ7k9pDA2r4l9zliUId51EDotbeaV8UA.; DOMAIN=adservice.google.com");

	web_add_cookie("__Secure-3PSID=6QeICC7LyUidQfVYfocYddxH3piMdKWOgNig5XnQ7k9pDA2rE6-SPh9XXHS-EmX0ATMm9g.; DOMAIN=adservice.google.com");

	web_add_cookie("OGPC=19022591-1:; DOMAIN=adservice.google.com");

	web_add_cookie("NID=209=qc4F_w7wAjD8Mxo8rTj_FrYn18K8cYRRR7lUAbE32YZfij3XlM74ac-OFiesjBrR6KofZaI81qPUkJ6rm4gmfwtuH3r5ahX0CL4y4-FXaL4P7dih29UlAqpoZxSA9FCEdNl8F_vsDgxBembn7XAscpdkJQNRQ2hjFQQUgQRRLWN1XDVzZIDlCpnZNOW8sWQ3LnEPTePcWDRduReKQRA5UyHlaAVrA8xjQyo8RlpmzsOezs4; DOMAIN=adservice.google.com");

	web_add_cookie("1P_JAR=2021-02-16-14; DOMAIN=adservice.google.com");

	web_url("do_ad_settings_allow_floc_poc", 
		"URL=https://adservice.google.com/settings/do_ad_settings_allow_floc_poc", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("CONSENT=YES+NL.zh-CN+20180701-00-0; DOMAIN=11.client-channel.google.com");

	web_add_cookie("ANID=OPT_OUT; DOMAIN=11.client-channel.google.com");

	web_add_cookie("HSID=AuO3QzzX8adZBfyWx; DOMAIN=11.client-channel.google.com");

	web_add_cookie("SSID=AAc2fMRgrh8SAO2Qg; DOMAIN=11.client-channel.google.com");

	web_add_cookie("APISID=V7dIzmEpMwbBs97-/AJEJ3j4R2S8bIqn8Y; DOMAIN=11.client-channel.google.com");

	web_add_cookie("SAPISID=qKLrsVmzQ0jgW9Tj/AdsabWJ0f9QjkRNkc; DOMAIN=11.client-channel.google.com");

	web_add_cookie("__Secure-3PAPISID=qKLrsVmzQ0jgW9Tj/AdsabWJ0f9QjkRNkc; DOMAIN=11.client-channel.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIxJEB; DOMAIN=11.client-channel.google.com");

	web_add_cookie("SID=6QeICC7LyUidQfVYfocYddxH3piMdKWOgNig5XnQ7k9pDA2r4l9zliUId51EDotbeaV8UA.; DOMAIN=11.client-channel.google.com");

	web_add_cookie("__Secure-3PSID=6QeICC7LyUidQfVYfocYddxH3piMdKWOgNig5XnQ7k9pDA2rE6-SPh9XXHS-EmX0ATMm9g.; DOMAIN=11.client-channel.google.com");

	web_add_cookie("OGPC=19022591-1:; DOMAIN=11.client-channel.google.com");

	web_add_cookie("NID=209=qc4F_w7wAjD8Mxo8rTj_FrYn18K8cYRRR7lUAbE32YZfij3XlM74ac-OFiesjBrR6KofZaI81qPUkJ6rm4gmfwtuH3r5ahX0CL4y4-FXaL4P7dih29UlAqpoZxSA9FCEdNl8F_vsDgxBembn7XAscpdkJQNRQ2hjFQQUgQRRLWN1XDVzZIDlCpnZNOW8sWQ3LnEPTePcWDRduReKQRA5UyHlaAVrA8xjQyo8RlpmzsOezs4; DOMAIN=11.client-channel.google.com");

	web_add_cookie("1P_JAR=2021-02-16-14; DOMAIN=11.client-channel.google.com");

	web_add_cookie("SIDCC=AJi4QfFZ5U9ZyPYIj0iJEF5iOL0OcNNvVr-9JklH2N2Z1azkoPq5CymDFPN9z9JgaMrShnaLPQ; DOMAIN=11.client-channel.google.com");

	web_add_cookie("__Secure-3PSIDCC=AJi4QfEACmj_ojzGRuZPmvozCt5JgshlSRhUVfKdpIBa5P7hk0SSw1KzvVzCMz5N5ctlUFT_ag; DOMAIN=11.client-channel.google.com");

	web_add_cookie("SIDCC=AJi4QfHl2rFat6fwQbk_QC6mXRe6AnxVjgjACdDycwySRdYnSrYyWg2nt8D4jaCOEM8ba6paFA; DOMAIN=11.client-channel.google.com");

	web_add_cookie("__Secure-3PSIDCC=AJi4QfHf_lC-3Z3kPbH8zTaouLsUn0u7YatCdeMg6klQ6cks19IJIHQ4uVtUXePUpBMv8QrkIA; DOMAIN=11.client-channel.google.com");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("Origin", 
		"chrome-extension://lpcaedmchfhocbbapmcbpinfpgnhiddi");

	web_add_header("X-Client-Data", 
		"CIi2yQEIpLbJAQjEtskBCKmdygEI+MfKAQijzcoBCMXPygEI3NXKAQionMsBCMWcywEI5JzLAQioncsB");

	web_add_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("changes", 
		"URL=https://content-notes-pa.googleapis.com/notes/v1/changes?key=AIzaSyBx4qIYtgGv7SYh3nV8weWhXKZjIcaYKek", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"requestHeader\":{\"requestId\":\"request.5tmiqmb1q88m.1613488204131\",\"clientVersion\":{\"major\":\"3\",\"minor\":\"3\",\"build\":\"0\",\"revision\":\"108\"},\"clientPlatform\":\"CRX_BA\",\"capabilities\":[{\"type\":\"TR\"},{\"type\":\"LB\"},{\"type\":\"AN\"},{\"type\":\"NC\"},{\"type\":\"MI\"},{\"type\":\"SH\"},{\"type\":\"SNB\"},{\"type\":\"DR\"}],\"clientSessionId\":\"s--1613488191157--330508497\",\"clientLocale\":\"en\"},\"clientTimestamp\":\"2021-02-16T15:10:04.131Z\",\""
		"targetVersion\":\"ADKa+gmuIAnxJ9QTA47hVUEWEzMs5eAQCFT11xsx5j8=\",\"nodes\":[]}", 
		EXTRARES, 
		"Url=https://11.client-channel.google.com/client-channel/channel/cbp?ctype=memento&VER=8&MODE=init&zx=l5ywrbqzxzf4&t=1", "Referer=", ENDITEM, 
		"Url=https://11.client-channel.google.com/client-channel/channel/cbp?ctype=memento&VER=8&TYPE=xmlhttp&zx=6lwkbgnexrb7&t=1", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("token_2", 
		"URL=https://www.googleapis.com/oauth2/v4/token", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		"Body=client_id=77185425430.apps.googleusercontent.com&client_secret=OTJgUOQcT7lO7GsGZq2G4IlT&grant_type=refresh_token&refresh_token=1//06OiK6IdEEXRYCgYIARAAGAYSNwF-L9Irh79xfzCqa9JLq9UQfGwjeJCWk59iJAZXbasqbBUHmZh2uXfbp6KT-1FsdLAZqrNEN2A&scope=https://www.googleapis.com/auth/chromesync", 
		LAST);

	web_add_auto_header("Origin", 
		"chrome-extension://lpcaedmchfhocbbapmcbpinfpgnhiddi");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_auto_header("X-Client-Data", 
		"CIi2yQEIpLbJAQjEtskBCKmdygEI+MfKAQijzcoBCMXPygEI3NXKAQionMsBCMWcywEI5JzLAQioncsB");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_submit_data("bind", 
		"Action=https://11.client-channel.google.com/client-channel/channel/bind?ctype=memento&VER=8&RID=90954&CVER=5&zx=mg0nyg8rh0zi&t=1", 
		"Method=POST", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=count", "Value=0", ENDITEM, 
		LAST);

	web_add_cookie("CONSENT=YES+NL.zh-CN+20180701-00-0; DOMAIN=play.google.com");

	web_add_cookie("ANID=OPT_OUT; DOMAIN=play.google.com");

	web_add_cookie("HSID=AuO3QzzX8adZBfyWx; DOMAIN=play.google.com");

	web_add_cookie("SSID=AAc2fMRgrh8SAO2Qg; DOMAIN=play.google.com");

	web_add_cookie("APISID=V7dIzmEpMwbBs97-/AJEJ3j4R2S8bIqn8Y; DOMAIN=play.google.com");

	web_add_cookie("SAPISID=qKLrsVmzQ0jgW9Tj/AdsabWJ0f9QjkRNkc; DOMAIN=play.google.com");

	web_add_cookie("__Secure-3PAPISID=qKLrsVmzQ0jgW9Tj/AdsabWJ0f9QjkRNkc; DOMAIN=play.google.com");

	web_add_cookie("SEARCH_SAMESITE=CgQIxJEB; DOMAIN=play.google.com");

	web_add_cookie("SID=6QeICC7LyUidQfVYfocYddxH3piMdKWOgNig5XnQ7k9pDA2r4l9zliUId51EDotbeaV8UA.; DOMAIN=play.google.com");

	web_add_cookie("__Secure-3PSID=6QeICC7LyUidQfVYfocYddxH3piMdKWOgNig5XnQ7k9pDA2rE6-SPh9XXHS-EmX0ATMm9g.; DOMAIN=play.google.com");

	web_add_cookie("OGPC=19022591-1:; DOMAIN=play.google.com");

	web_add_cookie("NID=209=qc4F_w7wAjD8Mxo8rTj_FrYn18K8cYRRR7lUAbE32YZfij3XlM74ac-OFiesjBrR6KofZaI81qPUkJ6rm4gmfwtuH3r5ahX0CL4y4-FXaL4P7dih29UlAqpoZxSA9FCEdNl8F_vsDgxBembn7XAscpdkJQNRQ2hjFQQUgQRRLWN1XDVzZIDlCpnZNOW8sWQ3LnEPTePcWDRduReKQRA5UyHlaAVrA8xjQyo8RlpmzsOezs4; DOMAIN=play.google.com");

	web_add_cookie("1P_JAR=2021-02-16-14; DOMAIN=play.google.com");

	web_add_cookie("SIDCC=AJi4QfHl2rFat6fwQbk_QC6mXRe6AnxVjgjACdDycwySRdYnSrYyWg2nt8D4jaCOEM8ba6paFA; DOMAIN=play.google.com");

	web_add_cookie("__Secure-3PSIDCC=AJi4QfHf_lC-3Z3kPbH8zTaouLsUn0u7YatCdeMg6klQ6cks19IJIHQ4uVtUXePUpBMv8QrkIA; DOMAIN=play.google.com");

	web_custom_request("log", 
		"URL=https://play.google.com/log?format=json&hasfast=true", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		"EncType=application/x-www-form-urlencoded;charset=UTF-8", 
		"Body=[[1,null,null,null,null,null,null,null,null,null,[null,null,null,null,null]],128,[[\"1613488191173\",null,[],null,null,null,null,\"[[[null,null,1,1613488191171000,null,null,null,[[1613488191171000],null,1],null,716,null,1,1]],[\\\"s--1613488191157--330508497\\\",1613488191171000,null,null,null,72],null,[6],[[null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,null,[0,4]],null,null,null,null,null,null,null,null,null,null,null,null,null,null,[null,null,null,null,null,null"
		",null,null,[null,[]]]]]\",null,null,null,null,null,null,-28800,null,null,null,null,[],1,null,null,null,null,null,[]]],\"1613488213592\",[],null,null,null,null,null,null,null,null,0]", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Client-Data");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_url("generate_204", 
		"URL=https://i.ytimg.com/generate_204", 
		"Resource=0", 
		"Referer=https://www.youtube.com/", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOmCnqEu92Fr1Mu4mxK.woff2", "Referer=https://fonts.googleapis.com/", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("ServiceLogin", 
		"URL=https://accounts.google.com/ServiceLogin?service=youtube&uilel=3&passive=true&continue=https%3A%2F%2Fwww.youtube.com%2Fsignin%3Faction_handle_signin%3Dtrue%26app%3Ddesktop%26hl%3Dzh-CN%26next%3D%252Fsignin_passive%26feature%3Dpassive&hl=zh-CN", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.youtube.com/", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://11.client-channel.google.com/client-channel/channel/bind?ctype=memento&VER=8&RID=rpc&SID=D7D41F52C151ABF1&CI=1&AID=1&gsessionid=O8dNzqC7I0TDGRMvaGsn1YsiPMXm6YKZAaEuKQOWrM0&TYPE=xmlhttp&zx=joo9feeejxpu&t=1", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_header("X-Client-Data", 
		"CIi2yQEIpLbJAQjEtskBCKmdygEI/MHKAQj4x8oBCKPNygEIxc/KAQjc1coBCLL+ygEIqJzLAQjFnMsBCNWcywEI5JzLAQioncsBGPq4ygE=");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_custom_request("command", 
		"URL=https://clients4.google.com/chrome-sync/command/?client=Google+Chrome&client_id=tdVhwdJ7GrwPz%2FBezwEHtw%3D%3D", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/vnd.google.octet-stream-compressible", 
		"Referer=", 
		"Snapshot=t15.inf", 
		"ContentEncoding=gzip", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"Body=\n30249604@qq.com4*�\b", 
		LAST);

	web_add_cookie("SIDCC=AJi4QfH8KPy7yKZkusyk-rVORrqSyDpNa0if4QzNWWG9OICEI5Nn8S4rRT2JBoNgv4LKlYBZZA; DOMAIN=11.client-channel.google.com");

	web_add_cookie("__Secure-3PSIDCC=AJi4QfF6miZouX4I4_rhMv6PZXoycyaaYvDnq4S6llzc1ZD43zAh0c9NP6yI_5zHOHZsSQbonA; DOMAIN=11.client-channel.google.com");

	web_add_header("Origin", 
		"chrome-extension://lpcaedmchfhocbbapmcbpinfpgnhiddi");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Client-Data", 
		"CIi2yQEIpLbJAQjEtskBCKmdygEI+MfKAQijzcoBCMXPygEI3NXKAQionMsBCMWcywEI5JzLAQioncsB");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_submit_data("bind_2", 
		"Action=https://11.client-channel.google.com/client-channel/channel/bind?ctype=memento&VER=8&SID=D7D41F52C151ABF1&RID=90955&AID=2&gsessionid=O8dNzqC7I0TDGRMvaGsn1YsiPMXm6YKZAaEuKQOWrM0&zx=tmyfvkjpn7mf&t=1", 
		"Method=POST", 
		"RecContentType=text/plain", 
		"Referer=", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=count", "Value=1", ENDITEM, 
		"Name=ofs", "Value=0", ENDITEM, 
		"Name=req0_p", "Value={\"1\":{\"1\":{\"1\":{\"1\":3,\"2\":2}},\"2\":{\"1\":{\"1\":3,\"2\":2},\"2\":\"10.0\",\"3\":\"JS\",\"4\":\"lcsclient\"},\"3\":1613488231069,\"4\":1613488217089,\"5\":\"c1\"},\"3\":{\"1\":{\"1\":\"tango_web\"}}}", ENDITEM, 
		EXTRARES, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmEU9fBBc4.woff2", "Referer=https://fonts.googleapis.com/", ENDITEM, 
		"Url=bind?ctype=memento&VER=8&RID=rpc&SID=D7D41F52C151ABF1&CI=1&AID=2&gsessionid=O8dNzqC7I0TDGRMvaGsn1YsiPMXm6YKZAaEuKQOWrM0&TYPE=xmlhttp&zx=532zfagppp5b&t=1", "Referer=", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"same-origin");

	web_add_auto_header("Origin", 
		"https://www.youtube.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("X-Goog-Visitor-Id", 
		"CgtENFMzX0Z1QnE1ayjEwK-BBg%3D%3D");

	web_add_header("X-Youtube-Client-Name", 
		"1");

	web_add_header("X-Youtube-Client-Version", 
		"2.20210210.08.00");

	web_custom_request("guide", 
		"URL=https://www.youtube.com/youtubei/v1/guide?key=AIzaSyAO_FJ2SlqU8Q4STEHLGCilw_Y9_11qcW8", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.youtube.com/", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context\":{\"client\":{\"hl\":\"zh-CN\",\"gl\":\"US\",\"remoteHost\":\"144.34.165.195\",\"deviceMake\":\"\",\"deviceModel\":\"\",\"visitorData\":\"CgtENFMzX0Z1QnE1ayjEwK-BBg%3D%3D\",\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.150 Safari/537.36,gzip(gfe)\",\"clientName\":\"WEB\",\"clientVersion\":\"2.20210210.08.00\",\"osName\":\"Windows\",\"osVersion\":\"10.0\",\"originalUrl\":\"https://www.youtube.com/\",\"platform\":\""
		"DESKTOP\",\"gfeFrontlineInfo\":\"vip=172.217.5.206,server_port=443,client_port=59748,tcp_connection_request_count=0,header_order=HNKUAEL,gfe_version=2.708.2,ssl,ssl_info=TLSv1.3:RNA:T,tlsext=S,sni=www.youtube.com,hex_encoded_client_hello=130213031301c02bc02fc02cc030c013c014009c009d002f003500ff-00-0000000b000a002300160017000d002b002d00330015,c=1302,ja3=e9c665c4c41f445fa086d34bfe8fb8d8,rtt_source=tcp,rtt=0,srtt=0,client_protocol=HTTP/1.1,client_transport=tcp,gfe=aclaxg17.prod.google.com,pzf=Linux "
		"2.2.x-3.x [4:58+6:0:1460:mss*44/7:mss/sok/ts/nop/ws:df/id+:0] [generic tos:0x20],vip_region=default,asn=25820,cc=US,eid=Q-ArYIm-JdH58AfG-qywCA,scheme=https\",\"clientFormFactor\":\"UNKNOWN_FORM_FACTOR\",\"browserName\":\"Chrome\",\"browserVersion\":\"88.0.4324.150\",\"screenWidthPoints\":1536,\"screenHeightPoints\":722,\"screenPixelDensity\":1,\"screenDensityFloat\":1.25,\"utcOffsetMinutes\":480,\"userInterfaceTheme\":\"USER_INTERFACE_THEME_DARK\",\"connectionType\":\"CONN_CELLULAR_3G\",\""
		"mainAppWebInfo\":{\"graftUrl\":\"https://www.youtube.com/\"},\"timeZone\":\"Asia/Shanghai\"},\"user\":{\"lockedSafetyMode\":false},\"request\":{\"useSsl\":true,\"internalExperimentFlags\":[],\"consistencyTokenJars\":[]},\"clickTracking\":{\"clickTrackingParams\":\"IhMIjPK89tfu7gIVFajECh0gHgpX\"},\"adSignalsInfo\":{\"params\":[{\"key\":\"dt\",\"value\":\"1613488224751\"},{\"key\":\"flash\",\"value\":\"0\"},{\"key\":\"frm\",\"value\":\"0\"},{\"key\":\"u_tz\",\"value\":\"480\"},{\"key\":\"u_his\",\""
		"value\":\"1\"},{\"key\":\"u_java\",\"value\":\"false\"},{\"key\":\"u_h\",\"value\":\"864\"},{\"key\":\"u_w\",\"value\":\"1536\"},{\"key\":\"u_ah\",\"value\":\"824\"},{\"key\":\"u_aw\",\"value\":\"1536\"},{\"key\":\"u_cd\",\"value\":\"24\"},{\"key\":\"u_nplug\",\"value\":\"3\"},{\"key\":\"u_nmime\",\"value\":\"4\"},{\"key\":\"bc\",\"value\":\"31\"},{\"key\":\"bih\",\"value\":\"722\"},{\"key\":\"biw\",\"value\":\"1519\"},{\"key\":\"brdim\",\"value\":\"0,0,0,0,1536,0,1536,824,1536,722\"},{\"key\":\""
		"vis\",\"value\":\"1\"},{\"key\":\"wgl\",\"value\":\"true\"},{\"key\":\"ca_type\",\"value\":\"image\"}],\"consentBumpParams\":{\"consentHostnameOverride\":\"https://www.youtube.com\",\"urlOverride\":\"\"}},\"clientScreenNonce\":\"UNDEFINED_CSN\"},\"fetchLiveState\":true}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-YouTube-Ad-Signals", 
		"dt=1613488224751&flash=0&frm&u_tz=480&u_his=1&u_java&u_h=864&u_w=1536&u_ah=824&u_aw=1536&u_cd=24&u_nplug=3&u_nmime=4&bc=31&bih=722&biw=1519&brdim=0%2C0%2C0%2C0%2C1536%2C0%2C1536%2C824%2C1536%2C722&vis=1&wgl=true&ca_type=image");

	web_add_header("X-YouTube-Client-Name", 
		"1");

	web_add_header("X-YouTube-Client-Version", 
		"2.20210210.08.00");

	web_add_header("X-YouTube-Device", 
		"cbr=Chrome&cbrver=88.0.4324.150&ceng=WebKit&cengver=537.36&cos=Windows&cosver=10.0&cplatform=DESKTOP");

	web_add_header("X-YouTube-Page-CL", 
		"356775446");

	web_add_header("X-YouTube-Page-Label", 
		"youtube.desktop.web_20210210_08_RC00");

	web_add_header("X-YouTube-Time-Zone", 
		"Asia/Shanghai");

	web_add_header("X-YouTube-Utc-Offset", 
		"480");

	web_custom_request("log_event", 
		"URL=https://www.youtube.com/youtubei/v1/log_event?alt=json&key=AIzaSyAO_FJ2SlqU8Q4STEHLGCilw_Y9_11qcW8", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.youtube.com/", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context\":{\"client\":{\"hl\":\"zh-CN\",\"gl\":\"US\",\"clientName\":1,\"clientVersion\":\"2.20210210.08.00\",\"configInfo\":{\"appInstallData\":\"CMTAr4EGEJH4/BI=\"},\"screenDensityFloat\":\"1.25\",\"browserName\":\"Chrome\",\"browserVersion\":\"88.0.4324.150\",\"osName\":\"Windows\",\"osVersion\":\"10.0\",\"platform\":\"DESKTOP\"}},\"events\":[{\"eventTimeMs\":1613488224790,\"latencyActionTicked\":{\"tickName\":\"cr_s\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\""
		"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488231111,\"latencyActionInfo\":{\"loadType\":\"cold\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488231113,\"foregroundHeartbeat\":{\"firstActivityMs\":\"1\",\"clientDocumentNonce\":\"pKIdPD4wueW6JXfp\",\"index\":\"0\",\"lastEventDeltaMs\":\"-1\",\"trigger\":\"FOREGROUND_HEARTBEAT_TRIGGER_ON_FOREGROUND\"},\"context\":{\"lastActivityMs\":\"1\"}},{\"eventTimeMs\":1613488231115,\""
		"appSettingsCaptured\":{\"currentValue\":{\"isWide\":false,\"system_theme\":\"USER_INTERFACE_THEME_DARK\"}},\"context\":{\"lastActivityMs\":\"2\"}},{\"eventTimeMs\":1613488231260,\"latencyActionTicked\":{\"tickName\":\"cr_c\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"148\"}},{\"eventTimeMs\":1613488231276,\"latencyActionTicked\":{\"tickName\":\"rsef_dpj\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"164\"}},{\"eventTimeMs\""
		":1613488231278,\"latencyActionTicked\":{\"tickName\":\"rsef_dpj\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"165\"}},{\"eventTimeMs\":1613488231278,\"latencyActionTicked\":{\"tickName\":\"rsae_dpj\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"165\"}},{\"eventTimeMs\":1613488231278,\"latencyActionTicked\":{\"tickName\":\"js_r\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"166\"}},{\"eventTimeMs\""
		":1613488231278,\"latencyActionTicked\":{\"tickName\":\"ac\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"166\"}},{\"eventTimeMs\":1613488231278,\"latencyActionTicked\":{\"tickName\":\"apr\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"166\"}},{\"eventTimeMs\":1613488231278,\"latencyActionTicked\":{\"tickName\":\"chps\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"166\"}},{\"eventTimeMs\""
		":1613488231288,\"latencyActionTicked\":{\"tickName\":\"nd\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"175\"}},{\"eventTimeMs\":1613488231315,\"latencyActionTicked\":{\"tickName\":\"pda\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"203\"}},{\"eventTimeMs\":1613488231317,\"latencyActionTicked\":{\"tickName\":\"pdc\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"204\"}},{\"eventTimeMs\":1613488231327"
		",\"latencyActionTicked\":{\"tickName\":\"pdr\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"214\"}},{\"eventTimeMs\":1613488231327,\"latencyActionTicked\":{\"tickName\":\"chls\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"214\"}},{\"eventTimeMs\":1613488231328,\"latencyActionTicked\":{\"tickName\":\"lps\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"215\"}},{\"eventTimeMs\":1613488231328,\""
		"latencyActionInfo\":{\"appInstallDataAgeMs\":40485,\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"215\"}},{\"eventTimeMs\":1613488231328,\"latencyActionInfo\":{\"isNavigation\":true,\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"216\"}},{\"eventTimeMs\":1613488231328,\"latencyActionInfo\":{\"clientScreenNonce\":\"UNDEFINED_CSN\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"216\"}},{\"eventTimeMs\""
		":1613488231329,\"latencyActionInfo\":{\"httpProtocol\":\"HTTP/1.1\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"216\"}},{\"eventTimeMs\":1613488231329,\"latencyActionInfo\":{\"transportProtocol\":\"tcp\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"216\"}},{\"eventTimeMs\":1613488231329,\"latencyActionInfo\":{\"isVisible\":true,\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"216\"}},{\"eventTimeMs\""
		":1613488231329,\"latencyActionInfo\":{\"loadType\":\"cold\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"216\"}},{\"eventTimeMs\":1613488196864,\"latencyActionTicked\":{\"tickName\":\"srt\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488190843,\"latencyActionBaselined\":{\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488215818,\""
		"latencyActionTicked\":{\"tickName\":\"fpt\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488231329,\"latencyActionSpan\":{\"spanName\":\"startTimeDelta\",\"spanLengthUsec\":\"0\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"217\"}},{\"eventTimeMs\":1613488231329,\"latencyActionSpan\":{\"spanName\":\"responseEndDelta\",\"spanLengthUsec\":\"-1000\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\""
		"lastActivityMs\":\"217\"}},{\"eventTimeMs\":1613488195325,\"latencyActionTicked\":{\"tickName\":\"nreqs\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488196864,\"latencyActionTicked\":{\"tickName\":\"nress\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488204104,\"latencyActionTicked\":{\"tickName\":\"nrese\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\""
		"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488191701,\"latencyActionTicked\":{\"tickName\":\"ntcps\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488195325,\"latencyActionTicked\":{\"tickName\":\"ntcpe\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488191733,\"latencyActionTicked\":{\"tickName\":\"nstcps\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\""
		"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488195325,\"latencyActionTicked\":{\"tickName\":\"ntcpe\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488231331,\"latencyActionInfo\":{\"actionType\":\"LATENCY_ACTION_HOME\",\"previousAction\":\"LATENCY_ACTION_UNKNOWN\",\"clientScreenNonce\":\"UNDEFINED_CSN\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"218\"}},{\"eventTimeMs\":1613488210525,\""
		"latencyActionTicked\":{\"tickName\":\"vc\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":null,\"latencyActionTicked\":{\"tickName\":\"_vc\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488213443,\"latencyActionTicked\":{\"tickName\":\"lpcs\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488213446,\"latencyActionTicked\":{\""
		"tickName\":\"lpcf\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488215767,\"latencyActionTicked\":{\"tickName\":\"csl\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488215770,\"latencyActionTicked\":{\"tickName\":\"bs\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488215771,\"latencyActionTicked\":{\"tickName\":\"ai"
		"\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488215795,\"latencyActionTicked\":{\"tickName\":\"gcc\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488215795,\"latencyActionTicked\":{\"tickName\":\"nc_pj\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488215795,\"latencyActionTicked\":{\"tickName\":\"rsbe_dpj\",\""
		"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488215795,\"latencyActionTicked\":{\"tickName\":\"js_ld\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488224686,\"latencyActionTicked\":{\"tickName\":\"rses_dpj\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488231331,\"latencyActionInfo\":{\"clientActionNonce\":\""
		"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"219\"}},{\"eventTimeMs\":1613488231364,\"latencyActionTicked\":{\"tickName\":\"hgcr\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"252\"}},{\"eventTimeMs\":1613488231365,\"latencyActionTicked\":{\"tickName\":\"pdl\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"253\"}},{\"eventTimeMs\":1613488231365,\"latencyActionInfo\":{\"requestIds\":[{\"id\":\"0xcd9e2c42d9f05853\",\"endpoint\""
		":\"GetHome\"}],\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"253\"}},{\"eventTimeMs\":1613488231366,\"screenCreated\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"pageVe\":{\"veType\":3854}},\"context\":{\"lastActivityMs\":\"253\"}},{\"eventTimeMs\":1613488231366,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CMgBEJmNBRgAIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":0,\""
		"veRowCoordinate\":0}}},\"context\":{\"lastActivityMs\":\"254\"}},{\"eventTimeMs\":1613488231366,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CH8QmY0FGAMiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":1,\"veRowCoordinate\":0}}},\"context\":{\"lastActivityMs\":\"254\"}},{\"eventTimeMs\":1613488231366,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\""
		"CHoQmY0FGAQiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":2,\"veRowCoordinate\":0}}},\"context\":{\"lastActivityMs\":\"254\"}},{\"eventTimeMs\":1613488231366,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CHUQmY0FGAUiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":3,\"veRowCoordinate\":0}}},\"context\":{\"lastActivityMs\":\"254\"}},{\"eventTimeMs\":1613488231366,\""
		"latencyActionInfo\":{\"clientScreenNonce\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"254\"}},{\"eventTimeMs\":1613488231366,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"veType\":83615,\"veCounter\":6}]},\"context\":{\"lastActivityMs\":\"254\"}},{\"eventTimeMs\":1613488231366,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\""
		"veType\":3854},\"childVes\":[{\"trackingParams\":\"CAAQhGciEwi-6L721-7uAhVNhcQKHbwYBA0=\"}]},\"context\":{\"lastActivityMs\":\"254\"}},{\"eventTimeMs\":1613488231367,\"latencyActionTicked\":{\"tickName\":\"nd\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"254\"}},{\"eventTimeMs\":1613488231370,\"latencyActionTicked\":{\"tickName\":\"pda\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"257\"}},{\"eventTimeMs\":1613488231385,\""
		"latencyActionTicked\":{\"tickName\":\"bcp\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"273\"}},{\"eventTimeMs\":1613488231387,\"latencyActionTicked\":{\"tickName\":\"vc\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"274\"}},{\"eventTimeMs\":1613488231387,\"foregroundHeartbeat\":{\"firstActivityMs\":\"-1\",\"clientDocumentNonce\":\"pKIdPD4wueW6JXfp\",\"index\":\"1\",\"lastEventDeltaMs\":\"274\",\"trigger\":\""
		"FOREGROUND_HEARTBEAT_TRIGGER_ON_BACKGROUND\"},\"context\":{\"lastActivityMs\":\"275\"}},{\"eventTimeMs\":1613488231388,\"latencyActionTicked\":{\"tickName\":\"vc\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"275\"}},{\"eventTimeMs\":1613488231388,\"foregroundHeartbeat\":{\"firstActivityMs\":\"-1\",\"clientDocumentNonce\":\"pKIdPD4wueW6JXfp\",\"index\":\"2\",\"lastEventDeltaMs\":\"-1\",\"trigger\":\"FOREGROUND_HEARTBEAT_TRIGGER_ON_FOREGROUND\"},\"context\":{\""
		"lastActivityMs\":\"275\"}},{\"eventTimeMs\":1613488231391,\"latencyActionTicked\":{\"tickName\":\"gcc\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"279\"}},{\"eventTimeMs\":1613488231391,\"latencyActionInfo\":{\"serverTimeMs\":415,\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"279\"}},{\"eventTimeMs\":1613488231401,\"latencyActionTicked\":{\"tickName\":\"afl\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs"
		"\":\"289\"}},{\"eventTimeMs\":1613488231401,\"latencyActionTicked\":{\"tickName\":\"adl\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"289\"}},{\"eventTimeMs\":1613488231404,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CAAQhGciEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"291\"}},{\"eventTimeMs\":1613488231404,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\""
		":{\"trackingParams\":\"CBoQ8eIEIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"291\"}},{\"eventTimeMs\":1613488231404,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CMgBEJmNBRgAIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"291\"}},{\"eventTimeMs\":1613488231404,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\""
		"CMkBENwwIhMIvui-9tfu7gIVTYXECh28GAQNQNCX4p3avKrT5gE=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"292\"}},{\"eventTimeMs\":1613488231405,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CH8QmY0FGAMiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"293\"}},{\"eventTimeMs\":1613488231405,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\""
		"CIABENwwIhMIvui-9tfu7gIVTYXECh28GAQNQL7Fg72g3dOz4AE=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"293\"}},{\"eventTimeMs\":1613488231406,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CHoQmY0FGAQiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"293\"}},{\"eventTimeMs\":1613488231406,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\""
		"CHsQ3DAiEwi-6L721-7uAhVNhcQKHbwYBA1A0NWd0OPniPcN\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"294\"}},{\"eventTimeMs\":1613488231407,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CHUQmY0FGAUiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"294\"}},{\"eventTimeMs\":1613488231407,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\""
		"CHYQ3DAiEwi-6L721-7uAhVNhcQKHbwYBA1Ass7vs_nAmrtm\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"294\"}},{\"eventTimeMs\":1613488231410,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CBcQ7VAiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"298\"}},{\"eventTimeMs\":1613488231445,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\""
		"CIoBEK_jBCITCL7ovvbX7u4CFU2FxAodvBgEDQ==\"},\"clientData\":{\"gridData\":{\"veRowCoordinate\":2}}},\"context\":{\"lastActivityMs\":\"333\"}},{\"eventTimeMs\":1613488231550,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CBoQ8eIEIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"clientData\":{\"gridData\":{\"gridColumnCount\":4}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231550,\"visualElementStateChanged\":{\"csn\":\""
		"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CMgBEJmNBRgAIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":0,\"veRowCoordinate\":0}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231550,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CH8QmY0FGAMiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":1,\"veRowCoordinate\":0}}},\"context\":{\""
		"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231550,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CHoQmY0FGAQiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":2,\"veRowCoordinate\":0}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231550,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CHUQmY0FGAUiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},"
		"\"clientData\":{\"gridData\":{\"veColumnCoordinate\":3,\"veRowCoordinate\":0}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231550,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CHAQmY0FGAYiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":0,\"veRowCoordinate\":1}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231550,\"visualElementStateChanged\":{\"csn\":\""
		"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CGsQmY0FGAciEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":1,\"veRowCoordinate\":1}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231550,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CGYQmY0FGAgiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":2,\"veRowCoordinate\":1}}},\"context\":{\""
		"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231550,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CGEQmY0FGAkiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":3,\"veRowCoordinate\":1}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231550,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CFwQmY0FGAoiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},"
		"\"clientData\":{\"gridData\":{\"veColumnCoordinate\":0,\"veRowCoordinate\":3}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231550,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CFcQmY0FGAsiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":1,\"veRowCoordinate\":3}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231550,\"visualElementStateChanged\":{\"csn\":\""
		"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CFIQmY0FGAwiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":2,\"veRowCoordinate\":3}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CE0QmY0FGA0iEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":3,\"veRowCoordinate\":3}}},\"context\":{\""
		"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CEgQmY0FGA4iEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":0,\"veRowCoordinate\":4}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CEMQmY0FGA8iEwi-6L721-7uAhVNhcQKHbwYBA0=\"},"
		"\"clientData\":{\"gridData\":{\"veColumnCoordinate\":1,\"veRowCoordinate\":4}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CD4QmY0FGBAiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":2,\"veRowCoordinate\":4}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\""
		"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CDkQmY0FGBEiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":3,\"veRowCoordinate\":4}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CDQQmY0FGBIiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":0,\"veRowCoordinate\":5}}},\"context\":{\""
		"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CC8QmY0FGBMiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":1,\"veRowCoordinate\":5}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CCoQmY0FGBQiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},"
		"\"clientData\":{\"gridData\":{\"veColumnCoordinate\":2,\"veRowCoordinate\":5}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CCUQmY0FGBUiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":3,\"veRowCoordinate\":5}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\""
		"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CMMBEJmNBRgAIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":0,\"veRowCoordinate\":2}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CL4BEJmNBRgBIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":1,\"veRowCoordinate\":2}}},\"context\":{\""
		"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CLkBEJmNBRgCIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":2,\"veRowCoordinate\":2}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CLQBEJmNBRgDIhMIvui-9tfu7gIVTYXECh28GAQN\"},"
		"\"clientData\":{\"gridData\":{\"veColumnCoordinate\":3,\"veRowCoordinate\":2}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CK8BEJmNBRgEIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":4,\"veRowCoordinate\":2}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\""
		"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CKoBEJmNBRgFIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":5,\"veRowCoordinate\":2}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CKUBEJmNBRgGIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":6,\"veRowCoordinate\":2}}},\"context\":{\""
		"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CKABEJmNBRgHIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":7,\"veRowCoordinate\":2}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CJsBEJmNBRgIIhMIvui-9tfu7gIVTYXECh28GAQN\"},"
		"\"clientData\":{\"gridData\":{\"veColumnCoordinate\":8,\"veRowCoordinate\":2}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CJYBEJmNBRgJIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":9,\"veRowCoordinate\":2}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\""
		"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CJEBEJmNBRgKIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":10,\"veRowCoordinate\":2}}},\"context\":{\"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231551,\"visualElementStateChanged\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CIwBEJmNBRgLIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"clientData\":{\"gridData\":{\"veColumnCoordinate\":11,\"veRowCoordinate\":2}}},\"context\":{\""
		"lastActivityMs\":\"438\"}},{\"eventTimeMs\":1613488231632,\"latencyActionTicked\":{\"tickName\":\"cpt\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"519\"}},{\"eventTimeMs\":1613488231632,\"foregroundHeartbeatScreenAssociated\":{\"clientDocumentNonce\":\"pKIdPD4wueW6JXfp\",\"clientScreenNonce\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\"},\"context\":{\"lastActivityMs\":\"519\"}},{\"eventTimeMs\":1613488231661,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\","
		"\"ve\":{\"trackingParams\":\"CAEQq6wBIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"548\"}},{\"eventTimeMs\":1613488231661,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CBgQsV4iEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"548\"}},{\"eventTimeMs\":1613488231661,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\""
		"CBcQ7VAiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"548\"}},{\"eventTimeMs\":1613488231661,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CAIQ8FsiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"549\"}},{\"eventTimeMs\":1613488231661,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CA0Q_qsBGAAiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\""
		"eventType\":1},\"context\":{\"lastActivityMs\":\"549\"}},{\"eventTimeMs\":1613488231661,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CAsQ_qsBGAEiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"549\"}},{\"eventTimeMs\":1613488231661,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CAoQ1IAEGAIiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\""
		":\"549\"}},{\"eventTimeMs\":1613488231662,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CHAQmY0FGAYiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"549\"}},{\"eventTimeMs\":1613488231662,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CHEQ3DAiEwi-6L721-7uAhVNhcQKHbwYBA1AvfqxmryQ8c8e\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"549\"}},{\"eventTimeMs\""
		":1613488231662,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CGsQmY0FGAciEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"550\"}},{\"eventTimeMs\":1613488231662,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CGwQ3DAiEwi-6L721-7uAhVNhcQKHbwYBA1AoZinv5e7tKMW\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"550\"}},{\"eventTimeMs\":1613488231663,\"visualElementShown\":"
		"{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CGYQmY0FGAgiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"550\"}},{\"eventTimeMs\":1613488231663,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CGcQ3DAiEwi-6L721-7uAhVNhcQKHbwYBA1A7uX8gOCturVK\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"550\"}},{\"eventTimeMs\":1613488231663,\"visualElementShown\":{\"csn\":\""
		"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CGEQmY0FGAkiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"551\"}},{\"eventTimeMs\":1613488231663,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CGIQ3DAiEwi-6L721-7uAhVNhcQKHbwYBA1A5frn65bXzfbAAQ==\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"551\"}},{\"eventTimeMs\":1613488231664,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\""
		"ve\":{\"trackingParams\":\"CIkBEOOXBRgBIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"551\"}},{\"eventTimeMs\":1613488231664,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CIoBEK_jBCITCL7ovvbX7u4CFU2FxAodvBgEDQ==\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"551\"}},{\"eventTimeMs\":1613488231687,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":["
		"{\"veType\":115994,\"veCounter\":1}]},\"context\":{\"lastActivityMs\":\"575\"}},{\"eventTimeMs\":1613488231687,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"veType\":115993,\"veCounter\":2}]},\"context\":{\"lastActivityMs\":\"575\"}},{\"eventTimeMs\":1613488232693,\"latencyActionTicked\":{\"tickName\":\"cmi\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"246\"}},{\"eventTimeMs\":1613488232832,\""
		"latencyActionTicked\":{\"tickName\":\"vptl\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"385\"}},{\"eventTimeMs\":1613488232832,\"latencyActionTicked\":{\"tickName\":\"vpl\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"385\"}},{\"eventTimeMs\":1613488232832,\"latencyActionTicked\":{\"tickName\":\"ol\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488232859,\""
		"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CMkBENwwIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"413\"}},{\"eventTimeMs\":1613488232860,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CIABENwwIhMIvui-9tfu7gIVTYXECh28GAQN\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"413\"}},{\"eventTimeMs\":1613488232860,\"visualElementShown\":{\"csn\":\""
		"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CHsQ3DAiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"413\"}},{\"eventTimeMs\":1613488232860,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CHYQ3DAiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"414\"}},{\"eventTimeMs\":1613488232860,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\""
		"trackingParams\":\"CHEQ3DAiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"414\"}},{\"eventTimeMs\":1613488232860,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CGwQ3DAiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"414\"}},{\"eventTimeMs\":1613488232861,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CGcQ3DAiEwi-6L721-7uAhVNhcQKHbwYBA0"
		"=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"414\"}}],\"requestTimeMs\":1613488233604,\"serializedClientEventId\":{\"serializedEventId\":\"ROArYIzAJpXQkgagvKi4BQ\",\"clientCounter\":\"19569\"}}", 
		EXTRARES, 
		"Url=/s/desktop/3748dff5/jsbin/serviceworker-kevlar-appshell.vflset/serviceworker-kevlar-appshell.js", "Referer=https://www.youtube.com/sw.js", ENDITEM, 
		"Url=https://11.client-channel.google.com/client-channel/channel/bind?ctype=memento&VER=8&RID=rpc&SID=D7D41F52C151ABF1&CI=1&AID=3&gsessionid=O8dNzqC7I0TDGRMvaGsn1YsiPMXm6YKZAaEuKQOWrM0&TYPE=xmlhttp&zx=mhuzwkp4mf1c&t=1", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Goog-Visitor-Id");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_url("app_shell", 
		"URL=https://www.youtube.com/app_shell", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.youtube.com/sw.js", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/s/desktop/3748dff5/cssbin/www-main-desktop-home-page-skeleton-2x.css", "Referer=https://www.youtube.com/sw.js", ENDITEM, 
		"Url=/s/desktop/3748dff5/cssbin/www-onepick-2x.css", "Referer=https://www.youtube.com/sw.js", ENDITEM, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChRDaHJvbWUvODguMC40MzI0LjE1MBIQCTzKr-MU6YWbEgUN8aNb4w==?alt=proto", "Referer=", ENDITEM, 
		"Url=/s/player/490079fb/player_ias.vflset/zh_CN/base.js", "Referer=https://www.youtube.com/sw.js", ENDITEM, 
		"Url=/s/desktop/3748dff5/cssbin/www-main-desktop-watch-page-skeleton-2x.css", "Referer=https://www.youtube.com/sw.js", ENDITEM, 
		"Url=/s/desktop/3748dff5/jsbin/www-searchbox.vflset/www-searchbox.js", "Referer=https://www.youtube.com/sw.js", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"chrome-extension://lpcaedmchfhocbbapmcbpinfpgnhiddi");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_add_auto_header("X-Client-Data", 
		"CIi2yQEIpLbJAQjEtskBCKmdygEI+MfKAQijzcoBCMXPygEI3NXKAQionMsBCMWcywEI5JzLAQioncsB");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("subscriptions", 
		"URL=https://signaler-pa.googleapis.com/v1/subscriptions", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json+protobuf", 
		"Referer=", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		"EncType=application/json+protobuf", 
		"Body=[[\"keep\",null,\"dybUXgqbz/Dms1Ku\",11,\"LdPgs1TebYs=\"],true]", 
		EXTRARES, 
		"Url=https://www.youtube.com/s/player/490079fb/player_ias.vflset/zh_CN/captions.js", "Referer=https://www.youtube.com/sw.js", ENDITEM, 
		LAST);

	web_custom_request("changes_2", 
		"URL=https://content-notes-pa.googleapis.com/notes/v1/changes?key=AIzaSyBx4qIYtgGv7SYh3nV8weWhXKZjIcaYKek", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"requestHeader\":{\"requestId\":\"request.qrhw1qbcu9ih.1613488248947\",\"clientVersion\":{\"major\":\"3\",\"minor\":\"3\",\"build\":\"0\",\"revision\":\"108\"},\"clientPlatform\":\"CRX_BA\",\"capabilities\":[{\"type\":\"TR\"},{\"type\":\"LB\"},{\"type\":\"AN\"},{\"type\":\"NC\"},{\"type\":\"MI\"},{\"type\":\"SH\"},{\"type\":\"SNB\"},{\"type\":\"DR\"}],\"clientSessionId\":\"s--1613488191157--330508497\",\"clientLocale\":\"en\"},\"clientTimestamp\":\"2021-02-16T15:10:48.947Z\",\""
		"targetVersion\":\"ADKa+gky0D/ysxaiIYAM08FD1Thjo65+VCzvdQfyNo+cHuE=\",\"nodes\":[]}", 
		LAST);

	web_revert_auto_header("X-Client-Data");

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"https://www.youtube.com");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Goog-Visitor-Id", 
		"CgtENFMzX0Z1QnE1ayjEwK-BBg%3D%3D");

	web_add_auto_header("X-YouTube-Ad-Signals", 
		"dt=1613488224751&flash=0&frm&u_tz=480&u_his=1&u_java&u_h=864&u_w=1536&u_ah=824&u_aw=1536&u_cd=24&u_nplug=3&u_nmime=4&bc=31&bih=722&biw=1519&brdim=0%2C0%2C0%2C0%2C1536%2C0%2C1536%2C824%2C1536%2C722&vis=1&wgl=true&ca_type=image");

	web_add_auto_header("X-YouTube-Client-Name", 
		"1");

	web_add_auto_header("X-YouTube-Client-Version", 
		"2.20210210.08.00");

	web_add_auto_header("X-YouTube-Device", 
		"cbr=Chrome&cbrver=88.0.4324.150&ceng=WebKit&cengver=537.36&cos=Windows&cosver=10.0&cplatform=DESKTOP");

	web_add_auto_header("X-YouTube-Page-CL", 
		"356775446");

	web_add_auto_header("X-YouTube-Page-Label", 
		"youtube.desktop.web_20210210_08_RC00");

	web_add_auto_header("X-YouTube-Time-Zone", 
		"Asia/Shanghai");

	web_add_auto_header("X-YouTube-Utc-Offset", 
		"480");

	web_custom_request("log_event_2", 
		"URL=https://www.youtube.com/youtubei/v1/log_event?alt=json&key=AIzaSyAO_FJ2SlqU8Q4STEHLGCilw_Y9_11qcW8", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.youtube.com/", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context\":{\"client\":{\"hl\":\"zh-CN\",\"gl\":\"US\",\"clientName\":1,\"clientVersion\":\"2.20210210.08.00\",\"configInfo\":{\"appInstallData\":\"CMTAr4EGEJH4/BI=\"},\"screenDensityFloat\":\"1.25\",\"browserName\":\"Chrome\",\"browserVersion\":\"88.0.4324.150\",\"osName\":\"Windows\",\"osVersion\":\"10.0\",\"platform\":\"DESKTOP\"}},\"events\":[{\"eventTimeMs\":1613488233569,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\""
		"CGIQ3DAiEwi-6L721-7uAhVNhcQKHbwYBA0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"1122\"}},{\"eventTimeMs\":1613488233700,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"trackingParams\":\"CAAQumkiEwiz9JWH2O7uAhVyNq0GHYzaAo4=\"}]},\"context\":{\"lastActivityMs\":\"1254\"}},{\"eventTimeMs\":1613488233701,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\""
		"trackingParams\":\"CAAQumkiEwiz9JWH2O7uAhVyNq0GHYzaAo4=\"}]},\"context\":{\"lastActivityMs\":\"1254\"}},{\"eventTimeMs\":1613488233712,\"latencyActionTicked\":{\"tickName\":\"gle\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"11\"}},{\"eventTimeMs\":1613488233735,\"latencyActionTicked\":{\"tickName\":\"gpe\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"33\"}},{\"eventTimeMs\":1613488233737,\"visualElementShown\":{\"csn\":\""
		"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CAAQumkiEwiz9JWH2O7uAhVyNq0GHYzaAo4=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"35\"}},{\"eventTimeMs\":1613488233737,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CBoQ5isYACITCLP0lYfY7u4CFXI2rQYdjNoCjg==\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"35\"}},{\"eventTimeMs\":1613488233737,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\""
		"trackingParams\":\"CB0QtSwYACITCLP0lYfY7u4CFXI2rQYdjNoCjg==\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"35\"}},{\"eventTimeMs\":1613488233737,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CBwQtSwYASITCLP0lYfY7u4CFXI2rQYdjNoCjg==\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"36\"}},{\"eventTimeMs\":1613488233737,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\""
		"CBsQtSwYAiITCLP0lYfY7u4CFXI2rQYdjNoCjg==\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"36\"}},{\"eventTimeMs\":1613488233737,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CBcQ5isYASITCLP0lYfY7u4CFXI2rQYdjNoCjg==\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"36\"}},{\"eventTimeMs\":1613488233737,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CBkQtSwYACITCLP0lYfY7u4CFXI2rQYdjNoCjg==\"},\""
		"eventType\":1},\"context\":{\"lastActivityMs\":\"36\"}},{\"eventTimeMs\":1613488233737,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CBgQtSwYASITCLP0lYfY7u4CFXI2rQYdjNoCjg==\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"36\"}},{\"eventTimeMs\":1613488233767,\"latencyActionTicked\":{\"tickName\":\"ftl\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488233840,\"visualElementShown\":{\""
		"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CBYQ04AEIhMIs_SVh9ju7gIVcjatBh2M2gKO\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"139\"}},{\"eventTimeMs\":1613488233841,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CAsQ5isYAyITCLP0lYfY7u4CFXI2rQYdjNoCjg==\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"139\"}},{\"eventTimeMs\":1613488233841,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\""
		"trackingParams\":\"CBUQtSwYACITCLP0lYfY7u4CFXI2rQYdjNoCjg==\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"139\"}},{\"eventTimeMs\":1613488233841,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CBQQtSwYASITCLP0lYfY7u4CFXI2rQYdjNoCjg==\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"139\"}},{\"eventTimeMs\":1613488233841,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\""
		"CBMQtSwYAiITCLP0lYfY7u4CFXI2rQYdjNoCjg==\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"139\"}},{\"eventTimeMs\":1613488233841,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CBIQnOQDGAMiEwiz9JWH2O7uAhVyNq0GHYzaAo4=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"140\"}},{\"eventTimeMs\":1613488233841,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CBEQtSwYBCITCLP0lYfY7u4CFXI2rQYdjNoCjg==\"},\""
		"eventType\":1},\"context\":{\"lastActivityMs\":\"140\"}},{\"eventTimeMs\":1613488233841,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CBAQtSwYBSITCLP0lYfY7u4CFXI2rQYdjNoCjg==\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"140\"}},{\"eventTimeMs\":1613488233842,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"trackingParams\":\"CA8QtSwYBiITCLP0lYfY7u4CFXI2rQYdjNoCjg==\"},\"eventType\":1},\"context\":{\"lastActivityMs\""
		":\"140\"}},{\"eventTimeMs\":1613488234509,\"latencyActionTicked\":{\"tickName\":\"fmth\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"22\"}}],\"requestTimeMs\":1613488248847,\"serializedClientEventId\":{\"serializedEventId\":\"ROArYIzAJpXQkgagvKi4BQ\",\"clientCounter\":\"19570\"}}", 
		EXTRARES, 
		"Url=/s/player/490079fb/player_ias.vflset/zh_CN/endscreen.js", "Referer=https://www.youtube.com/sw.js", ENDITEM, 
		"Url=/s/player/490079fb/player_ias.vflset/zh_CN/miniplayer.js", "Referer=https://www.youtube.com/sw.js", ENDITEM, 
		"Url=/s/player/490079fb/player_ias.vflset/zh_CN/remote.js", "Referer=https://www.youtube.com/sw.js", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/youtubesans/v7/Qw3aZQNGEDjaO2m6tqIqX5EUDXx4.woff2", "Referer=https://fonts.googleapis.com/", ENDITEM, 
		"Url=https://fonts.gstatic.com/s/roboto/v20/KFOlCnqEu92Fr1MmWUlfBBc4.woff2", "Referer=https://fonts.googleapis.com/", ENDITEM, 
		LAST);

	web_add_cookie("ST-as4vzj=itct=CMkBENwwIhMIvui-9tfu7gIVTYXECh28GAQNMgpnLWhpZ2gtcmVjWg9GRXdoYXRfdG9fd2F0Y2iaAQYQjh4YngE%3D&csn=MC4wODkyMzYxMTA3MjU4NDIxNA..&endpoint="
		"%7B%22clickTrackingParams%22%3A%22CMkBENwwIhMIvui-9tfu7gIVTYXECh28GAQNMgpnLWhpZ2gtcmVjWg9GRXdoYXRfdG9fd2F0Y2iaAQYQjh4YngE%3D%22%2C%22commandMetadata%22%3A%7B%22webCommandMetadata%22%3A%7B%22url%22%3A%22%2Fwatch%3Fv%3D5qap5aO4i9A%22%2C%22webPageType%22%3A%22WEB_PAGE_TYPE_WATCH%22%2C%22rootVe%22%3A3832%7D%7D%2C%22watchEndpoint%22%3A%7B%22videoId%22%3A%225qap5aO4i9A%22%7D%7D; DOMAIN=www.youtube.com");

	web_add_header("X-SPF-Previous", 
		"https://www.youtube.com/");

	web_add_header("X-SPF-Referer", 
		"https://www.youtube.com/");

	web_add_header("X-YouTube-STS", 
		"18669");

	web_add_header("x-youtube-csoc", 
		"1");

	web_url("watch", 
		"URL=https://www.youtube.com/watch?v=5qap5aO4i9A&pbj=1", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.youtube.com/", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("ST-as4vzj=csn=MC4wODkyMzYxMTA3MjU4NDIxNA..&itct=CMkBENwwIhMIvui-9tfu7gIVTYXECh28GAQNMgpnLWhpZ2gtcmVjWg9GRXdoYXRfdG9fd2F0Y2iaAQYQjh4YngE%3D&endpoint="
		"%7B%22clickTrackingParams%22%3A%22CMkBENwwIhMIvui-9tfu7gIVTYXECh28GAQNMgpnLWhpZ2gtcmVjWg9GRXdoYXRfdG9fd2F0Y2iaAQYQjh4YngE%3D%22%2C%22commandMetadata%22%3A%7B%22webCommandMetadata%22%3A%7B%22url%22%3A%22%2Fwatch%3Fv%3D5qap5aO4i9A%22%2C%22webPageType%22%3A%22WEB_PAGE_TYPE_WATCH%22%2C%22rootVe%22%3A3832%7D%7D%2C%22watchEndpoint%22%3A%7B%22videoId%22%3A%225qap5aO4i9A%22%7D%7D; DOMAIN=www.youtube.com");

	web_revert_auto_header("X-YouTube-Ad-Signals");

	web_revert_auto_header("X-YouTube-Client-Name");

	web_revert_auto_header("X-YouTube-Client-Version");

	web_revert_auto_header("X-YouTube-Device");

	web_revert_auto_header("X-YouTube-Page-CL");

	web_revert_auto_header("X-YouTube-Page-Label");

	web_revert_auto_header("X-YouTube-Time-Zone");

	web_revert_auto_header("X-YouTube-Utc-Offset");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_url("sw.js_data", 
		"URL=https://www.youtube.com/sw.js_data", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.youtube.com/sw.js", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.youtube.com");

	web_add_header("X-Goog-Visitor-Id", 
		"CgtENFMzX0Z1QnE1ayjEwK-BBg%3D%3D");

	web_add_header("X-YouTube-Ad-Signals", 
		"dt=1613488249004&flash=0&frm&u_tz=480&u_his=2&u_java&u_h=864&u_w=1536&u_ah=824&u_aw=1536&u_cd=24&u_nplug=3&u_nmime=4&bc=31&bih=722&biw=1519&brdim=0%2C0%2C0%2C0%2C1536%2C0%2C1536%2C824%2C1536%2C722&vis=1&wgl=true&ca_type=image");

	web_add_header("X-YouTube-Client-Name", 
		"1");

	web_add_header("X-YouTube-Client-Version", 
		"2.20210210.08.00");

	web_add_header("X-YouTube-Device", 
		"cbr=Chrome&cbrver=88.0.4324.150&ceng=WebKit&cengver=537.36&cos=Windows&cosver=10.0&cplatform=DESKTOP");

	web_add_header("X-YouTube-Page-CL", 
		"356775446");

	web_add_header("X-YouTube-Page-Label", 
		"youtube.desktop.web_20210210_08_RC00");

	web_add_header("X-YouTube-Time-Zone", 
		"Asia/Shanghai");

	web_add_header("X-YouTube-Utc-Offset", 
		"480");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("log_event_3", 
		"URL=https://www.youtube.com/youtubei/v1/log_event?alt=json&key=AIzaSyAO_FJ2SlqU8Q4STEHLGCilw_Y9_11qcW8", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.youtube.com/watch?v=5qap5aO4i9A", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context\":{\"client\":{\"hl\":\"zh-CN\",\"gl\":\"US\",\"clientName\":1,\"clientVersion\":\"2.20210210.08.00\",\"configInfo\":{\"appInstallData\":\"CMTAr4EGEJH4/BI=\"},\"screenDensityFloat\":\"1.25\",\"browserName\":\"Chrome\",\"browserVersion\":\"88.0.4324.150\",\"osName\":\"Windows\",\"osVersion\":\"10.0\",\"platform\":\"DESKTOP\"}},\"events\":[{\"eventTimeMs\":1613488248843,\"idbTransactionEnded\":{\"objectStoreNames\":\"LogsRequestsStore\",\"connectionHasUnknownAbortedTransaction\""
		":false,\"duration\":2,\"isSuccessful\":true},\"context\":{\"lastActivityMs\":\"14269\"}},{\"eventTimeMs\":1613488249010,\"latencyActionTicked\":{\"tickName\":\"pe\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"14436\"}},{\"eventTimeMs\":1613488249016,\"latencyActionTicked\":{\"tickName\":\"pe\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"14443\"}},{\"eventTimeMs\":1613488249044,\"latencyActionTicked\":{\"tickName\":\"fs\",\""
		"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"14470\"}},{\"eventTimeMs\":1613488249052,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"veType\":51663,\"veCounter\":1}]},\"context\":{\"lastActivityMs\":\"14479\"}},{\"eventTimeMs\":1613488249053,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"veType\":28240,\"veCounter\":2}]},\"context"
		"\":{\"lastActivityMs\":\"14480\"}},{\"eventTimeMs\":1613488249053,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"veType\":28239,\"veCounter\":3}]},\"context\":{\"lastActivityMs\":\"14480\"}},{\"eventTimeMs\":1613488249053,\"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"veType\":28240,\"veCounter\":2},\"eventType\":1},\"context\":{\"lastActivityMs\":\"14480\"}},{\"eventTimeMs\":1613488249053,\""
		"visualElementShown\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"veType\":28239,\"veCounter\":3},\"eventType\":1},\"context\":{\"lastActivityMs\":\"14480\"}},{\"eventTimeMs\":1613488249054,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"veType\":36925,\"veCounter\":4}]},\"context\":{\"lastActivityMs\":\"14480\"}},{\"eventTimeMs\":1613488249054,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\""
		":{\"veType\":3854},\"childVes\":[{\"veType\":23851,\"veCounter\":5}]},\"context\":{\"lastActivityMs\":\"14481\"}},{\"eventTimeMs\":1613488249055,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"veType\":108341,\"veCounter\":6}]},\"context\":{\"lastActivityMs\":\"14482\"}},{\"eventTimeMs\":1613488249083,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"veType\":28662,"
		"\"veCounter\":7}]},\"context\":{\"lastActivityMs\":\"14510\"}},{\"eventTimeMs\":1613488249084,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"veType\":113681,\"veCounter\":8}]},\"context\":{\"lastActivityMs\":\"14511\"}},{\"eventTimeMs\":1613488249085,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"veType\":61214,\"veCounter\":9}]},\"context\":{\"lastActivityMs\""
		":\"14511\"}},{\"eventTimeMs\":1613488249085,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"veType\":28663,\"veCounter\":10}]},\"context\":{\"lastActivityMs\":\"14511\"}},{\"eventTimeMs\":1613488249086,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"veType\":62946,\"veCounter\":11}]},\"context\":{\"lastActivityMs\":\"14512\"}},{\"eventTimeMs\":1613488249087,\""
		"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"veType\":28656,\"veCounter\":12}]},\"context\":{\"lastActivityMs\":\"14514\"}},{\"eventTimeMs\":1613488249088,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"veType\":70344,\"veCounter\":13}]},\"context\":{\"lastActivityMs\":\"14515\"}},{\"eventTimeMs\":1613488249088,\"visualElementAttached\":{\"csn\":\""
		"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"veType\":28665,\"veCounter\":14}]},\"context\":{\"lastActivityMs\":\"14515\"}},{\"eventTimeMs\":1613488249089,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"veType\":28664,\"veCounter\":15}]},\"context\":{\"lastActivityMs\":\"14516\"}},{\"eventTimeMs\":1613488249089,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\""
		"veType\":3854},\"childVes\":[{\"veType\":86570,\"veCounter\":16}]},\"context\":{\"lastActivityMs\":\"14516\"}},{\"eventTimeMs\":1613488249090,\"visualElementAttached\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"parentVe\":{\"veType\":3854},\"childVes\":[{\"veType\":16499,\"veCounter\":17}]},\"context\":{\"lastActivityMs\":\"14517\"}},{\"eventTimeMs\":1613488254765,\"streamzIncremented\":{\"serializedIncrementBatch\":\""
		"CkQvY2xpZW50X3N0cmVhbXoveW91dHViZS93ZWJfY2xpZW50X3NsaS95b3V0dWJlX3dlYi9zZXNzaW9uX3BhcnRpdGlvbhoHYnJvd3NlchoNaXNfc2hlbGxfbG9hZBoPc3Vydml2YWxfc3RhdHVzGg1wYXJ0aXRpb25fbWluGgxzZXNzaW9uX3R5cGUaDGNhbmFyeV9zdGF0ZRoGc3RhdHVzIj8KCAoGQ0hST01FCgIYAAoNCgtBTElWRV9TVEFSVAoCEAUKBQoDTkVXCgYKBG5vbmUKCQoHU1VDQ0VTUxICCAE=\"},\"context\":{\"lastActivityMs\":\"20191\"}},{\"eventTimeMs\":1613488254766,\"streamzIncremented\":{\"serializedIncrementBatch\":\""
		"CjwvY2xpZW50X3N0cmVhbXoveW91dHViZS93ZWJfY2xpZW50X3NsaS95b3V0dWJlX3dlYi9hcHBfYm9vdHMaB2Jyb3dzZXIaDWlzX3NoZWxsX2xvYWQaDGNhbmFyeV9zdGF0ZRoGc3RhdHVzIiUKCAoGQ0hST01FCgIYAAoGCgRub25lCgkKB1NVQ0NFU1MSAggB\"},\"context\":{\"lastActivityMs\":\"20191\"}},{\"eventTimeMs\":1613488254766,\"streamzIncremented\":{\"serializedIncrementBatch\":\""
		"CkIvY2xpZW50X3N0cmVhbXoveW91dHViZS93ZWJfY2xpZW50X3NsaS95b3V0dWJlX3dlYi9hcHBfYm9vdHNfc3RhcnQaB2Jyb3dzZXIaDWlzX3NoZWxsX2xvYWQaDGNhbmFyeV9zdGF0ZSIaCggKBkNIUk9NRQoCGAAKBgoEbm9uZRICCAE=\"},\"context\":{\"lastActivityMs\":\"20192\"}},{\"eventTimeMs\":1613488254766,\"streamzIncremented\":{\"serializedIncrementBatch\":\""
		"CkIvY2xpZW50X3N0cmVhbXoveW91dHViZS93ZWJfY2xpZW50X3NsaS95b3V0dWJlX3dlYi9uZXR3b3JrX3JlcXVlc3QaB2Jyb3dzZXIaDWlzX3NoZWxsX2xvYWQaBHBhdGgaDGNhbmFyeV9zdGF0ZRoGc3RhdHVzIjsKCAoGQ0hST01FCgIYAAoUChIveW91dHViZWkvdjEvZ3VpZGUKBgoEbm9uZQoJCgdTVUNDRVNTEgIIAQ==\"},\"context\":{\"lastActivityMs\":\"20192\"}},{\"eventTimeMs\":1613488254766,\"streamzIncremented\":{\"serializedIncrementBatch\":\""
		"CkgvY2xpZW50X3N0cmVhbXoveW91dHViZS93ZWJfY2xpZW50X3NsaS95b3V0dWJlX3dlYi9uZXR3b3JrX3JlcXVlc3Rfc3RhcnQaB2Jyb3dzZXIaDWlzX3NoZWxsX2xvYWQaBHBhdGgaDGNhbmFyeV9zdGF0ZSIwCggKBkNIUk9NRQoCGAAKFAoSL3lvdXR1YmVpL3YxL2d1aWRlCgYKBG5vbmUSAggB\"},\"context\":{\"lastActivityMs\":\"20192\"}},{\"eventTimeMs\":1613488254766,\"streamzIncremented\":{\"serializedIncrementBatch\":\""
		"Ck4vY2xpZW50X3N0cmVhbXoveW91dHViZS93ZWJfY2xpZW50X3NsaS95b3V0dWJlX3dlYi9zZXJ2aWNlX3dvcmtlcl9yZWdpc3RyYXRpb24aB2Jyb3dzZXIaDWlzX3NoZWxsX2xvYWQaDGNhbmFyeV9zdGF0ZRoGc3RhdHVzIiUKCAoGQ0hST01FCgIYAAoGCgRub25lCgkKB1NVQ0NFU1MSAggB\"},\"context\":{\"lastActivityMs\":\"20192\"}},{\"eventTimeMs\":1613488254766,\"streamzIncremented\":{\"serializedIncrementBatch\":\""
		"ClQvY2xpZW50X3N0cmVhbXoveW91dHViZS93ZWJfY2xpZW50X3NsaS95b3V0dWJlX3dlYi9zZXJ2aWNlX3dvcmtlcl9yZWdpc3RyYXRpb25fc3RhcnQaB2Jyb3dzZXIaDWlzX3NoZWxsX2xvYWQaDGNhbmFyeV9zdGF0ZSIaCggKBkNIUk9NRQoCGAAKBgoEbm9uZRICCAE=\"},\"context\":{\"lastActivityMs\":\"20192\"}},{\"eventTimeMs\":1613488254766,\"streamzIncremented\":{\"serializedIncrementBatch\":\""
		"CkovY2xpZW50X3N0cmVhbXoveW91dHViZS93ZWJfY2xpZW50X3NsaS95b3V0dWJlX3dlYi95dF9pbml0aWFsX2RhdGFfcHJlc2VudBoHYnJvd3NlchoNaXNfc2hlbGxfbG9hZBoMY2FuYXJ5X3N0YXRlGgZzdGF0dXMiJQoICgZDSFJPTUUKAhgACgYKBG5vbmUKCQoHU1VDQ0VTUxICCAE=\"},\"context\":{\"lastActivityMs\":\"20192\"}},{\"eventTimeMs\":1613488254766,\"streamzIncremented\":{\"serializedIncrementBatch\":\""
		"ClAvY2xpZW50X3N0cmVhbXoveW91dHViZS93ZWJfY2xpZW50X3NsaS95b3V0dWJlX3dlYi95dF9pbml0aWFsX2RhdGFfcHJlc2VudF9zdGFydBoHYnJvd3NlchoNaXNfc2hlbGxfbG9hZBoMY2FuYXJ5X3N0YXRlIhoKCAoGQ0hST01FCgIYAAoGCgRub25lEgIIAQ==\"},\"context\":{\"lastActivityMs\":\"20192\"}},{\"eventTimeMs\":1613488254767,\"streamzIncremented\":{\"serializedIncrementBatch\":\""
		"CkgvY2xpZW50X3N0cmVhbXoveW91dHViZS93ZWJfY2xpZW50X3NsaS95b3V0dWJlX3dlYi95dF9ndWlkZV9kYXRhX3ByZXNlbnQaB2Jyb3dzZXIaDWlzX3NoZWxsX2xvYWQaDGNhbmFyeV9zdGF0ZRoGc3RhdHVzIiUKCAoGQ0hST01FCgIYAAoGCgRub25lCgkKB1NVQ0NFU1MSAggB\"},\"context\":{\"lastActivityMs\":\"20192\"}},{\"eventTimeMs\":1613488254767,\"streamzIncremented\":{\"serializedIncrementBatch\":\""
		"Ck4vY2xpZW50X3N0cmVhbXoveW91dHViZS93ZWJfY2xpZW50X3NsaS95b3V0dWJlX3dlYi95dF9ndWlkZV9kYXRhX3ByZXNlbnRfc3RhcnQaB2Jyb3dzZXIaDWlzX3NoZWxsX2xvYWQaDGNhbmFyeV9zdGF0ZSIaCggKBkNIUk9NRQoCGAAKBgoEbm9uZRICCAE=\"},\"context\":{\"lastActivityMs\":\"20192\"}},{\"eventTimeMs\":1613488254767,\"streamzIncremented\":{\"serializedIncrementBatch\":\""
		"ClUvY2xpZW50X3N0cmVhbXoveW91dHViZS93ZWJfY2xpZW50X3NsaS95b3V0dWJlX3dlYi9zdGZlX2dyZWF0ZXJfdGhhbl9vbmVfbWludXRlX3N0YXJ0Ggdicm93c2VyGg1pc19zaGVsbF9sb2FkGgxjYW5hcnlfc3RhdGUiGgoICgZDSFJPTUUKAhgACgYKBG5vbmUSAggB\"},\"context\":{\"lastActivityMs\":\"20192\"}},{\"eventTimeMs\":1613488254767,\"streamzIncremented\":{\"serializedIncrementBatch\":\""
		"ClYvY2xpZW50X3N0cmVhbXoveW91dHViZS93ZWJfY2xpZW50X3NsaS95b3V0dWJlX3dlYi9zdGZlX2dyZWF0ZXJfdGhhbl90ZW5fbWludXRlc19zdGFydBoHYnJvd3NlchoNaXNfc2hlbGxfbG9hZBoMY2FuYXJ5X3N0YXRlIhoKCAoGQ0hST01FCgIYAAoGCgRub25lEgIIAQ==\"},\"context\":{\"lastActivityMs\":\"20193\"}},{\"eventTimeMs\":1613488254767,\"streamzIncremented\":{\"serializedIncrementBatch\":\"Ci8vY2xpZW50X3N0cmVhbXoveW91dHViZS93ZWIvbmF2aWdhdGlvbl9yZXNwb25zZRoGcmVzdWx0GglwYWdlX3R5cGUaCmVycm9yX3R5cGUiIQoJCgdzdWNjZXNzCggKBmJyb3dzZQoGCgRudWxsEgIIAg==\"},"
		"\"context\":{\"lastActivityMs\":\"20193\"}},{\"eventTimeMs\":1613488260242,\"visualElementHidden\":{\"csn\":\"MC4wODkyMzYxMTA3MjU4NDIxNA..\",\"ve\":{\"veType\":3854},\"eventType\":16},\"context\":{\"lastActivityMs\":\"3\"}},{\"eventTimeMs\":1613488260244,\"latencyActionTicked\":{\"tickName\":\"aa\",\"clientActionNonce\":\"dSK81psY_0BXlLK1\"},\"context\":{\"lastActivityMs\":\"5\"}},{\"eventTimeMs\":1613488260244,\"latencyActionInfo\":{\"loadType\":\"warm\",\"clientActionNonce\":\"-yjwyb35eWduK-0i\""
		"},\"context\":{\"lastActivityMs\":\"5\"}},{\"eventTimeMs\":1613488260245,\"latencyActionBaselined\":{\"clientActionNonce\":\"-yjwyb35eWduK-0i\"},\"context\":{\"lastActivityMs\":\"5\"}},{\"eventTimeMs\":1613488260262,\"latencyActionTicked\":{\"tickName\":\"fmth\",\"clientActionNonce\":\"-yjwyb35eWduK-0i\"},\"context\":{\"lastActivityMs\":\"23\"}}],\"requestTimeMs\":\"1613488260274\",\"serializedClientEventId\":{\"serializedEventId\":\"ROArYIzAJpXQkgagvKi4BQ\",\"clientCounter\":\"19571\"}}", 
		EXTRARES, 
		"Url=https://safebrowsing.googleapis.com/v4/threatListUpdates_fetch?$req="
		"Ch0KDGdvb2dsZWNocm9tZRINODguMC40MzI0LjE1MBopCAUQARobCg0IBRAGGAEiAzAwMTABELzBChoCGAvPgvXHIgQgASACKAEaKQgBEAEaGwoNCAEQBhgBIgMwMDEwARC_wggaAhgLlCnGjCIEIAEgAigBGikIAxABGhsKDQgDEAYYASIDMDAxMAEQ674IGgIYC47qRyAiBCABIAIoARopCAcQARobCg0IBxAGGAEiAzAwMTABEKD9CBoCGAsYKYALIgQgASACKAEaJwgBEAEaGQoNCAEQBhgBIgMwMDEwAxAUGgIYC_474o8iBCABIAIoAxooCAEQCBoaCg0IARAIGAEiAzAwMTAEELsdGgIYC_M1fX0iBCABIAIoBBonCAkQARoZCg0ICRAGGAEiAzAwMTAGEAMaAhgLItEfZCIEIAEgAigGGigIDxABGhoKDQgPEAYYASIDMDAxMAEQzlkaAhgLtXqZoCIEIAEgAigBGicIChAIGh"
		"kKDQgKEAgYASIDMDAxMAEQBhoCGAsi7f5dIgQgASACKAEaJwgJEAEaGQoNCAkQBhgBIgMwMDEwARAfGgIYCy3jeeoiBCABIAIoARooCAgQARoaCg0ICBAGGAEiAzAwMTABELALGgIYC7IDgWYiBCABIAIoARopCA0QARobCg0IDRAGGAEiAzAwMTABEP6DARoCGAtuHVHjIgQgASACKAEaKQgOEAEaGwoNCA4QBhgBIgMwMDEwARDgiAUaAhgLTC8dIiIEIAEgAigBGigIEBABGhoKDQgQEAYYASIDMDAxMAEQ5QgaAhgLhceFQSIEIAEgAigBIgIIAQ==&$ct=application/x-protobuf&key=AIzaSyBOti4mM-6x9WDnZIjIeyEU21OpBXqWBgw", "Referer=", ENDITEM, 
		"Url=/s/player/490079fb/player_ias.vflset/zh_CN/annotations_module.js", "Referer=https://www.youtube.com/watch?v=5qap5aO4i9A", ENDITEM, 
		"Url=/s/player/490079fb/player_ias.vflset/zh_CN/heartbeat.js", "Referer=https://www.youtube.com/watch?v=5qap5aO4i9A", ENDITEM, 
		LAST);

	web_revert_auto_header("Sec-Fetch-Mode");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("qoe", 
		"URL=https://www.youtube.com/api/stats/qoe?event=streamingstats&fmt=134&afmt=140&cpn=CShoKlv20-aU6LFJ&ei=hOArYLroI9Xxkga_2I3gCg&el=detailpage&docid=5qap5aO4i9A&ns=yt&fexp=23857949%2C23890959%2C23969934%2C23976578%2C23983297%2C23986017%2C23992808%2C24000882%2C24003310&cl=356830393&live=dvr&seq=1&cbr=Chrome&cbrver=88.0.4324.150&c=WEB&cver=2.20210210.08.00&cplayer=UNIPLAYER&cos=Windows&cosver=10.0&cplatform=DESKTOP&vps=0.000:N,0.004:S,0.010:S,0.010:S&cat=live&cmt=0.004:0.000,0.010:0.000&ctmp="
		"seekreason:t.5;playbackData&afs=0.010:140::i&vfs=0.010:134:136::r&view=0.010:900:506:1.25&bwe=0.010:130000&vis=0.010:0&bh=0.010:0.000", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.youtube.com/watch?v=5qap5aO4i9A", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		EXTRARES, 
		"Url=https://11.client-channel.google.com/client-channel/channel/bind?ctype=memento&VER=8&RID=rpc&SID=D7D41F52C151ABF1&CI=1&AID=5&gsessionid=O8dNzqC7I0TDGRMvaGsn1YsiPMXm6YKZAaEuKQOWrM0&TYPE=xmlhttp&zx=azj9mfpf3lx9&t=1", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("Sec-Fetch-Dest");

	web_revert_auto_header("Sec-Fetch-Site");

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_custom_request("upload", 
		"URL=https://google.com/domainreliability/upload", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/javascript", 
		"Referer=", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		"EncType=application/json; charset=utf-8", 
		"Body={\"entries\":[{\"http_response_code\":401,\"network_changed\":false,\"protocol\":\"HTTPS\",\"request_age_ms\":75106,\"request_elapsed_ms\":3722,\"sample_rate\":1.0,\"server_ip\":\"127.0.0.1:10809\",\"status\":\"http.error\",\"url\":\"https://play.google.com/\",\"was_proxied\":true}],\"reporter\":\"chrome\"}", 
		EXTRARES, 
		"Url=https://www.youtube.com/get_video_info?html5=1&video_id=eAQPH0lsGeE&cpn=4CvEW64ZNHQUbNLO&eurl&ps=desktop-polymer&el=adunit&hl=zh_CN&aqi=hOArYIa3JfqWn88Pt6KliAM&sts=18669&lact=125&cbr=Chrome&cbrver=88.0.4324.150&c=WEB&cver=2.20210210.08.00&cplayer=UNIPLAYER&cos=Windows&cosver=10.0&cplatform=DESKTOP&adformat=15_2_1&slot_pos=0&break_type=1&encoded_ad_playback_context="
		"CA8QAhgBKgs1cWFwNWFPNGk5QUIXaE9BcllJYTNKZnFXbjg4UHQ2S2xpQU1YAGABdSq4ez-AAcjiAYoDIzABOAVKEwiGif6U2O7uAhV6y-cDHTdRCTFSBBABSAFoAXAskAOAzLDSww0%253D&iv_load_policy=1&autoplay=1&width=900&height=506&content_v=5qap5aO4i9A&living_room_app_mode=LIVING_ROOM_APP_MODE_UNSPECIFIED", "Referer=https://www.youtube.com/watch?v=5qap5aO4i9A", ENDITEM, 
		LAST);

	web_add_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("Service-Worker-Navigation-Preload", 
		"true");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_url("live_chat", 
		"URL=https://www.youtube.com/live_chat?continuation=0ofMyANxGlhDaWtxSndvWVZVTlRTalJuYTFaRE5rNXlka2xKT0hWdGVuUm1NRTkzRWdzMWNXRndOV0ZQTkdrNVFSb1Q2cWpkdVFFTkNnczFjV0Z3TldGUE5HazVRU0FCMAGCAQIIBIgBAaAB19T9lNju7gKyAQA%253D", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.youtube.com/watch?v=5qap5aO4i9A", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.youtube.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"same-origin");

	web_add_auto_header("X-Goog-Visitor-Id", 
		"CgtENFMzX0Z1QnE1ayiEwa-BBg%3D%3D");

	web_add_auto_header("X-Youtube-Client-Name", 
		"1");

	web_add_auto_header("X-Youtube-Client-Version", 
		"2.20210210.08.00");

	web_custom_request("updated_metadata", 
		"URL=https://www.youtube.com/youtubei/v1/updated_metadata?key=AIzaSyAO_FJ2SlqU8Q4STEHLGCilw_Y9_11qcW8", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.youtube.com/watch?v=5qap5aO4i9A", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context\":{\"client\":{\"hl\":\"zh-CN\",\"gl\":\"US\",\"remoteHost\":\"144.34.165.195\",\"deviceMake\":\"\",\"deviceModel\":\"\",\"visitorData\":\"CgtENFMzX0Z1QnE1ayjEwK-BBg%3D%3D\",\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.150 Safari/537.36,gzip(gfe)\",\"clientName\":\"WEB\",\"clientVersion\":\"2.20210210.08.00\",\"osName\":\"Windows\",\"osVersion\":\"10.0\",\"originalUrl\":\"https://www.youtube.com/\",\"platform\":\""
		"DESKTOP\",\"gfeFrontlineInfo\":\"vip=172.217.5.206,server_port=443,client_port=59748,tcp_connection_request_count=0,header_order=HNKUAEL,gfe_version=2.708.2,ssl,ssl_info=TLSv1.3:RNA:T,tlsext=S,sni=www.youtube.com,hex_encoded_client_hello=130213031301c02bc02fc02cc030c013c014009c009d002f003500ff-00-0000000b000a002300160017000d002b002d00330015,c=1302,ja3=e9c665c4c41f445fa086d34bfe8fb8d8,rtt_source=tcp,rtt=0,srtt=0,client_protocol=HTTP/1.1,client_transport=tcp,gfe=aclaxg17.prod.google.com,pzf=Linux "
		"2.2.x-3.x [4:58+6:0:1460:mss*44/7:mss/sok/ts/nop/ws:df/id+:0] [generic tos:0x20],vip_region=default,asn=25820,cc=US,eid=Q-ArYIm-JdH58AfG-qywCA,scheme=https\",\"clientFormFactor\":\"UNKNOWN_FORM_FACTOR\",\"browserName\":\"Chrome\",\"browserVersion\":\"88.0.4324.150\",\"screenWidthPoints\":1536,\"screenHeightPoints\":722,\"screenPixelDensity\":1,\"screenDensityFloat\":1.25,\"utcOffsetMinutes\":480,\"userInterfaceTheme\":\"USER_INTERFACE_THEME_DARK\",\"connectionType\":\"CONN_CELLULAR_3G\",\""
		"mainAppWebInfo\":{\"graftUrl\":\"https://www.youtube.com/watch?v=5qap5aO4i9A\"},\"timeZone\":\"Asia/Shanghai\"},\"user\":{\"lockedSafetyMode\":false},\"request\":{\"useSsl\":true,\"internalExperimentFlags\":[],\"consistencyTokenJars\":[]},\"clickTracking\":{\"clickTrackingParams\":\"CJwBEMyrARgAIhMIxcD8lNju7gIV0pfECh29lA6o\"},\"adSignalsInfo\":{\"params\":[{\"key\":\"dt\",\"value\":\"1613488224751\"},{\"key\":\"flash\",\"value\":\"0\"},{\"key\":\"frm\",\"value\":\"0\"},{\"key\":\"u_tz\",\"value\""
		":\"480\"},{\"key\":\"u_his\",\"value\":\"2\"},{\"key\":\"u_java\",\"value\":\"false\"},{\"key\":\"u_h\",\"value\":\"864\"},{\"key\":\"u_w\",\"value\":\"1536\"},{\"key\":\"u_ah\",\"value\":\"824\"},{\"key\":\"u_aw\",\"value\":\"1536\"},{\"key\":\"u_cd\",\"value\":\"24\"},{\"key\":\"u_nplug\",\"value\":\"3\"},{\"key\":\"u_nmime\",\"value\":\"4\"},{\"key\":\"bc\",\"value\":\"31\"},{\"key\":\"bih\",\"value\":\"722\"},{\"key\":\"biw\",\"value\":\"1519\"},{\"key\":\"brdim\",\"value\":\"0,0,0,0,1536,0,"
		"1536,824,1536,722\"},{\"key\":\"vis\",\"value\":\"1\"},{\"key\":\"wgl\",\"value\":\"true\"},{\"key\":\"ca_type\",\"value\":\"image\"}],\"consentBumpParams\":{\"consentHostnameOverride\":\"https://www.youtube.com\",\"urlOverride\":\"\"}},\"clientScreenNonce\":\"MC4yNTg3ODI4NjkxNTM5NzEz\"},\"videoId\":\"5qap5aO4i9A\"}", 
		LAST);

	web_custom_request("feedback", 
		"URL=https://www.youtube.com/youtubei/v1/feedback?key=AIzaSyAO_FJ2SlqU8Q4STEHLGCilw_Y9_11qcW8", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.youtube.com/watch?v=5qap5aO4i9A", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context\":{\"client\":{\"hl\":\"zh-CN\",\"gl\":\"US\",\"remoteHost\":\"144.34.165.195\",\"deviceMake\":\"\",\"deviceModel\":\"\",\"visitorData\":\"CgtENFMzX0Z1QnE1ayjEwK-BBg%3D%3D\",\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.150 Safari/537.36,gzip(gfe)\",\"clientName\":\"WEB\",\"clientVersion\":\"2.20210210.08.00\",\"osName\":\"Windows\",\"osVersion\":\"10.0\",\"originalUrl\":\"https://www.youtube.com/\",\"platform\":\""
		"DESKTOP\",\"gfeFrontlineInfo\":\"vip=172.217.5.206,server_port=443,client_port=59748,tcp_connection_request_count=0,header_order=HNKUAEL,gfe_version=2.708.2,ssl,ssl_info=TLSv1.3:RNA:T,tlsext=S,sni=www.youtube.com,hex_encoded_client_hello=130213031301c02bc02fc02cc030c013c014009c009d002f003500ff-00-0000000b000a002300160017000d002b002d00330015,c=1302,ja3=e9c665c4c41f445fa086d34bfe8fb8d8,rtt_source=tcp,rtt=0,srtt=0,client_protocol=HTTP/1.1,client_transport=tcp,gfe=aclaxg17.prod.google.com,pzf=Linux "
		"2.2.x-3.x [4:58+6:0:1460:mss*44/7:mss/sok/ts/nop/ws:df/id+:0] [generic tos:0x20],vip_region=default,asn=25820,cc=US,eid=Q-ArYIm-JdH58AfG-qywCA,scheme=https\",\"clientFormFactor\":\"UNKNOWN_FORM_FACTOR\",\"browserName\":\"Chrome\",\"browserVersion\":\"88.0.4324.150\",\"screenWidthPoints\":1536,\"screenHeightPoints\":722,\"screenPixelDensity\":1,\"screenDensityFloat\":1.25,\"utcOffsetMinutes\":480,\"userInterfaceTheme\":\"USER_INTERFACE_THEME_DARK\",\"connectionType\":\"CONN_CELLULAR_3G\",\""
		"mainAppWebInfo\":{\"graftUrl\":\"https://www.youtube.com/watch?v=5qap5aO4i9A\"},\"timeZone\":\"Asia/Shanghai\"},\"user\":{\"lockedSafetyMode\":false},\"request\":{\"useSsl\":true,\"internalExperimentFlags\":[],\"consistencyTokenJars\":[]},\"clickTracking\":{\"clickTrackingParams\":\"IhMIjPK89tfu7gIVFajECh0gHgpX\"},\"adSignalsInfo\":{\"params\":[{\"key\":\"dt\",\"value\":\"1613488224751\"},{\"key\":\"flash\",\"value\":\"0\"},{\"key\":\"frm\",\"value\":\"0\"},{\"key\":\"u_tz\",\"value\":\"480\"},{\""
		"key\":\"u_his\",\"value\":\"2\"},{\"key\":\"u_java\",\"value\":\"false\"},{\"key\":\"u_h\",\"value\":\"864\"},{\"key\":\"u_w\",\"value\":\"1536\"},{\"key\":\"u_ah\",\"value\":\"824\"},{\"key\":\"u_aw\",\"value\":\"1536\"},{\"key\":\"u_cd\",\"value\":\"24\"},{\"key\":\"u_nplug\",\"value\":\"3\"},{\"key\":\"u_nmime\",\"value\":\"4\"},{\"key\":\"bc\",\"value\":\"31\"},{\"key\":\"bih\",\"value\":\"722\"},{\"key\":\"biw\",\"value\":\"1519\"},{\"key\":\"brdim\",\"value\":\"0,0,0,0,1536,0,1536,824,1536,"
		"722\"},{\"key\":\"vis\",\"value\":\"1\"},{\"key\":\"wgl\",\"value\":\"true\"},{\"key\":\"ca_type\",\"value\":\"image\"}],\"consentBumpParams\":{\"consentHostnameOverride\":\"https://www.youtube.com\",\"urlOverride\":\"\"}},\"clientScreenNonce\":\"MC4yNTg3ODI4NjkxNTM5NzEz\"},\"feedbackTokens\":[\"AB9zfpIGfK6llxQtWFr15hTYi3Bzom1NGnaNZGv6PvrM-7dNxq7d5UdfqzFr7fHdYNu4408vQkUgGwRhou9IKbfJyuNd20kp1sHvxrNMMobqLQ2IFR0m14BMJnJMUQDLKjFRlFgR77kKJ6BUmPODuQPQwEjPRwqL8Q\"],\"isFeedbackTokenUnencrypted\":false,\""
		"shouldMerge\":false}", 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Goog-Visitor-Id");

	web_revert_auto_header("X-Youtube-Client-Name");

	web_revert_auto_header("X-Youtube-Client-Version");

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"iframe");

	web_add_header("Service-Worker-Navigation-Preload", 
		"true");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("live_chat_2", 
		"URL=https://www.youtube.com/live_chat?continuation=0ofMyANxGlhDaWtxSndvWVZVTlRTalJuYTFaRE5rNXlka2xKT0hWdGVuUm1NRTkzRWdzMWNXRndOV0ZQTkdrNVFSb1Q2cWpkdVFFTkNnczFjV0Z3TldGUE5HazVRU0FCMAGCAQIIBIgBAaAB19T9lNju7gKyAQA%253D", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.youtube.com/watch?v=5qap5aO4i9A", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://www.youtube.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_add_auto_header("Sec-Fetch-Mode", 
		"same-origin");

	web_add_auto_header("X-Goog-Visitor-Id", 
		"CgtENFMzX0Z1QnE1ayiEwa-BBg%3D%3D");

	web_add_auto_header("X-Youtube-Client-Name", 
		"1");

	web_add_auto_header("X-Youtube-Client-Version", 
		"2.20210210.08.00");

	web_custom_request("feedback_2", 
		"URL=https://www.youtube.com/youtubei/v1/feedback?key=AIzaSyAO_FJ2SlqU8Q4STEHLGCilw_Y9_11qcW8", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.youtube.com/watch?v=5qap5aO4i9A", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context\":{\"client\":{\"hl\":\"zh-CN\",\"gl\":\"US\",\"remoteHost\":\"144.34.165.195\",\"deviceMake\":\"\",\"deviceModel\":\"\",\"visitorData\":\"CgtENFMzX0Z1QnE1ayjEwK-BBg%3D%3D\",\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.150 Safari/537.36,gzip(gfe)\",\"clientName\":\"WEB\",\"clientVersion\":\"2.20210210.08.00\",\"osName\":\"Windows\",\"osVersion\":\"10.0\",\"originalUrl\":\"https://www.youtube.com/\",\"platform\":\""
		"DESKTOP\",\"gfeFrontlineInfo\":\"vip=172.217.5.206,server_port=443,client_port=59748,tcp_connection_request_count=0,header_order=HNKUAEL,gfe_version=2.708.2,ssl,ssl_info=TLSv1.3:RNA:T,tlsext=S,sni=www.youtube.com,hex_encoded_client_hello=130213031301c02bc02fc02cc030c013c014009c009d002f003500ff-00-0000000b000a002300160017000d002b002d00330015,c=1302,ja3=e9c665c4c41f445fa086d34bfe8fb8d8,rtt_source=tcp,rtt=0,srtt=0,client_protocol=HTTP/1.1,client_transport=tcp,gfe=aclaxg17.prod.google.com,pzf=Linux "
		"2.2.x-3.x [4:58+6:0:1460:mss*44/7:mss/sok/ts/nop/ws:df/id+:0] [generic tos:0x20],vip_region=default,asn=25820,cc=US,eid=Q-ArYIm-JdH58AfG-qywCA,scheme=https\",\"clientFormFactor\":\"UNKNOWN_FORM_FACTOR\",\"browserName\":\"Chrome\",\"browserVersion\":\"88.0.4324.150\",\"screenWidthPoints\":1536,\"screenHeightPoints\":722,\"screenPixelDensity\":1,\"screenDensityFloat\":1.25,\"utcOffsetMinutes\":480,\"userInterfaceTheme\":\"USER_INTERFACE_THEME_DARK\",\"connectionType\":\"CONN_CELLULAR_3G\",\""
		"mainAppWebInfo\":{\"graftUrl\":\"https://www.youtube.com/watch?v=5qap5aO4i9A\"},\"timeZone\":\"Asia/Shanghai\"},\"user\":{\"lockedSafetyMode\":false},\"request\":{\"useSsl\":true,\"internalExperimentFlags\":[],\"consistencyTokenJars\":[]},\"clickTracking\":{\"clickTrackingParams\":\"IhMIjPK89tfu7gIVFajECh0gHgpX\"},\"adSignalsInfo\":{\"params\":[{\"key\":\"dt\",\"value\":\"1613488224751\"},{\"key\":\"flash\",\"value\":\"0\"},{\"key\":\"frm\",\"value\":\"0\"},{\"key\":\"u_tz\",\"value\":\"480\"},{\""
		"key\":\"u_his\",\"value\":\"2\"},{\"key\":\"u_java\",\"value\":\"false\"},{\"key\":\"u_h\",\"value\":\"864\"},{\"key\":\"u_w\",\"value\":\"1536\"},{\"key\":\"u_ah\",\"value\":\"824\"},{\"key\":\"u_aw\",\"value\":\"1536\"},{\"key\":\"u_cd\",\"value\":\"24\"},{\"key\":\"u_nplug\",\"value\":\"3\"},{\"key\":\"u_nmime\",\"value\":\"4\"},{\"key\":\"bc\",\"value\":\"31\"},{\"key\":\"bih\",\"value\":\"722\"},{\"key\":\"biw\",\"value\":\"1519\"},{\"key\":\"brdim\",\"value\":\"0,0,0,0,1536,0,1536,824,1536,"
		"722\"},{\"key\":\"vis\",\"value\":\"1\"},{\"key\":\"wgl\",\"value\":\"true\"},{\"key\":\"ca_type\",\"value\":\"image\"}],\"consentBumpParams\":{\"consentHostnameOverride\":\"https://www.youtube.com\",\"urlOverride\":\"\"}},\"clientScreenNonce\":\"MC4yNTg3ODI4NjkxNTM5NzEz\"},\"feedbackTokens\":[\"AB9zfpIa1RHv8hvY5FzbGOfKjhm1yUh0szE9wGGqkWAjBZNaVu--W9MVB4uCNREX3FySpVPJB6GrvhUUhZsqCm-mb08PKsAkTVGMPYYwyrs4nY9F7iNae2B8i0LTdeiDY5NkFQHTQDPQ4QQfxKAdYUdTc7kUXqV6NcAvn66qKPemfWzsP_dEbn0\"],\""
		"isFeedbackTokenUnencrypted\":false,\"shouldMerge\":false}", 
		EXTRARES, 
		"Url=/s/desktop/3748dff5/jsbin/live_chat_polymer.vflset/live_chat_polymer.js", "Referer=https://www.youtube.com/live_chat?continuation=0ofMyANxGlhDaWtxSndvWVZVTlRTalJuYTFaRE5rNXlka2xKT0hWdGVuUm1NRTkzRWdzMWNXRndOV0ZQTkdrNVFSb1Q2cWpkdVFFTkNnczFjV0Z3TldGUE5HazVRU0FCMAGCAQIIBIgBAaAB19T9lNju7gKyAQA%253D", ENDITEM, 
		LAST);

	web_custom_request("feedback_3", 
		"URL=https://www.youtube.com/youtubei/v1/feedback?key=AIzaSyAO_FJ2SlqU8Q4STEHLGCilw_Y9_11qcW8", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.youtube.com/watch?v=5qap5aO4i9A", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context\":{\"client\":{\"hl\":\"zh-CN\",\"gl\":\"US\",\"remoteHost\":\"144.34.165.195\",\"deviceMake\":\"\",\"deviceModel\":\"\",\"visitorData\":\"CgtENFMzX0Z1QnE1ayjEwK-BBg%3D%3D\",\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.150 Safari/537.36,gzip(gfe)\",\"clientName\":\"WEB\",\"clientVersion\":\"2.20210210.08.00\",\"osName\":\"Windows\",\"osVersion\":\"10.0\",\"originalUrl\":\"https://www.youtube.com/\",\"platform\":\""
		"DESKTOP\",\"gfeFrontlineInfo\":\"vip=172.217.5.206,server_port=443,client_port=59748,tcp_connection_request_count=0,header_order=HNKUAEL,gfe_version=2.708.2,ssl,ssl_info=TLSv1.3:RNA:T,tlsext=S,sni=www.youtube.com,hex_encoded_client_hello=130213031301c02bc02fc02cc030c013c014009c009d002f003500ff-00-0000000b000a002300160017000d002b002d00330015,c=1302,ja3=e9c665c4c41f445fa086d34bfe8fb8d8,rtt_source=tcp,rtt=0,srtt=0,client_protocol=HTTP/1.1,client_transport=tcp,gfe=aclaxg17.prod.google.com,pzf=Linux "
		"2.2.x-3.x [4:58+6:0:1460:mss*44/7:mss/sok/ts/nop/ws:df/id+:0] [generic tos:0x20],vip_region=default,asn=25820,cc=US,eid=Q-ArYIm-JdH58AfG-qywCA,scheme=https\",\"clientFormFactor\":\"UNKNOWN_FORM_FACTOR\",\"browserName\":\"Chrome\",\"browserVersion\":\"88.0.4324.150\",\"screenWidthPoints\":1536,\"screenHeightPoints\":722,\"screenPixelDensity\":1,\"screenDensityFloat\":1.25,\"utcOffsetMinutes\":480,\"userInterfaceTheme\":\"USER_INTERFACE_THEME_DARK\",\"connectionType\":\"CONN_CELLULAR_3G\",\""
		"mainAppWebInfo\":{\"graftUrl\":\"https://www.youtube.com/watch?v=5qap5aO4i9A\"},\"timeZone\":\"Asia/Shanghai\"},\"user\":{\"lockedSafetyMode\":false},\"request\":{\"useSsl\":true,\"internalExperimentFlags\":[],\"consistencyTokenJars\":[]},\"clickTracking\":{\"clickTrackingParams\":\"CG8Q7W8iEwi6uvyU2O7uAhXVuMQKHT9sA6w=\"},\"adSignalsInfo\":{\"params\":[{\"key\":\"dt\",\"value\":\"1613488224751\"},{\"key\":\"flash\",\"value\":\"0\"},{\"key\":\"frm\",\"value\":\"0\"},{\"key\":\"u_tz\",\"value\":\""
		"480\"},{\"key\":\"u_his\",\"value\":\"2\"},{\"key\":\"u_java\",\"value\":\"false\"},{\"key\":\"u_h\",\"value\":\"864\"},{\"key\":\"u_w\",\"value\":\"1536\"},{\"key\":\"u_ah\",\"value\":\"824\"},{\"key\":\"u_aw\",\"value\":\"1536\"},{\"key\":\"u_cd\",\"value\":\"24\"},{\"key\":\"u_nplug\",\"value\":\"3\"},{\"key\":\"u_nmime\",\"value\":\"4\"},{\"key\":\"bc\",\"value\":\"31\"},{\"key\":\"bih\",\"value\":\"722\"},{\"key\":\"biw\",\"value\":\"1519\"},{\"key\":\"brdim\",\"value\":\"0,0,0,0,1536,0,1536,"
		"824,1536,722\"},{\"key\":\"vis\",\"value\":\"1\"},{\"key\":\"wgl\",\"value\":\"true\"},{\"key\":\"ca_type\",\"value\":\"image\"}],\"consentBumpParams\":{\"consentHostnameOverride\":\"https://www.youtube.com\",\"urlOverride\":\"\"}},\"clientScreenNonce\":\"MC4yNTg3ODI4NjkxNTM5NzEz\"},\"feedbackTokens\":[\"AB9zfpISn5J9jhEhsyJjSJGi70_md2GQ2VlXDbmrPyOR2_DyJWmibZN9nM7h75ob7g0PHgMiScXFBUEu59G7fF19D-Y3jCEvFyTyd7lWkRgLZWSA7fhEkDEu1EPBr6r555NOrRpyFEGWnRy-xAi-yvYsutbfXFbql0LV1IoS2e_0oe70nI9cFpo\"],\""
		"isFeedbackTokenUnencrypted\":false,\"shouldMerge\":false}", 
		LAST);

	web_revert_auto_header("X-Goog-Visitor-Id");

	web_revert_auto_header("X-Youtube-Client-Name");

	web_revert_auto_header("X-Youtube-Client-Version");

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("emojis-svg-5.json", 
		"URL=https://www.gstatic.com/youtube/img/emojis/emojis-svg-5.json", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.youtube.com/", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("sec-ch-ua");

	web_revert_auto_header("sec-ch-ua-mobile");

	web_add_header("X-Goog-Visitor-Id", 
		"CgtENFMzX0Z1QnE1ayiEwa-BBg%3D%3D");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_custom_request("log_event_4", 
		"URL=https://www.youtube.com/youtubei/v1/log_event?alt=json&key=AIzaSyAO_FJ2SlqU8Q4STEHLGCilw_Y9_11qcW8", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.youtube.com/sw.js", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context\":{\"client\":{\"clientName\":1,\"clientVersion\":\"2.20210210.08.00\"}},\"events\":[{\"eventTimeMs\":1613488266810,\"appShellAssetLoadReport\":{\"assetPath\":\"https://www.youtube.com/s/player/490079fb/player_ias.vflset/zh_CN/endscreen.js\",\"cacheHit\":true},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488266811,\"appShellAssetLoadReport\":{\"assetPath\":\"https://www.youtube.com/s/player/490079fb/player_ias.vflset/zh_CN/annotations_module.js\",\"cacheHit\":false"
		",\"currentAppBundleTimestampSec\":\"1613488266\",\"appBundleVersionDiffCount\":-1},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488266811,\"appShellAssetLoadReport\":{\"assetPath\":\"https://www.youtube.com/s/player/490079fb/player_ias.vflset/zh_CN/heartbeat.js\",\"cacheHit\":false,\"currentAppBundleTimestampSec\":\"1613488266\",\"appBundleVersionDiffCount\":-1},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488267771,\"appShellAssetLoadReport\":{\"assetPath\":\""
		"https://www.youtube.com/s/player/490079fb/player_ias.vflset/zh_CN/captions.js\",\"cacheHit\":true},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488268561,\"appShellAssetLoadReport\":{\"assetPath\":\"https://www.youtube.com/s/desktop/3748dff5/jsbin/scheduler.vflset/scheduler.js\",\"cacheHit\":true},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488268561,\"appShellAssetLoadReport\":{\"assetPath\":\"https://www.youtube.com/s/desktop/3748dff5/jsbin/network.vflset/"
		"network.js\",\"cacheHit\":true},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488268562,\"appShellAssetLoadReport\":{\"assetPath\":\"https://www.youtube.com/s/desktop/3748dff5/jsbin/web-animations-next-lite.min.vflset/web-animations-next-lite.min.js\",\"cacheHit\":true},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488268562,\"appShellAssetLoadReport\":{\"assetPath\":\"https://www.youtube.com/s/desktop/3748dff5/jsbin/custom-elements-es5-adapter.vflset/"
		"custom-elements-es5-adapter.js\",\"cacheHit\":true},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488268563,\"appShellAssetLoadReport\":{\"assetPath\":\"https://www.youtube.com/s/desktop/3748dff5/jsbin/webcomponents-sd.vflset/webcomponents-sd.js\",\"cacheHit\":true},\"context\":{\"lastActivityMs\":\"-1\"}},{\"eventTimeMs\":1613488268579,\"appShellAssetLoadReport\":{\"assetPath\":\"https://www.youtube.com/s/desktop/3748dff5/jsbin/live_chat_polymer.vflset/live_chat_polymer.js\",\""
		"cacheHit\":false,\"currentAppBundleTimestampSec\":\"1613488266\",\"appBundleVersionDiffCount\":-1},\"context\":{\"lastActivityMs\":\"-1\"}}],\"requestTimeMs\":\"1613488278580\"}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"same-origin");

	web_add_header("X-Goog-Visitor-Id", 
		"CgtENFMzX0Z1QnE1ayiMwa-BBg%3D%3D");

	web_add_header("X-Youtube-Client-Name", 
		"1");

	web_add_header("X-Youtube-Client-Version", 
		"2.20210210.08.00");

	web_add_auto_header("sec-ch-ua", 
		"\"Chromium\";v=\"88\", \"Google Chrome\";v=\"88\", \";Not A Brand\";v=\"99\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_custom_request("get_live_chat", 
		"URL=https://www.youtube.com/youtubei/v1/live_chat/get_live_chat?key=AIzaSyAO_FJ2SlqU8Q4STEHLGCilw_Y9_11qcW8", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.youtube.com/live_chat?continuation=0ofMyANxGlhDaWtxSndvWVZVTlRTalJuYTFaRE5rNXlka2xKT0hWdGVuUm1NRTkzRWdzMWNXRndOV0ZQTkdrNVFSb1Q2cWpkdVFFTkNnczFjV0Z3TldGUE5HazVRU0FCMAGCAQIIBIgBAaAB19T9lNju7gKyAQA%253D", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context\":{\"client\":{\"hl\":\"zh-CN\",\"gl\":\"US\",\"remoteHost\":\"144.34.165.195\",\"deviceMake\":\"\",\"deviceModel\":\"\",\"visitorData\":\"CgtENFMzX0Z1QnE1ayiMwa-BBg%3D%3D\",\"userAgent\":\"Mozilla/5.0 (Windows NT 10.0; Win64; x64) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/88.0.4324.150 Safari/537.36,gzip(gfe)\",\"clientName\":\"WEB\",\"clientVersion\":\"2.20210210.08.00\",\"osName\":\"Windows\",\"osVersion\":\"10.0\",\"originalUrl\":\"https://www.youtube.com/live_chat?"
		"continuation=0ofMyANxGlhDaWtxSndvWVZVTlRTalJuYTFaRE5rNXlka2xKT0hWdGVuUm1NRTkzRWdzMWNXRndOV0ZQTkdrNVFSb1Q2cWpkdVFFTkNnczFjV0Z3TldGUE5HazVRU0FCMAGCAQIIBIgBAaAB19T9lNju7gKyAQA%253D\",\"screenPixelDensity\":1,\"platform\":\"DESKTOP\",\"gfeFrontlineInfo\":\"vip=172.217.4.142,server_port=443,client_port=51660,tcp_connection_request_count=4,header_order=HNKUARELC,gfe_version=2.707.2,ssl,ssl_info=TLSv1.3:RNA:T,tlsext=S,sni=www.youtube.com,hex_encoded_client_hello="
		"130213031301c02bc02fc02cc030c013c014009c009d002f003500ff-00-0000000b000a002300160017000d002b002d00330015,c=1302,ja3=e9c665c4c41f445fa086d34bfe8fb8d8,rtt_source=tcp,rtt=0,srtt=0,client_protocol=HTTP/1.1,client_transport=tcp,gfe=aclaxc7.prod.google.com,pzf=Linux 2.2.x-3.x [4:58+6:0:1460:mss*44/7:mss/sok/ts/nop/ws:df/id+:0] [generic tos:0x20],vip_region=default,asn=25820,cc=US,eid=i-ArYOjzFOfV8wf9m7aQCA,scheme=https\",\"clientFormFactor\":\"UNKNOWN_FORM_FACTOR\",\"screenDensityFloat\":1.25,\""
		"timeZone\":\"Asia/Shanghai\",\"browserName\":\"Chrome\",\"browserVersion\":\"88.0.4324.150\",\"screenWidthPoints\":400,\"screenHeightPoints\":562,\"utcOffsetMinutes\":480,\"userInterfaceTheme\":\"USER_INTERFACE_THEME_DARK\",\"connectionType\":\"CONN_CELLULAR_3G\",\"mainAppWebInfo\":{\"graftUrl\":\"https://www.youtube.com/live_chat?continuation="
		"0ofMyANxGlhDaWtxSndvWVZVTlRTalJuYTFaRE5rNXlka2xKT0hWdGVuUm1NRTkzRWdzMWNXRndOV0ZQTkdrNVFSb1Q2cWpkdVFFTkNnczFjV0Z3TldGUE5HazVRU0FCMAGCAQIIBIgBAaAB19T9lNju7gKyAQA%253D\"}},\"user\":{\"lockedSafetyMode\":false},\"request\":{\"useSsl\":true,\"internalExperimentFlags\":[],\"consistencyTokenJars\":[]},\"clickTracking\":{\"clickTrackingParams\":\"CAEQl98BIhMIzY7HmNju7gIVIcUWCR19DQRt\"},\"clientScreenNonce\":\"MC4yNTg3ODI4NjkxNTM5NzEz\",\"adSignalsInfo\":{\"params\":[{\"key\":\"dt\",\"value\":\""
		"1613488271440\"},{\"key\":\"flash\",\"value\":\"0\"},{\"key\":\"frm\",\"value\":\"1\"},{\"key\":\"u_tz\",\"value\":\"480\"},{\"key\":\"u_his\",\"value\":\"2\"},{\"key\":\"u_java\",\"value\":\"false\"},{\"key\":\"u_h\",\"value\":\"864\"},{\"key\":\"u_w\",\"value\":\"1536\"},{\"key\":\"u_ah\",\"value\":\"824\"},{\"key\":\"u_aw\",\"value\":\"1536\"},{\"key\":\"u_cd\",\"value\":\"24\"},{\"key\":\"u_nplug\",\"value\":\"3\"},{\"key\":\"u_nmime\",\"value\":\"4\"},{\"key\":\"bc\",\"value\":\"31\"},{\"key"
		"\":\"bih\",\"value\":\"722\"},{\"key\":\"biw\",\"value\":\"1519\"},{\"key\":\"brdim\",\"value\":\"0,0,0,0,1536,0,1536,824,400,562\"},{\"key\":\"vis\",\"value\":\"2\"},{\"key\":\"wgl\",\"value\":\"true\"},{\"key\":\"ca_type\",\"value\":\"image\"}]}},\"continuation\":\"0ofMyAOnARpYQ2lrcUp3b1lWVU5UU2pSbmExWkROazV5ZGtsSk9IVnRlblJtTUU5M0VnczFjV0Z3TldGUE5HazVRUm9UNnFqZHVRRU5DZ3MxY1dGd05XRlBOR2s1UVNBQiierMiX2O7uAjAAOABAAUoVCAEQABgAIABQzpbHmNju7gJYA3gAUK6L65fY7u4CWPihhezi7O4CggECCASIAQCgAb-0yJjY7u4CsgEA\""
		",\"webClientInfo\":{\"isDocumentHidden\":true}}", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_custom_request("qoe_2", 
		"URL=https://www.youtube.com/api/stats/qoe?event=streamingstats&fmt=397&afmt=251&cpn=4CvEW64ZNHQUbNLO&ei=i-ArYMGhDvD-kgab_qm4BQ&el=adunit&docid=eAQPH0lsGeE&content_v=5qap5aO4i9A&ns=yt&fexp=23857949%2C23890959%2C23969934%2C23976578%2C23983297%2C23986017%2C23992808%2C24000882%2C24003310&cl=356830393&adformat=15_2_1&seq=1&cbr=Chrome&cbrver=88.0.4324.150&c=WEB&cver=2.20210210.08.00&cplayer=UNIPLAYER&cos=Windows&cosver=10.0&cplatform=DESKTOP&vps=0.000:N,0.936:N&afs=0.936:251::i&vfs=0.936:397:247::r&view"
		"=0.936:900:506:1.25&bwe=0.936:130000&bat=0.936:0.94:1&vis=0.936:0&cmt=0.936:0.000&bh=0.936:0.000", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.youtube.com/watch?v=5qap5aO4i9A", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		"EncType=text/plain;charset=UTF-8", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_add_header("X-Goog-Visitor-Id", 
		"CgtENFMzX0Z1QnE1ayiMwa-BBg%3D%3D");

	web_add_header("X-YouTube-Ad-Signals", 
		"dt=1613488271440&flash=0&frm=1&u_tz=480&u_his=2&u_java&u_h=864&u_w=1536&u_ah=824&u_aw=1536&u_cd=24&u_nplug=3&u_nmime=4&bc=31&bih=722&biw=1519&brdim=0%2C0%2C0%2C0%2C1536%2C0%2C1536%2C824%2C400%2C562&vis=1&wgl=true&ca_type=image");

	web_add_header("X-YouTube-Client-Name", 
		"1");

	web_add_header("X-YouTube-Client-Version", 
		"2.20210210.08.00");

	web_add_header("X-YouTube-Device", 
		"cbr=Chrome&cbrver=88.0.4324.150&ceng=WebKit&cengver=537.36&cos=Windows&cosver=10.0&cplatform=DESKTOP");

	web_add_header("X-YouTube-Page-CL", 
		"356775446");

	web_add_header("X-YouTube-Page-Label", 
		"youtube.desktop.web_20210210_08_RC00");

	web_add_header("X-YouTube-Time-Zone", 
		"Asia/Shanghai");

	web_add_header("X-YouTube-Utc-Offset", 
		"480");

	web_custom_request("log_event_5", 
		"URL=https://www.youtube.com/youtubei/v1/log_event?alt=json&key=AIzaSyAO_FJ2SlqU8Q4STEHLGCilw_Y9_11qcW8", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.youtube.com/live_chat?continuation=0ofMyANxGlhDaWtxSndvWVZVTlRTalJuYTFaRE5rNXlka2xKT0hWdGVuUm1NRTkzRWdzMWNXRndOV0ZQTkdrNVFSb1Q2cWpkdVFFTkNnczFjV0Z3TldGUE5HazVRU0FCMAGCAQIIBIgBAaAB19T9lNju7gKyAQA%253D", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		"EncType=application/json", 
		"Body={\"context\":{\"client\":{\"hl\":\"zh-CN\",\"gl\":\"US\",\"clientName\":1,\"clientVersion\":\"2.20210210.08.00\",\"configInfo\":{\"appInstallData\":\"CIzBr4EGEJH4/BI=\"},\"screenDensityFloat\":\"1.25\",\"browserName\":\"Chrome\",\"browserVersion\":\"88.0.4324.150\",\"osName\":\"Windows\",\"osVersion\":\"10.0\",\"platform\":\"DESKTOP\"}},\"events\":[{\"eventTimeMs\":1613488271838,\"visualElementShown\":{\"csn\":\"MC4yNTg3ODI4NjkxNTM5NzEz\",\"ve\":{\"trackingParams\":\""
		"CAEQl98BIhMIzY7HmNju7gIVIcUWCR19DQRt\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"330\"}},{\"eventTimeMs\":1613488271839,\"visualElementShown\":{\"csn\":\"MC4yNTg3ODI4NjkxNTM5NzEz\",\"ve\":{\"trackingParams\":\"CBAQ8FsiEwjNjseY2O7uAhUhxRYJHX0NBG0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"331\"}},{\"eventTimeMs\":1613488271840,\"visualElementShown\":{\"csn\":\"MC4yNTg3ODI4NjkxNTM5NzEz\",\"ve\":{\"trackingParams\":\"CA8Q8FsiEwjNjseY2O7uAhUhxRYJHX0NBG0=\"},\"eventType\":1},\""
		"context\":{\"lastActivityMs\":\"332\"}},{\"eventTimeMs\":1613488271841,\"visualElementShown\":{\"csn\":\"MC4yNTg3ODI4NjkxNTM5NzEz\",\"ve\":{\"trackingParams\":\"CA4Q8FsiEwjNjseY2O7uAhUhxRYJHX0NBG0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"332\"}},{\"eventTimeMs\":1613488271841,\"visualElementShown\":{\"csn\":\"MC4yNTg3ODI4NjkxNTM5NzEz\",\"ve\":{\"trackingParams\":\"CAwQtIkEGAgiEwjNjseY2O7uAhUhxRYJHX0NBG0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"333\"}},{\"eventTimeMs\""
		":1613488271841,\"visualElementShown\":{\"csn\":\"MC4yNTg3ODI4NjkxNTM5NzEz\",\"ve\":{\"trackingParams\":\"CAoQljsiEwjNjseY2O7uAhUhxRYJHX0NBG0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"333\"}},{\"eventTimeMs\":1613488271841,\"visualElementShown\":{\"csn\":\"MC4yNTg3ODI4NjkxNTM5NzEz\",\"ve\":{\"trackingParams\":\"CAsQ8FsiEwjNjseY2O7uAhUhxRYJHX0NBG0=\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"333\"}},{\"eventTimeMs\":1613488271841,\"visualElementShown\":{\"csn\":\""
		"MC4yNTg3ODI4NjkxNTM5NzEz\",\"ve\":{\"trackingParams\":\"CAUQgdoEIhMIzY7HmNju7gIVIcUWCR19DQRt\"},\"eventType\":1},\"context\":{\"lastActivityMs\":\"333\"}},{\"eventTimeMs\":1613488271842,\"foregroundHeartbeatScreenAssociated\":{\"clientDocumentNonce\":\"WUVKPH6Km0qkgjB1\",\"clientScreenNonce\":\"MC4yNTg3ODI4NjkxNTM5NzEz\"},\"context\":{\"lastActivityMs\":\"334\"}}],\"requestTimeMs\":\"1613488282211\",\"serializedClientEventId\":{\"serializedEventId\":\"jOArYO-8BYqL2_gP4cWTyA4\",\"clientCounter\":\""
		"15085\"}}", 
		EXTRARES, 
		"Url=/get_video_info?html5=1&video_id=hQCq1EXUHHc&cpn=v9lxY5lza8Nqgx5J&eurl&ps=desktop-polymer&el=adunit&hl=zh_CN&aqi=hOArYIa3JfqWn88Pt6KliAM&sts=18669&lact=185&cbr=Chrome&cbrver=88.0.4324.150&c=WEB&cver=2.20210210.08.00&cplayer=UNIPLAYER&cos=Windows&cosver=10.0&cplatform=DESKTOP&adformat=15_2_1&slot_pos=1&break_type=1&encoded_ad_playback_context=CA8QAhgBKgs1cWFwNWFPNGk5QUIXaE9BcllJYTNKZnFXbjg4UHQ2S2xpQU1YAWABdSq4ez-AAdiwAooDJzABOAVKEwiGif6U2O7uAhV6y-cDHTdRCTFSBhABQAJIAVgCaAFwLJADm9fZvPcM&"
		"iv_load_policy=1&autoplay=1&width=900&height=506&content_v=5qap5aO4i9A&living_room_app_mode=LIVING_ROOM_APP_MODE_UNSPECIFIED", "Referer=https://www.youtube.com/watch?v=5qap5aO4i9A", ENDITEM, 
		LAST);

	return 0;
}