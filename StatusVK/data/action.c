Action()
{

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("vk.com", 
		"URL=https://vk.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("remixlang=0; DOMAIN=vk.com");

	web_add_cookie("remixstid=667263334_5185a5e8175327b58e; DOMAIN=vk.com");

	web_add_cookie("remixlhk=8da8ee37b8dae3e39e; DOMAIN=vk.com");

	web_add_cookie("remixflash=0.0.0; DOMAIN=vk.com");

	web_add_cookie("remixscreen_depth=24; DOMAIN=vk.com");

	web_add_cookie("remixdt=0; DOMAIN=vk.com");

	web_add_cookie("tmr_detect=1%7C1511941553797; DOMAIN=vk.com");

	web_add_cookie("remixq_0bd9e930a1054c0e8c0b3aaf8bf16bcf=33b4513aca9ca0751c; DOMAIN=vk.com");

	lr_start_transaction("01_login");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_submit_data("login.vk.com", 
		"Action=https://login.vk.com/?act=login", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t2.inf", 
		"Mode=HTML", 
		"EncodeAtSign=YES", 
		ITEMDATA, 
		"Name=act", "Value=login", ENDITEM, 
		"Name=role", "Value=al_frame", ENDITEM, 
		"Name=expire", "Value=", ENDITEM, 
		"Name=recaptcha", "Value=", ENDITEM, 
		"Name=captcha_sid", "Value=", ENDITEM, 
		"Name=captcha_key", "Value=", ENDITEM, 
		"Name=_origin", "Value=https://vk.com", ENDITEM, 
		"Name=ip_h", "Value=8518eb9e04199d4c97", ENDITEM, 
		"Name=lg_h", "Value=d9118bc40b1ed0f387", ENDITEM, 
		"Name=email", "Value=inna67rus@gmail.com", ENDITEM, 
		"Name=pass", "Value=966OI&(a", ENDITEM, 
		LAST);

	web_add_cookie("remixsid=968ee80300a9c77ef40bf3257b8a07967545e3aac078defb57692; DOMAIN=vk.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_im.php", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_get_comms_key", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("notifier.php", 
		"URL=https://vk.com/notifier.php?act=storage_frame&from=vk.com&4", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_url("vk.com_2", 
		"URL=https://vk.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("remixflash=0.0.0; DOMAIN=queuev4.vk.com");

	web_add_cookie("remixscreen_depth=24; DOMAIN=queuev4.vk.com");

	web_add_cookie("remixdt=0; DOMAIN=queuev4.vk.com");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("q_frame.php", 
		"URL=https://queuev4.vk.com/q_frame.php?7", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("remixsts=%7B%22data%22%3A%5B%5B1511941586%2C%22feed_switch%22%2C0%2C%22top_news%22%2C3%5D%5D%2C%22uniqueId%22%3A889538818%7D; DOMAIN=vk.com");

	web_add_header("Origin", 
		"https://vk.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_feed.php", 
		"Action=https://vk.com/al_feed.php?queue", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_get_key", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=need_ignore", "Value=1", ENDITEM, 
		"Name=only_update", "Value=0", ENDITEM, 
		"Name=section", "Value=news", ENDITEM, 
		"Name=subsection", "Value=top", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("notifier.php_2", 
		"URL=https://vk.com/notifier.php?act=storage_frame&from=vk.com&4", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_add_cookie("tmr_detect=1%7C1511941587434; DOMAIN=vk.com");

	web_add_cookie("remixsts=%7B%22data%22%3A%5B%5B1511941588%2C%22feed_init_video_autoplay%22%2C%22good_browser%22%5D%5D%2C%22uniqueId%22%3A274733806%7D; DOMAIN=vk.com");

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_im.php_2", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_get_fast_chat", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=cache_time", "Value=0", ENDITEM, 
		LAST);

	web_submit_data("al_im.php_3", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_stickers_list", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=cache_time", "Value=0", ENDITEM, 
		"Name=need_keywords", "Value=1", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("q_frame.php_2", 
		"URL=https://queuev4.vk.com/q_frame.php?7", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://queuev4.vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("im200", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjx", ENDITEM, 
		"Name=ts", "Value=1142777072_436001896_472560326_141716347", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_2", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjx", ENDITEM, 
		"Name=ts", "Value=1142777073_436001897_472560327_141716348", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_3", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjx", ENDITEM, 
		"Name=ts", "Value=1142777074_436001898_472560328_141716349", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_4", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjx", ENDITEM, 
		"Name=ts", "Value=1142777075_436001899_472560329_141716350", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	lr_end_transaction("01_login",LR_AUTO);

	web_submit_data("im200_5", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjx", ENDITEM, 
		"Name=ts", "Value=1142777076_436001900_472560330_141716351", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_6", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjx", ENDITEM, 
		"Name=ts", "Value=1142777077_436001901_472560331_141716352", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_7", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjx", ENDITEM, 
		"Name=ts", "Value=1142777078_436001902_472560332_141716353", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_8", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjx", ENDITEM, 
		"Name=ts", "Value=1142777079_436001903_472560333_141716354", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_9", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjx", ENDITEM, 
		"Name=ts", "Value=1142777080_436001904_472560334_141716355", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	lr_start_transaction("02_my_page");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_submit_data("im200_10", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjx", ENDITEM, 
		"Name=ts", "Value=1142777081_436001905_472560335_141716356", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("al_profile.php", 
		"URL=https://vk.com/al_profile.php?__query=innapush&_ref=left_nav&al=-1&al_id=44752200&_rndVer=14610", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://queuev4.vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("im200_11", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t23.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjx", ENDITEM, 
		"Name=ts", "Value=1142777082_436001906_472560336_141716357", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_12", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_release", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjxjmKQGmrgDad9KoJ2luWlP40T3CjDtMpVP6K_oEh9golCTWlCWaVivHBylEsnLpFg", ENDITEM, 
		"Name=ts", "Value=1142777083_436001907_472560337_141716358_460735309", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_13", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t25.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjxjmKQGmrgDad9KoJ2luWlP40T3CjDtMpVP6K_oEh9golCTWlCWaVivHBylEsnLpFg", ENDITEM, 
		"Name=ts", "Value=1142777083_436001907_472560337_141716358_460735309", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_14", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t26.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjxjmKQGmrgDad9KoJ2luWlP40T3CjDtMpVP6K_oEh9golCTWlCWaVivHBylEsnLpFg", ENDITEM, 
		"Name=ts", "Value=1142777084_436001908_472560338_141716359_460735310", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_15", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjxjmKQGmrgDad9KoJ2luWlP40T3CjDtMpVP6K_oEh9golCTWlCWaVivHBylEsnLpFg", ENDITEM, 
		"Name=ts", "Value=1142777085_436001909_472560339_141716360_460735311", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_16", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t28.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjxjmKQGmrgDad9KoJ2luWlP40T3CjDtMpVP6K_oEh9golCTWlCWaVivHBylEsnLpFg", ENDITEM, 
		"Name=ts", "Value=1142777086_436001910_472560340_141716361_460735312", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_17", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjxjmKQGmrgDad9KoJ2luWlP40T3CjDtMpVP6K_oEh9golCTWlCWaVivHBylEsnLpFg", ENDITEM, 
		"Name=ts", "Value=1142777087_436001911_472560341_141716362_460735313", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_18", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjxjmKQGmrgDad9KoJ2luWlP40T3CjDtMpVP6K_oEh9golCTWlCWaVivHBylEsnLpFg", ENDITEM, 
		"Name=ts", "Value=1142777088_436001912_472560342_141716363_460735314", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_19", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjxjmKQGmrgDad9KoJ2luWlP40T3CjDtMpVP6K_oEh9golCTWlCWaVivHBylEsnLpFg", ENDITEM, 
		"Name=ts", "Value=1142777089_436001913_472560343_141716364_460735315", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_20", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjxjmKQGmrgDad9KoJ2luWlP40T3CjDtMpVP6K_oEh9golCTWlCWaVivHBylEsnLpFg", ENDITEM, 
		"Name=ts", "Value=1142777090_436001914_472560344_141716365_460735316", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_21", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjxjmKQGmrgDad9KoJ2luWlP40T3CjDtMpVP6K_oEh9golCTWlCWaVivHBylEsnLpFg", ENDITEM, 
		"Name=ts", "Value=1142777091_436001915_472560345_141716366_460735317", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_22", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLa1YcinN5i5KCgUiYcZ1SqNQW7DsAVEESXrgCTi0cfCauuOERpxgSxau6W9N8nZC6EH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjxjmKQGmrgDad9KoJ2luWlP40T3CjDtMpVP6K_oEh9golCTWlCWaVivHBylEsnLpFg", ENDITEM, 
		"Name=ts", "Value=1142777092_436001916_472560346_141716367_460735318", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	lr_end_transaction("02_my_page",LR_AUTO);

	lr_start_transaction("03_change_status");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Origin", 
		"https://queuev4.vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("im200_23", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t35.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLEH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjxjmKQGmrgDad9KoJ2luWlP40T3CjDtMpVP6K_oEh9golCTWlCWaVivHBylEsnLpFg", ENDITEM, 
		"Name=ts", "Value=1142777093_472560347_141716368_460735319", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://vk.com");

	lr_think_time(5);

	web_submit_data("al_page.php", 
		"Action=https://vk.com/al_page.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/innapush", 
		"Snapshot=t36.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=current_info", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=hash", "Value=67b9ec9ec1f7c2c0b0", ENDITEM, 
		"Name=info", "Value=Test_1234", ENDITEM, 
		"Name=oid", "Value=44752200", ENDITEM, 
		LAST);

	web_add_header("Origin", 
		"https://queuev4.vk.com");

	web_submit_data("im200_24", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t37.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=cM58ZVBWTnTWSsOjpUW5FJRk5Izud9lqlehJEHOukVdC4wvqiJRD4nNlmxiq0HZLEH3CjdKHJV2AGAeGQEJJT5ucyzAxhLS2BWDoemz8MFEZJMdCLuAD6OTSicMz1C9Psf3V5a9DvFm4tN3_EsS5Uz1dJbC22MrEghmmdmCBe5LbywIneyGtSbadQmSCZdjxjmKQGmrgDad9KoJ2luWlP40T3CjDtMpVP6K_oEh9golCTWlCWaVivHBylEsnLpFg", ENDITEM, 
		"Name=ts", "Value=1142777094_472560348_141716369_460735320", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	lr_end_transaction("03_change_status",LR_AUTO);

	lr_start_transaction("04_logout");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("login.vk.com_2", 
		"URL=https://login.vk.com/?act=logout&hash=911588a3651b8c28d3&reason=tn&_origin=https://vk.com", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/innapush", 
		"Snapshot=t38.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("04_logout",LR_AUTO);

	return 0;
}