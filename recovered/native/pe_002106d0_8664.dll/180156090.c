/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180156090 */

void FUN_180156090(longlong param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  longlong lVar4;
  int *piVar5;
  int iVar6;
  
  sVar3 = *(short *)(param_1 + 0xa1a);
  if (sVar3 < 99) {
    if (-1 < *(int *)(param_1 + 0x62c)) {
      iVar1 = *(int *)(param_1 + 0x624);
      iVar2 = *(int *)(param_1 + 0xa20);
      lVar4 = (longlong)iVar2 + (longlong)iVar1;
      iVar6 = (int)lVar4;
      *(int *)(param_1 + 0xa20) = iVar6;
      FUN_1802a82f0(param_1 + lVar4 + 0x630,param_1 + iVar2 + 0x630,(longlong)(999 - iVar6));
      sVar3 = *(short *)(param_1 + 0xa1a);
      lVar4 = (longlong)sVar3;
      if (lVar4 < 0x62) {
        piVar5 = (int *)(lVar4 * 0x10 + param_1 + 0xc);
        lVar4 = lVar4 + -0x62;
        do {
          if (-1 < *piVar5) {
            *piVar5 = *piVar5 + iVar1;
          }
          piVar5 = piVar5 + 4;
          lVar4 = lVar4 + 1;
        } while (lVar4 != 0);
      }
    }
    lVar4 = (longlong)sVar3 * 0x10;
    FUN_1802a82f0(param_1 + lVar4 + 0x10,param_1 + lVar4,(longlong)sVar3 * -0x10 + 0x620);
    *(short *)(param_1 + 0xa1a) = *(short *)(param_1 + 0xa1a) + 1;
  }
  return;
}

