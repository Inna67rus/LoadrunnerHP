Action(){
	long int X;
	
	X=atoi(lr_eval_string("{RND}"));
	
	lr_save_int(getTime(X), "X"); 
	
	lr_output_message("%d", getTime());
		
	lr_save_string(lr_eval_string("{X}"), "sec" );
	
	lr_start_transaction("02_00_VK");
	
	web_set_sockets_option("SSL_VERSION", "2&3");
	
	web_reg_find("Text=Войти", LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='49d7a6cf0d1dc6040c' 
Name ='ip_h' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=ip_h",
		"RegExp= \\ ip_h:\\ '(.*?)'",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"RequestUrl=*/vk.com/*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='f10f28c7636be6668a' 
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


	lr_start_transaction("02_01_Login");

/*Correlation comment: Automatic rules - Do not change!  
Original value='44752200' 
Name ='al_id' 
Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=al_id",
		"RegExp=(?<=l=)(\\d+)(?=;)",
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


	web_reg_find("Text=Моя страница",LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='705d7c82ca3d9ae734' 
Name ='hash_1' 
Type ='Manual'*/
	web_reg_save_param_regexp(
		"ParamName=hash_1",
		"RegExp=\"post_hash\":\"(.*?)\"",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/feed*",
		LAST);

/*Correlation comment: Automatic rules - Do not change!  
Original value='911588a3651b8c28d3' 
Name ='hash_2' 
Type ='ResponseBased'*/
	web_reg_save_param_regexp(
		"ParamName=hash_2",
		"RegExp=(?<=&hash=)([\\w\\d]+)(?=&)",
		"Ordinal=1",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=Yes",
		"RequestUrl=*/feed*",
		LAST);

	web_url("vk.com_2", 
		"URL=https://vk.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://vk.com/", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		LAST);


	lr_end_transaction("02_01_Login",LR_AUTO);


	lr_start_transaction("02_02_My_Page");
	
	web_reg_find("Text=Поиск",LAST);

	web_url("al_profile.php",
		"URL=https://vk.com/al_profile.php?__query=innapush&_ref=left_nav&al=-1&al_id={al_id}&_rndVer=27945",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://vk.com/feed",
		"Snapshot=t19.inf",
		"Mode=HTML",
		LAST);

	
	lr_end_transaction("02_02_My_Page",LR_AUTO);

	lr_start_transaction("02_03_New_Post");


	web_submit_data("al_wall.php",
		"Action=https://vk.com/al_wall.php",
		"Method=POST",
		"TargetFrame=",
		"RecContentType=text/plain",
		"Referer=https://vk.com/innapush",
		"Snapshot=t27.inf",
		"Mode=HTML",
		ITEMDATA,
		"Name=Message", "Value=Test_{Number}_{Text}_{Status}_{X}", ENDITEM,
		"Name=act", "Value=save_draft", ENDITEM,
		"Name=al", "Value=1", ENDITEM,
		"Name=hash", "Value={hash_1}", ENDITEM,
		LAST);

	lr_think_time(5);
	
	web_reg_find("Text=Test_{Number}_{Text}_{Status}_{X}",LAST);

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
		"Name=to_id", "Value={al_id}", ENDITEM,
		"Name=type", "Value=all", ENDITEM,
		"Name=friends_only", "Value=", ENDITEM,
		"Name=status_export", "Value=", ENDITEM,
		"Name=facebook_export", "Value=", ENDITEM,
		"Name=official", "Value=", ENDITEM,
		"Name=signed", "Value=", ENDITEM,
		"Name=anonymous", "Value=", ENDITEM,
		"Name=hash", "Value={hash_1}", ENDITEM,
		"Name=from", "Value=", ENDITEM,
		"Name=fixed", "Value=1151", ENDITEM,
		"Name=Message", "Value=Test_{Number}_{Text}_{Status}_{X}", ENDITEM,
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
		"Name=hash", "Value={hash_1}", ENDITEM,
		LAST);

	lr_end_transaction("02_03_New_Post",LR_AUTO);


	lr_start_transaction("02_04_Logout");

	web_reg_find("Text=Поиск",LAST);
	
	web_url("login.vk.com_2",
		"URL=https://login.vk.com/?act=logout&hash={hash_2}&reason=tn&_origin=https://vk.com",
		"TargetFrame=",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://vk.com/innapush",
		"Snapshot=t34.inf",
		"Mode=HTML",
		LAST);

	lr_end_transaction("02_04_Logout",LR_AUTO);
	
	lr_end_transaction("02_00_VK",LR_AUTO);

	return 0;
}
Action2(){

}

int getTime(long int X){ 
time_t t = time(NULL); 
struct tm tm = * localtime(&t); 
long int seconds; 
seconds = tm.tm_hour * 3600 + tm.tm_min * 60 + tm.tm_sec + X; 
return seconds; 
}





