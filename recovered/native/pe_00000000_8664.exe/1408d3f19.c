/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d3f19 */

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_1408d3f19(void)

{
  int iVar1;
  
  iVar1 = *(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if ((iVar1 != 0) && (iVar1 != 0x10325310)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0x7fffffff;
}

