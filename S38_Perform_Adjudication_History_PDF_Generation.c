S38_Perform_Adjudication_History_PDF_Generation()
{
	web_submit_form("SIW_POD", 
		"Snapshot=t338.inf", 
		ITEMDATA, 
		"Name=POP_UDEF.POP.MENSYS.1-1", "Value=2018/19", ENDITEM, 		
		"Name=POP_UDEF.POP.MENSYS.1-1", "Value=2019/20", ENDITEM,
		"Name=POP_UDEF.POP.MENSYS.1-1", "Value=2020/21", ENDITEM,
		"Name=BP103.DUMMY_B.MENSYS.1", "Value=Generate Report (PDF)", ENDITEM, 
		EXTRARES, 
		"Url=http://detectportal.firefox.com/success.txt", "Referer=", ENDITEM, 
		LAST);

	return 0;
}
