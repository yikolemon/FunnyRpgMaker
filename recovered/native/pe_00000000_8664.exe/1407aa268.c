/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407aa268 */

/* WARNING: Control flow encountered bad instruction data */

void FUN_1407aa268(ulonglong param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  
  if (0 < *(short *)(param_1 + 0xa18)) {
    uVar4 = param_1 & 0xffffffff;
    if (-1 < *(int *)(param_1 + 0xc)) {
      iVar1 = *(int *)(uVar4 + 4);
      *(int *)(uVar4 + 0xa1c) = *(int *)(uVar4 + 0xa1c) - iVar1;
      FUN_1408b31a0();
      if (0 < *(short *)(uVar4 + 0xa18)) {
        uVar3 = (int)param_1 + 0xc;
        do {
          iVar2 = *(int *)(ulonglong)uVar3;
          if (-1 < iVar2) {
            *(int *)(ulonglong)uVar3 = iVar2 - iVar1;
          }
          uVar3 = uVar3 + 0x10;
        } while (uVar3 != 0);
      }
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

