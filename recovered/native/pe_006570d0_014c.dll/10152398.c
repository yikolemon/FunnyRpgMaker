/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10152398 */

void __fastcall FUN_10152398(int param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  
  sVar2 = *(short *)(param_1 + 0xa18);
  if (0 < sVar2) {
    if (-1 < *(int *)(param_1 + 0xc)) {
      iVar1 = *(int *)(param_1 + 4);
      iVar3 = *(int *)(param_1 + 0xa1c) - iVar1;
      *(int *)(param_1 + 0xa1c) = iVar3;
      FUN_1025b2d0(param_1 + 0x630,param_1 + iVar1 + 0x630,iVar3);
      sVar2 = *(short *)(param_1 + 0xa18);
      iVar3 = (int)sVar2;
      if (0 < iVar3) {
        piVar4 = (int *)(param_1 + 0xc);
        do {
          if (-1 < *piVar4) {
            *piVar4 = *piVar4 - iVar1;
          }
          piVar4 = piVar4 + 4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    *(short *)(param_1 + 0xa18) = sVar2 + -1;
    FUN_1025b2d0(param_1,param_1 + 0x10,(int)(short)(sVar2 + -1) << 4);
  }
  return;
}

