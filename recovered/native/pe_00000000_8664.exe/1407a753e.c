/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407a753e */

ulonglong FUN_1407a753e(void)

{
  uint uVar1;
  ulonglong uVar2;
  uint uVar3;
  uint unaff_retaddr;
  
  if (*(int *)((ulonglong)unaff_retaddr + 4) < 1) {
    uVar2 = 0;
  }
  else {
    uVar3 = *(uint *)((ulonglong)unaff_retaddr + 0xc);
    uVar2 = 0;
    do {
      if (((((int)uVar2 == 0) || (*(int *)(uVar2 + 0x10) < *(int *)((ulonglong)uVar3 + 0x10))) &&
          (uVar1 = *(uint *)((ulonglong)uVar3 + 8), uVar1 != 0)) &&
         (*(char *)((ulonglong)uVar1 + 0xfa) != '\0')) {
        uVar2 = (ulonglong)uVar3;
      }
      uVar3 = uVar3 + 0x30;
    } while (uVar3 != 0);
  }
  return uVar2;
}

