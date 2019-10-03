S21_Click_Student_Search_link()
{
	
	web_url("SIW_YMHD.start_url",
		"URL=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{ApplicantSearchLink}",
		"Resource=0",
		"RecContentType=text/html",
		"Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/siw_portal.url?{AwardsTabLink}",
		"Snapshot=t60.inf",
		"Mode=HTML",
		EXTRARES,
		"URL=../plugins/css/chosen/chosen.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{ApplicantSearchLink}", ENDITEM,
		"URL=../plugins/javascript/chosen/chosen.jquery.min.js?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{ApplicantSearchLink}", ENDITEM,
		"URL=../plugins/javascript/datatables/media/css/jquery.dataTables.min.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?{ApplicantSearchLink}", ENDITEM,
		"URL=../plugins/css/chosen/chosen-sprite.png", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/plugins/css/chosen/chosen.css?v=930.1", ENDITEM,
		LAST);

	return 0;
}
