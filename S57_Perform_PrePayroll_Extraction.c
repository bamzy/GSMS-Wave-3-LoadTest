S57_Perform_PrePayroll_Extraction()
{
	web_reg_save_param_regexp(
		"ParamName=PrePayrollDownload",
		"RegExp=SIW_YGSL\.start_url\?(.*?)\"",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_TTQ*",
		LAST);
	
	web_submit_form("SIW_TTQ", 
		"Snapshot=t354.inf", 
		ITEMDATA, 
		"Name=ANSWER.TTQ.MENSYS.1", "Value=24/Jul/2019", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.2", "Value=Pre-Payroll Extract", ENDITEM, 
		"Name=ANSWER.TTQ.MENSYS.3", "Value=Run", ENDITEM, 
		EXTRARES, 
		LAST);
	
	
	web_url("SIW_YGSL.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YGSL.start_url{PrePayrollDownload}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url{PrePayrollDownload}",
		"Snapshot=t337.inf",
		"Mode=HTML",
		EXTRARES,		
		LAST);


	return 0;
}
