S19_Perform_Export_Tenure_Report_Result()
{
	
	web_submit_form("SIW_TTQ_5", 
		"Snapshot=t188.inf", 
		ITEMDATA, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=2017/2018", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=2018/2019", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=AB Diabetes Research Institute (Faculty of Medicine and Dentistry)", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.8", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.10", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.11", "Value=EXPORT", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.13", "Value=Search", ENDITEM, 		
		LAST);
	return 0;
}
