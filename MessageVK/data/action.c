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
		"Snapshot=t286.inf", 
		"Mode=HTML", 
		LAST);

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
		"Snapshot=t287.inf", 
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
		"Name=lg_h", "Value=464e30f060d39222bc", ENDITEM, 
		"Name=email", "Value=inna67rus@gmail.com", ENDITEM, 
		"Name=pass", "Value=966OI&(a", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("notifier.php", 
		"URL=https://vk.com/notifier.php?act=storage_frame&from=vk.com&4", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t288.inf", 
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
		"Snapshot=t289.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_get_comms_key", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("q_frame.php", 
		"URL=https://queuev4.vk.com/q_frame.php?7", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t290.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://vk.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_im.php_2", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/", 
		"Snapshot=t291.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_get_fast_chat", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=cache_time", "Value=0", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("vk.com_2", 
		"URL=https://vk.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t292.inf", 
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
		"Referer=https://vk.com/", 
		"Snapshot=t293.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_stickers_list", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=cache_time", "Value=0", ENDITEM, 
		"Name=need_keywords", "Value=1", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_submit_data("al_feed.php", 
		"Action=https://vk.com/al_feed.php?queue", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t294.inf", 
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
		"Snapshot=t295.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://vk.com");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_im.php_4", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t296.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_get_fast_chat", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=cache_time", "Value=0", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("q_frame.php_2", 
		"URL=https://queuev4.vk.com/q_frame.php?7", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t297.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_im.php_5", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t298.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_stickers_list", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=cache_time", "Value=0", ENDITEM, 
		"Name=need_keywords", "Value=1", ENDITEM, 
		LAST);

	web_submit_data("notifier.php_3", 
		"Action=https://vk.com/notifier.php?act=a_reset", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t299.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=al", "Value=1", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://queuev4.vk.com");

	web_submit_data("im200", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t300.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224505_1015335195_1925581209_1376382490", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_2", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t301.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224506_1015335196_1925581210_1376382491", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_3", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t302.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224507_1015335197_1925581211_1376382492", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_4", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t303.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224508_1015335198_1925581212_1376382493", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_5", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t304.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224509_1015335199_1925581213_1376382494", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_6", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t305.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224510_1015335200_1925581214_1376382495", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_7", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t306.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224511_1015335201_1925581215_1376382496", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_8", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t307.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224512_1015335202_1925581216_1376382497", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	lr_end_transaction("01_login",LR_AUTO);

	web_submit_data("im200_9", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t308.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224513_1015335203_1925581217_1376382498", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_10", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t309.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224514_1015335204_1925581218_1376382499", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_11", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t310.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224515_1015335205_1925581219_1376382500", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_12", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t311.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224516_1015335206_1925581220_1376382501", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_13", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t312.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224517_1015335207_1925581221_1376382502", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_14", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t313.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224518_1015335208_1925581222_1376382503", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	lr_start_transaction("02_friends");

	web_submit_data("im200_15", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t314.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224519_1015335209_1925581223_1376382504", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_submit_data("im200_16", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t315.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224520_1015335210_1925581224_1376382505", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("al_friends.php", 
		"URL=https://vk.com/al_friends.php?__query=friends&_ref=left_nav&al=-1&al_id=44752200&_rndVer=61201", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/feed", 
		"Snapshot=t316.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Origin", 
		"https://queuev4.vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("im200_17", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t317.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224521_1015335211_1925581225_1376382506", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Origin", 
		"https://vk.com");

	web_submit_data("al_friends.php_2", 
		"Action=https://vk.com/al_friends.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/friends", 
		"Snapshot=t318.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=load_friends_silent", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=gid", "Value=0", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://queuev4.vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("im200_18", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t319.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224522_1015335212_1925581226_1376382507", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_19", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t320.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224523_1015335213_1925581227_1376382508", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_20", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t321.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224524_1015335214_1925581228_1376382509", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	lr_end_transaction("02_friends",LR_AUTO);

	web_submit_data("im200_21", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t322.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224525_1015335215_1925581229_1376382510", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_22", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t323.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224526_1015335216_1925581230_1376382511", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_23", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t324.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224527_1015335217_1925581231_1376382512", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_24", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t325.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224528_1015335218_1925581232_1376382513", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_25", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t326.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224529_1015335219_1925581233_1376382514", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_26", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t327.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224530_1015335220_1925581234_1376382515", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_27", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t328.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224531_1015335221_1925581235_1376382516", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_submit_data("im200_28", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t329.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224532_1015335222_1925581236_1376382517", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	lr_start_transaction("03_write");

	web_revert_auto_header("Origin");

	web_revert_auto_header("X-Requested-With");

	web_submit_data("im200_29", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t330.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wdP7GlDZMvgk3IX8bqcWUzvfpt4KdeydQiHWMg9z2bVdKpbXmxraxGlJy8b4U7S2KAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224533_1015335223_1925581237_1376382518", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_add_auto_header("X-Requested-With", 
		"XMLHttpRequest");

	web_submit_data("al_im.php_6", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/friends", 
		"Snapshot=t331.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_write_box", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=to", "Value=29671012", ENDITEM, 
		LAST);

	web_submit_data("al_im.php_7", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/friends", 
		"Snapshot=t332.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=get_emoji_list", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://queuev4.vk.com");

	web_submit_data("im200_30", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t333.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224534_1925581238_1376382519", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_add_auto_header("Origin", 
		"https://vk.com");

	web_submit_data("al_im.php_8", 
		"Action=https://vk.com/al_im.php", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/plain", 
		"Referer=https://vk.com/friends", 
		"Snapshot=t334.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_send_box", ENDITEM, 
		"Name=al", "Value=1", ENDITEM, 
		"Name=chas", "Value=e20851715c65c4c392", ENDITEM, 
		"Name=from", "Value=box", ENDITEM, 
		"Name=media", "Value=", ENDITEM, 
		"Name=message", "Value=do_English", ENDITEM, 
		"Name=title", "Value=", ENDITEM, 
		"Name=to_ids", "Value=29671012", ENDITEM, 
		LAST);

	lr_end_transaction("03_write",LR_AUTO);

	lr_start_transaction("04_exit");

	web_revert_auto_header("Origin");

	web_add_header("Origin", 
		"https://queuev4.vk.com");

	web_submit_data("im200_31", 
		"Action=https://queuev4.vk.com/im200", 
		"Method=POST", 
		"TargetFrame=", 
		"RecContentType=text/javascript", 
		"Referer=https://queuev4.vk.com/q_frame.php?7", 
		"Snapshot=t335.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=act", "Value=a_check", ENDITEM, 
		"Name=id", "Value=44752200", ENDITEM, 
		"Name=key", "Value=6G4DHSry0F9a_TAVxCPnlzCcyMNalR9nWFFTWO7iu60GYt94yRdlH6egvkSQLO4wAsxZRkqdAgMhXZP_tpFX9NCZKT59LfIDWkiS6841GrzsbTf7HTqFFw_WKh2AdrEJPGzOXca01oHhcNxeoAFN8LM_dTf9er6OUsq_rRgcOXsaWYWy7Yp6P9NF2X4SkQOh", ENDITEM, 
		"Name=ts", "Value=1645224535_1925581239_1376382520", ENDITEM, 
		"Name=wait", "Value=25", ENDITEM, 
		LAST);

	web_revert_auto_header("X-Requested-With");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("login.vk.com_2", 
		"URL=https://login.vk.com/?act=logout&hash=911588a3651b8c28d3&reason=tn&_origin=https://vk.com", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/friends", 
		"Snapshot=t336.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("04_exit",LR_AUTO);

	return 0;
}