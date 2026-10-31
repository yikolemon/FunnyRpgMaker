/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14079594f */

void FUN_14079594f(void)

{
  char cVar1;
  uint unaff_retaddr;
  
  while( true ) {
    cVar1 = *(char *)(ulonglong)unaff_retaddr;
    if ((cVar1 == '\0') || ((cVar1 == '%' && (((char *)(ulonglong)unaff_retaddr)[1] != '%'))))
    break;
    unaff_retaddr = unaff_retaddr + (cVar1 == '%');
  }
  return;
}

