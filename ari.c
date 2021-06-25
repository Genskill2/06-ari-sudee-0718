string ari(string  s1)
{
	int words =0,l = 0,sen = 0;
	

	float tot;
	for(int i =0;i<strlen(s1);i++)
	{
		if(isalnum(s1[i])
			{
				l++;
			}
			
		else if (s[i]==32)
		{
			words++;
		}
		else if (s[i]== '.' || s[i] == '?' || s[i]== '!')
		{
			sen++; 
		}
		else 
		
			continue ; 
		}
	}
	tot =(4.71 * l/ words )+ (0.5*words/sen)-21.43;
	if(tot>10)
	{
		grade[20] = "Eleventh Grade";
		return grade[20];
	}
}
