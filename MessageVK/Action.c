Action()
{
	lr_start_transaction("03_00_VK");

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
Original value='464e30f060d39222bc' 
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

/*Correlation comment: Automatic rules - Do not change!  
Original value='friends' 
Name ='RegExp' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=RegExp",
		"RegExp=(?<=global_)(\\w{7})(?=\")",
		"Ordinal=1",
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
		"Snapshot=t286.inf", 
		"Mode=HTML", 
		LAST);

	/*Possible OAUTH authorization was detected. It is recommended to correlate the authorization parameters.*/

	lr_start_transaction("03_01_Login");

/*Correlation comment: Automatic rules - Do not change!  
Original value='44752200' 
Name ='al_id' 
Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=al_id",
		"RegExp=l\\=(.*?);",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Cookies",
		"RequestUrl=*/login.vk.com/*",
		LAST);

	web_submit_data("login.vk.com",
		"Action=https://login.vk.com/?act=login",
		"Method=POST",
		"EncodeAtSign=YES",
		"TargetFrame=",
		"RecContentType=text/html",
		"Referer=https://vk.com/",
		"Snapshot=t287.inf",
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
Name ='hash' 
Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=hash",
		"RegExp=(?<=&hash=)([\\w\\d]+)(?=&)",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/feed*",
		LAST);
		
	web_reg_find("Text=Моя страница", LAST);

	web_url("vk.com_2", 
		"URL=https://vk.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t292.inf", 
		"Mode=HTML", 
		LAST);


	lr_end_transaction("03_01_Login",LR_AUTO);

	
	lr_start_transaction("03_02_Friends");
	
	
	web_url("al_friends.php",
		"URL=https://vk.com/al_{RegExp}.php?__query={RegExp}&_ref=left_nav&al=-1&al_id={al_id}&_rndVer=61201",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://vk.com/feed",
		"Snapshot=t316.inf",
		"Mode=HTML",
		LAST);
	
	web_reg_find("Text=Выбор города",LAST);
	
	web_submit_data("al_friends.php_2",
		"Action=https://vk.com/al_{RegExp}.php",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://vk.com/{RegExp}",
		"Snapshot=t318.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=act", "Value=load_{RegExp}_silent", ENDITEM,
		"Name=al", "Value=1", ENDITEM,
		"Name=gid", "Value=0", ENDITEM,
		"Name=id", "Value={al_id}", ENDITEM,
		LAST);


	lr_end_transaction("03_02_Friends",LR_AUTO);



	lr_start_transaction("03_03_Write_Message");
	

/*Correlation comment: Automatic rules - Do not change!  
Original value='e20851715c65c4c392' 
Name ='chas' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=chas",
		"RegExp=hash:\\ '(.*?)\\'",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/al_im.php*",
		LAST);

	web_submit_data("al_im.php_6",
		"Action=https://vk.com/al_im.php",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://vk.com/{RegExp}",
		"Snapshot=t331.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=act", "Value=a_write_box", ENDITEM,
		"Name=al", "Value=1", ENDITEM,
		"Name=to", "Value=461703243", ENDITEM,
		LAST);


	web_submit_data("al_im.php_8",
		"Action=https://vk.com/al_im.php",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://vk.com/{RegExp}",
		"Snapshot=t334.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=act", "Value=a_send_box", ENDITEM,
		"Name=al", "Value=1", ENDITEM,
		"Name=chas", "Value={chas}", ENDITEM,
		"Name=from", "Value=box", ENDITEM,
		"Name=media", "Value=", ENDITEM,
		"Name=message", "Value=message_{NewParam}", ENDITEM,
		"Name=title", "Value=", ENDITEM,
		"Name=to_ids", "Value=461703243", ENDITEM,
		LAST);
		
	web_reg_find("Text=message",LAST);

	lr_end_transaction("03_03_Write_Message",LR_AUTO);

	lr_start_transaction("03_04_Logout");

	web_reg_find("Text=Поиск",LAST);
	
	web_url("login.vk.com_2",
		"URL=https://login.vk.com/?act=logout&hash={hash}&reason=tn&_origin=https://vk.com",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://vk.com/{RegExp}",
		"Snapshot=t336.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("03_04_Logout",LR_AUTO);
	
	lr_end_transaction("03_00_VK",LR_AUTO);


	return 0;
}