/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14090248c */

/* WARNING: Control flow encountered bad instruction data */

void Unwind_14090248c(void)

{
  char in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  
  cVar1 = in_AL - *(char *)CONCAT71(in_register_00000001,in_AL);
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

