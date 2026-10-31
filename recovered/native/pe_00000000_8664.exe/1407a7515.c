/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a7515 */

int * FUN_1407a7515(void)

{
  uint uVar1;
  uint unaff_retaddr;
  int unaff_retaddr_00;
  
  if ((unaff_retaddr_00 != 0) && (0 < *(int *)((ulonglong)unaff_retaddr + 4))) {
    uVar1 = *(uint *)((ulonglong)unaff_retaddr + 0xc);
    do {
      if (*(int *)(ulonglong)uVar1 == unaff_retaddr_00) {
        return (int *)(ulonglong)uVar1;
      }
      uVar1 = uVar1 + 0x30;
    } while (uVar1 != 0);
  }
  return (int *)0x0;
}

