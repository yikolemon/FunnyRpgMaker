/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140769306 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_140769306(void)

{
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

