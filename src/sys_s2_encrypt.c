SYSCALL_DEFINE2(sys_s2_encrypt, char *string, int encryptkey)
{
	if((encryptkey<1)||(encryptkey>5))
		return EINVAL;
	
	while(*string != '\0')
	{
		printk("%c\n",string+encryptkey);
		string++;
	}
return 0;	
}	