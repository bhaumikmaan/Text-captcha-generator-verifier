/***		KNOWLEDGE IS POWER		***/
string GenerateCaptcha(int n)
{
	string GeneratedCaptcha = "" ;
	string text = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ" ;
	srand(time(0)) ;
	while(n--)
	{
		GeneratedCaptcha += text[rand()%62] ;
	}
	return GeneratedCaptcha ;
}
//Captcha String Length --> n
//Characters used in Captcha --> Uppercase alphabets, lowercase alphabets & numbers
