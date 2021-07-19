#include<bits/stdc++.h>
using namespace std ;


bool VerifyCaptcha(string GeneratedCaptcha , string UserCaptcha)
{
	if(GeneratedCaptcha == UserCaptcha)
	{
		return true ;
	}
	return false ;
}

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

int RetryCheck(char retry)
{
	if(retry == 'Y' || retry == 'y')
	{
		return 1 ;
	}
	else if(retry == 'N' || retry == 'n')
	{
	    return 0 ;
	}
	else
	{
	    return 9 ;
	}
}

void RetryChance( )
{
	string GeneratedCaptcha = GenerateCaptcha(9) ;
   	cout << "\n" << "Your CAPTCHA Code Is: " << GeneratedCaptcha << "\n" ;
   	
   	string UserCaptcha ;
   	cout << "Enter The CAPTCHA Given Above: " ;
   	cin >> UserCaptcha ;
   	
   	if(VerifyCaptcha(GeneratedCaptcha , UserCaptcha))
   	{
   		cout << "\n" << "CAPTCHA MATHCED ✔️" ;
   		cout << "\n" << "Welcome!" ;
   		return ;
   	}
   	else
   	{
   		cout << "\n" << "CAPTCHA FAILED ❌"  ; 
   		cout << "\n" << "Sorry you have failed twice so you can't enter 🚫" ;
   		return ;
   	}
}

void Retry( )
{
    cout << "\n" << "Want to Try Again? (Y/N) \n" ;
   	char retry ;
   	cin >> retry ;
   	if(RetryCheck(retry) == 1)
   	{
   		RetryChance( ) ;
   	}
   	else if(RetryCheck(retry) == 0)
   	{
   	    cout << "\n" << "Thanks For Coming!" ;
   	    return ;
   	}
   	else
   	{
	    cout << "Please try again & give a valid Input! (Y/N)" ;
	    RetryCheck( ) ;
   	    return ;
   	}
}

void DriverCode( )
{
    string GeneratedCaptcha = GenerateCaptcha(9) ;
   	cout << "Your CAPTCHA Code Is: " << GeneratedCaptcha << "\n" ;
   	
   	string UserCaptcha ;
   	cout << "Enter The CAPTCHA Given Above: " ;
   	cin >> UserCaptcha ;
   	
   	if(VerifyCaptcha(GeneratedCaptcha , UserCaptcha))
   	{
   		cout << "\n" << "CAPTCHA MATHCED ✔️" ;
   		return ;
   	}
   	else
   	{
   		cout << "\n" << "CAPTCHA FAILED ❌"  ; 
   		Retry( ) ;
   	}
}

signed main( )
{
    DriverCode() ;
    return 0 ;
}    