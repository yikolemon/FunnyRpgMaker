/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408d05b0 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1408d05b0(void)

{
  undefined8 unaff_RBX;
  ulonglong uVar1;
  undefined8 unaff_RSI;
  undefined8 unaff_RDI;
  int unaff_retaddr;
  undefined1 auStack_10 [16];
  
  uVar1 = (ulonglong)(uint)((int)auStack_10 - unaff_retaddr);
  *(undefined8 *)(uVar1 - 8) = unaff_RBX;
  *(undefined8 *)(uVar1 - 0x10) = unaff_RSI;
  *(undefined8 *)(uVar1 - 0x18) = unaff_RDI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

