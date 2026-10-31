/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14064b941 */

/* WARNING: Control flow encountered bad instruction data */

void Unwind_14064b941(undefined8 param_1,char *param_2)

{
  char in_AH;
  
  *param_2 = *param_2 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

