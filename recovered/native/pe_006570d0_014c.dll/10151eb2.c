/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10151eb2 */

void __fastcall FUN_10151eb2(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar2 = (int)*(short *)(param_1 + 0xa1a);
  if (iVar2 < 99) {
    if (-1 < *(int *)(param_1 + 0x62c)) {
      iVar1 = *(int *)(param_1 + 0x624);
      iVar3 = *(int *)(param_1 + 0xa20);
      iVar2 = iVar3 + iVar1;
      *(int *)(param_1 + 0xa20) = iVar2;
      FUN_1025b2d0(param_1 + iVar2 + 0x630,iVar3 + param_1 + 0x630,999 - iVar2);
      iVar2 = (int)*(short *)(param_1 + 0xa1a);
      if (iVar2 < 0x62) {
        iVar3 = iVar2 + -0x62;
        piVar4 = (int *)(iVar2 * 0x10 + param_1 + 0xc);
        do {
          if (-1 < *piVar4) {
            *piVar4 = *piVar4 + iVar1;
          }
          piVar4 = piVar4 + 4;
          iVar3 = iVar3 + 1;
        } while (iVar3 != 0);
      }
    }
    FUN_1025b2d0(iVar2 * 0x10 + param_1 + 0x10,param_1 + iVar2 * 0x10,iVar2 * -0x10 + 0x620);
    *(short *)(param_1 + 0xa1a) = *(short *)(param_1 + 0xa1a) + 1;
  }
  return;
}

