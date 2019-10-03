S22_Perform_Student_Search()
{
	
	web_submit_form("SIW_TTQ", 
		"Snapshot=t261.inf", 
		ITEMDATA, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=Agricultural, Food & Nutritional Science (Faculty of Agricultural, Life and Environmental Sc)", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.8", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.10", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.11", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=Search", ENDITEM, 
		LAST);
		
	return 0;
}
