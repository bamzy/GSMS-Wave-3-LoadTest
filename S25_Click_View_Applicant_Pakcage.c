S25_Click_View_Applicant_Pakcage()
{

	web_reg_save_param_regexp(
		"ParamName=newchecklist",
		"RegExp=SIW_TCC\\.start_url\\?(.*?)'\\ class",
		"Ordinal=3",
		SEARCH_FILTERS,
		"Scope=Body",
		"IgnoreRedirections=No",
		"RequestUrl=*/SIW_YMHD.start_url*",
		LAST);

	web_link("View", 
		"Text=View", 
		"Ordinal=1", 
		"Snapshot=t313.inf", 
		EXTRARES, 
		"Url=../plugins/css/charcount/charcount.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?B59CDD28D7FA479AlyxcPUSRW-L9W35aQl1xJnClT89NDM-3bTfvprGroP4QQffO5AdxNIhvNJU4Tucp994Tn8Q4_JCYp-o5L0uKQA8IEoemAm4eyqFJIZcxLWft3bfqESFUoQuIHAdGyIXR7u7YnQ7xxrvCYxhzTUJTsvjopEcAJl338uIwF0u0tvdgJI9WqSYx0YhOlS_YbyUP_z-8_82Hprnp83SH_lwhpjT915bWOCVkJMubC2fTblSPLp2GcNNYXugDkXTHDkMn6VutENob1zAbqEgyl44n4Q", ENDITEM, 
		"Url=../plugins/javascript/charcount/charcount.js?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?B59CDD28D7FA479AlyxcPUSRW-L9W35aQl1xJnClT89NDM-3bTfvprGroP4QQffO5AdxNIhvNJU4Tucp994Tn8Q4_JCYp-o5L0uKQA8IEoemAm4eyqFJIZcxLWft3bfqESFUoQuIHAdGyIXR7u7YnQ7xxrvCYxhzTUJTsvjopEcAJl338uIwF0u0tvdgJI9WqSYx0YhOlS_YbyUP_z-8_82Hprnp83SH_lwhpjT915bWOCVkJMubC2fTblSPLp2GcNNYXugDkXTHDkMn6VutENob1zAbqEgyl44n4Q", ENDITEM, 
		"Url=../plugins/css/chosen/chosen.css?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?B59CDD28D7FA479AlyxcPUSRW-L9W35aQl1xJnClT89NDM-3bTfvprGroP4QQffO5AdxNIhvNJU4Tucp994Tn8Q4_JCYp-o5L0uKQA8IEoemAm4eyqFJIZcxLWft3bfqESFUoQuIHAdGyIXR7u7YnQ7xxrvCYxhzTUJTsvjopEcAJl338uIwF0u0tvdgJI9WqSYx0YhOlS_YbyUP_z-8_82Hprnp83SH_lwhpjT915bWOCVkJMubC2fTblSPLp2GcNNYXugDkXTHDkMn6VutENob1zAbqEgyl44n4Q", ENDITEM, 
		"Url=../plugins/javascript/chosen/chosen.jquery.min.js?v=930.1", "Referer=https://graduate-studies-apply-uat.ualberta.ca/urd/sits.urd/run/SIW_YMHD.start_url?B59CDD28D7FA479AlyxcPUSRW-L9W35aQl1xJnClT89NDM-3bTfvprGroP4QQffO5AdxNIhvNJU4Tucp994Tn8Q4_JCYp-o5L0uKQA8IEoemAm4eyqFJIZcxLWft3bfqESFUoQuIHAdGyIXR7u7YnQ7xxrvCYxhzTUJTsvjopEcAJl338uIwF0u0tvdgJI9WqSYx0YhOlS_YbyUP_z-8_82Hprnp83SH_lwhpjT915bWOCVkJMubC2fTblSPLp2GcNNYXugDkXTHDkMn6VutENob1zAbqEgyl44n4Q", ENDITEM, 
		LAST);
	
	return 0;
}
