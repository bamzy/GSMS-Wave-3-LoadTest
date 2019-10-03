S64_Perform_Export_Facutly_Tenure_Report_Result()
{
//	web_submit_form("SIW_TTQ_3", 
//		"Snapshot=t532.inf", 
//		ITEMDATA, 
//		"Name=ANSWER.TTQ.MENSYS.1", "Value=2018/2019", ENDITEM, 
//		"Name=ANSWER.TTQ.MENSYS.1", "Value=2019/2020", ENDITEM, 
//		"Name=ANSWER.TTQ.MENSYS.2", "Value=", ENDITEM, 
//		"Name=ANSWER.TTQ.MENSYS.3", "Value=", ENDITEM, 
//		"Name=ANSWER.TTQ.MENSYS.4", "Value=", ENDITEM, 
//		"Name=ANSWER.TTQ.MENSYS.5", "Value=<OFF>", ENDITEM, 
//		"Name=ANSWER.TTQ.MENSYS.6", "Value=Faculty of Engineering", ENDITEM, 
//		"Name=ANSWER.TTQ.MENSYS.7", "Value=", ENDITEM, 
//		"Name=ANSWER.TTQ.MENSYS.8", "Value=<OFF>", ENDITEM, 
//		"Name=ANSWER.TTQ.MENSYS.9", "Value=EXPORT", ENDITEM, 
//		"Name=ANSWER.TTQ.MENSYS.10", "Value=Search", ENDITEM, 
//		EXTRARES, 
////		"Url=SIW_YGSL.start_url?ACF61BC3DE4F4A74Z9Zl6idxdpXEwSDoOLC1X1tknIDur9XhZlB6O3zl_v4mAS_OKAO4mYvTTDqh2hMoZdAW9HWzB1YSSfG2b9XG99sr3VomrOpODbeC66gJkph0wvmOD0XKEcPdEtq01wIKYbRW3ugvqbBDKT5oChj5AmFTBDaNN0Ai9KHbyz-gqrAeu6nf6HWuh0b5UmfC61E-GWzDzbAuwl1lkqYYudIyvQ", ENDITEM, 
//		LAST);
	
	
	web_submit_form("SIW_TTQ_2", 
		"Snapshot=t127.inf", 
		ITEMDATA, 
		"Name=ANSWER.TTQ.MENSYS.1", "Value=2018/2019", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.4", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.5", "Value=<OFF>", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.6", "Value=Faculty of Engineering", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.7", "Value=", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.8", "Value=EXPORT", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.9", "Value=Search", ENDITEM, 
		LAST);

	return 0;
}
