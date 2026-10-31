/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180156627 */

void FUN_180156627(longlong param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  longlong lVar4;
  
  sVar3 = *(short *)(param_1 + 0xa18);
  if (0 < sVar3) {
    if (-1 < *(int *)(param_1 + 0xc)) {
      iVar1 = *(int *)(param_1 + 4);
      *(int *)(param_1 + 0xa1c) = *(int *)(param_1 + 0xa1c) - iVar1;
      FUN_1802a82f0(param_1 + 0x630);
      sVar3 = *(short *)(param_1 + 0xa18);
      if (0 < (longlong)sVar3) {
        lVar4 = 0;
        do {
          iVar2 = *(int *)(param_1 + 0xc + lVar4);
          if (-1 < iVar2) {
            *(int *)(param_1 + 0xc + lVar4) = iVar2 - iVar1;
          }
          lVar4 = lVar4 + 0x10;
        } while ((longlong)sVar3 << 4 != lVar4);
      }
    }
    *(short *)(param_1 + 0xa18) = sVar3 + -1;
    FUN_1802a82f0(param_1,param_1 + 0x10,(longlong)(short)(sVar3 + -1) << 4);
    return;
  }
  return;
}

