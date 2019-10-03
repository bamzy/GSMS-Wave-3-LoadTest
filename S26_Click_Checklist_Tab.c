S26_Click_Checklist_Tab()
{
	web_reg_save_param_regexp(
		"ParamName=whatIneed",
		"RegExp=SIW_YMHD\\.start_url\\?(.*?)\";\\\r\\\n\\\r\\\n\\\tsits_attach_event\\(window,",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_TCC.start_url*",
		LAST);


	web_url("SIW_TCC.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TCC.start_url?{newchecklist}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?B59CDD28D7FA479AlyxcPUSRW-L9W35aQl1xJnClT89NDM-3bTfvprGroP4QQffO5AdxNIhvNJU4Tucp994Tn8Q4_JCYp-o5L0uKQA8IEoemAm4eyqFJIZcxLWft3bfqESFUoQuIHAdGyIXR7u7YnQ7xxrvCYxhzTUJTsvjopEcAJl338uIwF0u0tvdgJI9WqSYx0YhOlS_YbyUP_z-8_82Hprnp83SH_lwhpjT915bWOCVkJMubC2fTblSPLp2GcNNYXugDkXTHDkMn6VutENob1zAbqEgyl44n4Q",
		"Snapshot=t316.inf",
		"Mode=HTML",
		LAST);
		
		
	web_reg_save_param_regexp(
		"ParamName=qrtyirsvcbgsklhd",
		"RegExp=qrtyirsvcbgsklhd=(.*?)\";\\\r\\\n</script",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		LAST);


web_url("SIW_YMHD.start_url_3",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{whatIneed}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_TCC.start_url?{checklistTab}",
		"Snapshot=t289.inf",
		"Mode=HTML",
		LAST);
	

	return 0;
}
