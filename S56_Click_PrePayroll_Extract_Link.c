S56_Click_PrePayroll_Extract_Link()
{
	web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{PrePayrollExtractLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?CBF1DA77F9E94314Is7xwDZeSz8kCvCqxF5TAnO0gJv6-RKpO1gBDv_ZPwphm8KpxZMxY5QleoQgG1t6T8c-dtx7waQJgCl4Astp5riZ4zFMS8O6rYsC3tZeJFmlEfkqJwWOSw4XsigD46Wf",
		"Snapshot=t353.inf",
		"Mode=HTML",			
		LAST);
	
	return 0;
}
