/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1405046c7 */

/* WARNING: Control flow encountered bad instruction data */

void Unwind_1405046c7(undefined8 param_1,uint param_2)

{
  uint *unaff_RSI;
  
  *unaff_RSI = *unaff_RSI ^ param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

