Action()
{

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

	web_add_cookie("remixstid=210511854_3e8ab78a06827e149c; DOMAIN=vk.com");

	web_add_cookie("remixlhk=d1ebc490adb58dba6f; DOMAIN=vk.com");

	web_add_cookie("remixflash=0.0.0; DOMAIN=vk.com");

	web_add_cookie("remixscreen_depth=24; DOMAIN=vk.com");

	web_add_cookie("remixdt=0; DOMAIN=vk.com");

	web_add_cookie("tmr_detect=1%7C1510323877757; DOMAIN=vk.com");

	web_add_cookie("remixq_a07adf53512ab4f3b8ba074fb8ea80c4=ec0e3e27d773f32017; DOMAIN=vk.com");

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	lr_start_transaction("01_login");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_header("Origin", 
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
		"Name=ip_h", "Value=49d7a6cf0d1dc6040c", ENDITEM, 
		"Name=lg_h", "Value=f10f28c7636be6668a", ENDITEM, 
		"Name=email", "Value=inna67rus@gmail.com", ENDITEM, 
		"Name=pass", "Value=966OI&(a", ENDITEM, 
		LAST);

	web_add_cookie("remixsid=87d0975c381d2b6e3321139187a5184ee091b0d644b1112b43e8f; DOMAIN=vk.com");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("notifier.php", 
		"URL=https://vk.com/notifier.php?act=storage_frame&from=vk.com&4", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t3.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://vk.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_im.php", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_get_comms_key", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		LAST);

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("vk.com_2", 
		"URL=https://vk.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);

	web_url("notifier.php_2", 
		"URL=https://vk.com/notifier.php?act=storage_frame&from=vk.com&4", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Upgrade-Insecure-Requests");

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_add_auto_header("X-Requested-With", 
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
		"Name=subsection", "Value=recent", ENDITEM, 
		LAST);

	web_add_cookie("remixsts=%7B%22data%22%3A%5B%5B1510323974%2C%22feed_init_video_autoplay%22%2C%22bad_browser%22%5D%5D%2C%22uniqueId%22%3A225664480%7D; DOMAIN=vk.com");

	web_add_cookie("tmr_detect=1%7C1510323974456; DOMAIN=vk.com");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_submit_data("al_im.php_2", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_get_fast_chat", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=cache_time", "Value=0", ENDITEM, 
		LAST);

	web_add_cookie("remixdt=0; DOMAIN=queuev4.vk.com");

	web_add_cookie("remixflash=0.0.0; DOMAIN=queuev4.vk.com");

	web_add_cookie("remixscreen_depth=24; DOMAIN=queuev4.vk.com");

	web_add_cookie("remixsts=%7B%22data%22%3A%5B%5B1510323974%2C%22feed_init_video_autoplay%22%2C%22bad_browser%22%5D%5D%2C%22uniqueId%22%3A225664480%7D; DOMAIN=queuev4.vk.com");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("q_frame.php", 
		"URL=https://queuev4.vk.com/q_frame.php?7", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

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

	web_submit_data("notifier.php_3", 
		"Action=https://vk.com/notifier.php?act=a_reset", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
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
		"Name=key", "Value=_19FIVm3nDyJyo0NTnMl19bBmO1MYk8JPdQPs0d7a5S_X4kVshH3D58sKokMiZ7wogWFSLkXNoBNqFEuH4EV2dE_a9PCngXdTwY_7i5bWoYRDMmpMLIjeJ4fj9bzApcGDdZn6nd0eJdtdQNE3AqZ6yBUM7e2JHxZJayc7AXsUwpCKgQZsid856vrRChdV3e0gsiWViBktQCFoXJjOPvCBnoAn8wCh0cMfNNvqfjMLFCC22ym9zCcYJQjys9jHzC3", ENDITEM, 
		"Name=ts", "Value=1167794259_362380746_1176781575_424438499", ENDITEM, 
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
		"Name=key", "Value=_19FIVm3nDyJyo0NTnMl19bBmO1MYk8JPdQPs0d7a5S_X4kVshH3D58sKokMiZ7wogWFSLkXNoBNqFEuH4EV2dE_a9PCngXdTwY_7i5bWoYRDMmpMLIjeJ4fj9bzApcGDdZn6nd0eJdtdQNE3AqZ6yBUM7e2JHxZJayc7AXsUwpCKgQZsid856vrRChdV3e0gsiWViBktQCFoXJjOPvCBnoAn8wCh0cMfNNvqfjMLFCC22ym9zCcYJQjys9jHzC3", ENDITEM, 
		"Name=ts", "Value=1167794260_362380747_1176781576_424438500", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	lr_end_transaction("01_login",LR_AUTO);

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
		"Name=key", "Value=_19FIVm3nDyJyo0NTnMl19bBmO1MYk8JPdQPs0d7a5S_X4kVshH3D58sKokMiZ7wogWFSLkXNoBNqFEuH4EV2dE_a9PCngXdTwY_7i5bWoYRDMmpMLIjeJ4fj9bzApcGDdZn6nd0eJdtdQNE3AqZ6yBUM7e2JHxZJayc7AXsUwpCKgQZsid856vrRChdV3e0gsiWViBktQCFoXJjOPvCBnoAn8wCh0cMfNNvqfjMLFCC22ym9zCcYJQjys9jHzC3", ENDITEM, 
		"Name=ts", "Value=1167794261_362380748_1176781577_424438501", ENDITEM, 
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
		"Name=key", "Value=_19FIVm3nDyJyo0NTnMl19bBmO1MYk8JPdQPs0d7a5S_X4kVshH3D58sKokMiZ7wogWFSLkXNoBNqFEuH4EV2dE_a9PCngXdTwY_7i5bWoYRDMmpMLIjeJ4fj9bzApcGDdZn6nd0eJdtdQNE3AqZ6yBUM7e2JHxZJayc7AXsUwpCKgQZsid856vrRChdV3e0gsiWViBktQCFoXJjOPvCBnoAn8wCh0cMfNNvqfjMLFCC22ym9zCcYJQjys9jHzC3", ENDITEM, 
		"Name=ts", "Value=1167794262_362380749_1176781578_424438502", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

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
		"Name=key", "Value=_19FIVm3nDyJyo0NTnMl19bBmO1MYk8JPdQPs0d7a5S_X4kVshH3D58sKokMiZ7wogWFSLkXNoBNqFEuH4EV2dE_a9PCngXdTwY_7i5bWoYRDMmpMLIjeJ4fj9bzApcGDdZn6nd0eJdtdQNE3AqZ6yBUM7e2JHxZJayc7AXsUwpCKgQZsid856vrRChdV3e0gsiWViBktQCFoXJjOPvCBnoAn8wCh0cMfNNvqfjMLFCC22ym9zCcYJQjys9jHzC3", ENDITEM, 
		"Name=ts", "Value=1167794263_362380750_1176781579_424438503", ENDITEM, 
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
		"Name=key", "Value=_19FIVm3nDyJyo0NTnMl19bBmO1MYk8JPdQPs0d7a5S_X4kVshH3D58sKokMiZ7wogWFSLkXNoBNqFEuH4EV2dE_a9PCngXdTwY_7i5bWoYRDMmpMLIjeJ4fj9bzApcGDdZn6nd0eJdtdQNE3AqZ6yBUM7e2JHxZJayc7AXsUwpCKgQZsid856vrRChdV3e0gsiWViBktQCFoXJjOPvCBnoAn8wCh0cMfNNvqfjMLFCC22ym9zCcYJQjys9jHzC3", ENDITEM, 
		"Name=ts", "Value=1167794264_362380751_1176781580_424438504", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	lr_start_transaction("02_page");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Origin", 
		"https://queuev4.vk.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

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
		"Name=key", "Value=_19FIVm3nDyJyo0NTnMl19bBmO1MYk8JPdQPs0d7a5S_X4kVshH3D58sKokMiZ7wogWFSLkXNoBNqFEuH4EV2dE_a9PCngXdTwY_7i5bWoYRDMmpMLIjeJ4fj9bzApcGDdZn6nd0eJdtdQNE3AqZ6yBUM7e2JHxZJayc7AXsUwpCKgQZsid856vrRChdV3e0gsiWViBktQCFoXJjOPvCBnoAn8wCh0cMfNNvqfjMLFCC22ym9zCcYJQjys9jHzC3", ENDITEM, 
		"Name=ts", "Value=1167794265_362380752_1176781581_424438505", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("al_profile.php", 
		"URL=https://vk.com/al_profile.php?__query=innapush&_ref=left_nav&al=-1&al_id=44752200&_rndVer=27945", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://queuev4.vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("im200_8", 
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
		"Name=key", "Value=_19FIVm3nDyJyo0NTnMl19bBmO1MYk8JPdQPs0d7a5S_X4kVshH3D58sKokMiZ7wogWFSLkXNoBNqFEuH4EV2dE_a9PCngXdTwY_7i5bWoYRDMmpMLIjeJ4fj9bzApcGDdZn6nd0eJdtdQNE3AqZ6yBUM7e2JHxZJayc7AXsUwpCKgQZsid856vrRChdV3e0gsiWViBktQCFoXJjOPvCBnoAn8wCh0cMfNNvqfjMLFCC22ym9zCcYJQjys9jHzC3", ENDITEM, 
		"Name=ts", "Value=1167794266_362380753_1176781582_424438506", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_9", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_release", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=_19FIVm3nDyJyo0NTnMl19bBmO1MYk8JPdQPs0d7a5S_X4kVshH3D58sKokMiZ7wogWFSLkXNoBNqFEuH4EV2dE_a9PCngXdTwY_7i5bWoYRDMmpMLIjeJ4fj9bzApcGDdZn6nd0eJdtdQNE3AqZ6yBUM7e2JHxZJayc7AXsUwpCKgQZsid856vrRChdV3e0gsiWViBktQCFoXJjOPvCBnoAn8wCh0cMfNNvqfjMLFCC22ym9zCcYJQjys9jHzC3Gv042X4BJ0cSVfBW9PjrQtdX1tbfZquY3qBTnaWleRVIrdQroJLZFuswcZqmM3j3", ENDITEM, 
		"Name=ts", "Value=1167794267_362380754_1176781583_424438507_1127310971", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_10", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t22.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=_19FIVm3nDyJyo0NTnMl19bBmO1MYk8JPdQPs0d7a5S_X4kVshH3D58sKokMiZ7wogWFSLkXNoBNqFEuH4EV2dE_a9PCngXdTwY_7i5bWoYRDMmpMLIjeJ4fj9bzApcGDdZn6nd0eJdtdQNE3AqZ6yBUM7e2JHxZJayc7AXsUwpCKgQZsid856vrRChdV3e0gsiWViBktQCFoXJjOPvCBnoAn8wCh0cMfNNvqfjMLFCC22ym9zCcYJQjys9jHzC3Gv042X4BJ0cSVfBW9PjrQtdX1tbfZquY3qBTnaWleRVIrdQroJLZFuswcZqmM3j3", ENDITEM, 
		"Name=ts", "Value=1167794267_362380754_1176781583_424438507_1127310971", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	lr_end_transaction("02_page",LR_AUTO);

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
		"Name=key", "Value=_19FIVm3nDyJyo0NTnMl19bBmO1MYk8JPdQPs0d7a5S_X4kVshH3D58sKokMiZ7wogWFSLkXNoBNqFEuH4EV2dE_a9PCngXdTwY_7i5bWoYRDMmpMLIjeJ4fj9bzApcGDdZn6nd0eJdtdQNE3AqZ6yBUM7e2JHxZJayc7AXsUwpCKgQZsid856vrRChdV3e0gsiWViBktQCFoXJjOPvCBnoAn8wCh0cMfNNvqfjMLFCC22ym9zCcYJQjys9jHzC3Gv042X4BJ0cSVfBW9PjrQtdX1tbfZquY3qBTnaWleRVIrdQroJLZFuswcZqmM3j3", ENDITEM, 
		"Name=ts", "Value=1167794268_362380755_1176781584_424438508_1127310972", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	lr_start_transaction("03_wall");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_add_auto_header("Origin", 
		"https://queuev4.vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("im200_12", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t24.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=_19FIVm3nDyJyo0NTnMl19bBmO1MYk8JPdQPs0d7a5S_X4kVshH3D58sKokMiZ7wogWFSLkXNoBNqFEuH4EV2dE_a9PCngXdTwY_7i5bWoYRDMmpMLIjeJ4fj9bzApcGDdZn6nd0eJdtdQNE3AqZ6yBUM7e2JHxZJayc7AXsUwpCKgQZsid856vrRChdV3e0gsiWViBktQCFoXJjOPvCBnoAn8wCh0cMfNNvqfjMLFCC22ym9zCcYJQjys9jHzC3Gv042X4BJ0cSVfBW9PjrQtdX1tbfZquY3qBTnaWleRVIrdQroJLZFuswcZqmM3j3", ENDITEM, 
		"Name=ts", "Value=1167794269_362380756_1176781585_424438509_1127310973", ENDITEM, 
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
		"Name=key", "Value=_19FIVm3nDyJyo0NTnMl19bBmO1MYk8JPdQPs0d7a5S_X4kVshH3D58sKokMiZ7wogWFSLkXNoBNqFEuH4EV2dE_a9PCngXdTwY_7i5bWoYRDMmpMLIjeJ4fj9bzApcGDdZn6nd0eJdtdQNE3AqZ6yBUM7e2JHxZJayc7AXsUwpCKgQZsid856vrRChdV3e0gsiWViBktQCFoXJjOPvCBnoAn8wCh0cMfNNvqfjMLFCC22ym9zCcYJQjys9jHzC3Gv042X4BJ0cSVfBW9PjrQtdX1tbfZquY3qBTnaWleRVIrdQroJLZFuswcZqmM3j3", ENDITEM, 
		"Name=ts", "Value=1167794270_362380757_1176781586_424438510_1127310974", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	lr_think_time(4);

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
		"Name=key", "Value=_19FIVm3nDyJyo0NTnMl19bBmO1MYk8JPdQPs0d7a5S_X4kVshH3D58sKokMiZ7wogWFSLkXNoBNqFEuH4EV2dE_a9PCngXdTwY_7i5bWoYRDMmpMLIjeJ4fj9bzApcGDdZn6nd0eJdtdQNE3AqZ6yBUM7e2JHxZJayc7AXsUwpCKgQZsid856vrRChdV3e0gsiWViBktQCFoXJjOPvCBnoAn8wCh0cMfNNvqfjMLFCC22ym9zCcYJQjys9jHzC3Gv042X4BJ0cSVfBW9PjrQtdX1tbfZquY3qBTnaWleRVIrdQroJLZFuswcZqmM3j3", ENDITEM, 
		"Name=ts", "Value=1167794271_362380758_1176781587_424438511_1127310975", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_submit_data("al_wall.php", 
		"Action=https://vk.com/al_wall.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/innapush", 
		"Snapshot=t27.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=Message", "Value=Test_12345", ENDITEM, 
		"Name=act", "Value=save_draft", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=hash", "Value=705d7c82ca3d9ae734", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://queuev4.vk.com");

	web_submit_data("im200_15", 
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
		"Name=key", "Value=_19FIVm3nDyJyo0NTnMl19bBmO1MYk8JPdQPs0d7a5S_X4kVshH3D58sKokMiZ7wDdZn6nd0eJdtdQNE3AqZ6yBUM7e2JHxZJayc7AXsUwpCKgQZsid856vrRChdV3e0gsiWViBktQCFoXJjOPvCBnoAn8wCh0cMfNNvqfjMLFCC22ym9zCcYJQjys9jHzC3Gv042X4BJ0cSVfBW9PjrQtdX1tbfZquY3qBTnaWleRVIrdQroJLZFuswcZqmM3j3", ENDITEM, 
		"Name=ts", "Value=1167794272_1176781588_424438512_1127310976", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_submit_data("al_wall.php_2", 
		"Action=https://vk.com/al_wall.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/innapush", 
		"Snapshot=t29.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=act", "Value=post", ENDITEM, 
		"Name=to_id", "Value=44752200", ENDITEM, 
		"Name=type", "Value=all", ENDITEM, 
		"Name=friends_only", "Value=", ENDITEM, 
		"Name=status_export", "Value=", ENDITEM, 
		"Name=facebook_export", "Value=", ENDITEM, 
		"Name=official", "Value=", ENDITEM, 
		"Name=signed", "Value=", ENDITEM, 
		"Name=anonymous", "Value=", ENDITEM, 
		"Name=hash", "Value=705d7c82ca3d9ae734", ENDITEM, 
		"Name=from", "Value=", ENDITEM, 
		"Name=fixed", "Value=1151", ENDITEM, 
		"Name=Message", "Value=Test_12345", ENDITEM, 
		LAST);

	web_submit_data("al_wall.php_3", 
		"Action=https://vk.com/al_wall.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/innapush", 
		"Snapshot=t30.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=Message", "Value=", ENDITEM, 
		"Name=act", "Value=save_draft", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=hash", "Value=705d7c82ca3d9ae734", ENDITEM, 
		LAST);

	web_submit_data("upload_fails.php", 
		"Action=https://vk.com/upload_fails.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/innapush", 
		"Snapshot=t31.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=fail", ENDITEM, 
		"Name=aid", "Value=-14", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=error", "Value=1", ENDITEM, 
		"Name=gid", "Value=0", ENDITEM, 
		"Name=hash", "Value=61e2ba853fa1adbfeab520c49766efd9", ENDITEM, 
		"Name=mid", "Value=44752200", ENDITEM, 
		"Name=role", "Value=photo", ENDITEM, 
		"Name=server", "Value=824200", ENDITEM, 
		LAST);

	lr_end_transaction("03_wall",LR_AUTO);

	web_add_cookie("remixdt=0; DOMAIN=pu.vk.com");

	web_add_cookie("remixflash=0.0.0; DOMAIN=pu.vk.com");

	web_add_cookie("remixscreen_depth=24; DOMAIN=pu.vk.com");

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_submit_data("upload.php", 
		"Action=https://pu.vk.com/c621702/upload.php", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"TargetFrame=", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/innapush", 
		"Snapshot=t32.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=mid", "Value=44752200", ENDITEM, 
		"Name=aid", "Value=-14", ENDITEM, 
		"Name=gid", "Value=0", ENDITEM, 
		"Name=hash", "Value=272f68ca0c6be609d52ddd509c3b638f", ENDITEM, 
		"Name=rhash", "Value=263cf8fcde9fc18d8d80477e529a833f", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=act", "Value=check_upload", ENDITEM, 
		"Name=type", "Value=photo", ENDITEM, 
		"Name=ondone", "Value=Upload.callbacks.oncheck0", ENDITEM, 
		LAST);

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("upload_fails.php_2", 
		"Action=https://vk.com/upload_fails.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/innapush", 
		"Snapshot=t33.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=success", ENDITEM, 
		"Name=aid", "Value=-14", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=error", "Value=1", ENDITEM, 
		"Name=gid", "Value=0", ENDITEM, 
		"Name=hash", "Value=688060ab0ede91762c17750dad84d821", ENDITEM, 
		"Name=mid", "Value=44752200", ENDITEM, 
		"Name=server", "Value=621702", ENDITEM, 
		LAST);

	lr_start_transaction("04_out");

	web_revert_auto_header("Origin");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("login.vk.com_2", 
		"URL=https://login.vk.com/?act=logout&hash=911588a3651b8c28d3&reason=tn&_origin=https://vk.com", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/innapush", 
		"Snapshot=t34.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("04_out",LR_AUTO);

	return 0;
}