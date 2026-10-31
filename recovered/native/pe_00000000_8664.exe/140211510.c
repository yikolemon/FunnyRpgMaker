/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140211510 */

/* WARNING: Control flow encountered bad instruction data */

void switchD_1404b9b72::caseD_100(longlong param_1)

{
  char in_AL;
  undefined7 in_register_00000001;
  
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)(param_1 + 0x66) = *(char *)(param_1 + 0x66) + 'f';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

