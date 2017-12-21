Action()
{

	lr_start_transaction("01_00_VK");
	
	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	web_set_sockets_option("SSL_VERSION", "2&3");

	web_reg_find("Text=Войти", LAST);


/*Correlation comment: Automatic rules - Do not change!  
Original value='8518eb9e04199d4c97' 
Name ='ip_h' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=ip_h",
		"RegExp={IPH}",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/vk.com/*",
		LAST);



/*Correlation comment: Automatic rules - Do not change!  
Original value='d9118bc40b1ed0f387' 
Name ='lg_h' 
Type ='Manual'*/
	web_reg_save_param_ex(
		"ParamName=lg_h",
		"LB/IC=name=\"lg_h\" value=\"",
		"RB/IC=\" ",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/vk.com/*",
		LAST);

	web_url("vk.com", 
		"URL=https://vk.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t1.inf", 
		"Mode=HTML", 
		LAST);



	lr_start_transaction("01_01_Login");
	

/*Correlation comment: Automatic rules - Do not change!  
Original value='innapush' 
Name ='__query' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=__query",
		"RegExp=(?<='/)(\\w+)(?=')",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/login.php*",
		LAST);
		


	web_submit_data("login.vk.com",
		"Action=https://login.vk.com/?act=login",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://vk.com/",
		"Snapshot=t2.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=act", "Value=login", ENDITEM,
		"Name=role", "Value=al_frame", ENDITEM,
		"Name=expire", "Value=", ENDITEM,
		"Name=recaptcha", "Value=", ENDITEM,
		"Name=captcha_sid", "Value=", ENDITEM,
		"Name=captcha_key", "Value=", ENDITEM,
		"Name=_origin", "Value=https://vk.com", ENDITEM,
		"Name=ip_h", "Value={ip_h}", ENDITEM,
		"Name=lg_h", "Value={lg_h}", ENDITEM,
		"Name=email", "Value={Login}", ENDITEM,
		"Name=pass", "Value={Pass}", ENDITEM,
		LAST);


/*Correlation comment: Automatic rules - Do not change!  
Original value='911588a3651b8c28d3' 
Name ='hash_1' 
Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=hash_1",
		"RegExp=(?<=&hash=)([\\w\\d]+)(?=&)",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/feed*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='44752200' 
Name ='al_id' 
Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=al_id",
		"RegExp=\\ id:\\ (.*?),",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/feed*",
		LAST);
		
	web_reg_find("Text=Моя Страница",LAST);

	web_url("vk.com_2", 
		"URL=https://vk.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);


	lr_end_transaction("01_01_Login",LR_AUTO);


	lr_start_transaction("01_02_My_Page");

	web_reg_find("Text=изменить статус",LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='67b9ec9ec1f7c2c0b0' 
Name ='hash_2' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=hash",
		"RegExp=\\\\\"info_hash\\\\\":\\\\\"(.*?)\\\\\"",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/al_profile.php*",
		LAST);

	web_url("al_profile.php",
		"URL=https://vk.com/al_profile.php?__query={__query}&_ref=left_nav&al=-1&al_id={al_id}&_rndVer=14610",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://vk.com/feed",
		"Snapshot=t22.inf",
		"Mode=HTML",
		LAST);



	lr_end_transaction("01_02_My_Page",LR_AUTO);

	lr_start_transaction("01_03_Change_Status");

	
	
	web_submit_data("al_page.php",
		"Action=https://vk.com/al_page.php",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://vk.com/{__query}",
		"Snapshot=t36.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=act", "Value=current_info", ENDITEM,
		"Name=al", "Value=1", ENDITEM,
		"Name=hash", "Value={hash}", ENDITEM,
		"Name=info", "Value=Test_{Test}", ENDITEM,
		"Name=oid", "Value={al_id}", ENDITEM,
		LAST);
	
	
	web_reg_find("Search=Body",
		"Text=Test_{Test}",
		LAST);


	web_url("Refresh",
		"URL=https://vk.com/{__query}",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Snapshot=t13.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("01_03_Change_Status",LR_AUTO);

	
	lr_start_transaction("01_04_Logout");
	
	web_reg_find("Text=Поиск",LAST);
	
	web_url("login.vk.com_2",
		"URL=https://login.vk.com/?act=logout&hash={hash_1}&reason=tn&_origin=https://vk.com",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://vk.com/{__query}",
		"Snapshot=t38.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("01_04_Logout",LR_AUTO);

	lr_end_transaction("01_00_VK",LR_AUTO);
	
	return 0;
}