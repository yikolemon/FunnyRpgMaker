/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dd9035 */

/* WARNING: Control flow encountered bad instruction data */

undefined8 FUN_140dd9035(void)

{
  int iVar1;
  
  iVar1 = *(int *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  if ((iVar1 != 0) && (iVar1 != 0x4f9790)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0x7fffffff;
}

