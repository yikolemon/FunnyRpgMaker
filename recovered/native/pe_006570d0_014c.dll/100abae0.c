/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100abae0 */

void __fastcall FUN_100abae0(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 4);
  if (iVar3 != 0) {
    iVar5 = *(int *)(param_1 + 0xc);
    iVar1 = *(int *)(param_1 + 0x10);
    if (iVar5 != iVar1) {
      do {
        FUN_1006b8c8(iVar5);
        iVar5 = iVar5 + 0x44;
      } while (iVar5 != iVar1);
      iVar3 = *(int *)(param_1 + 4);
    }
    uVar4 = *(int *)(param_1 + 8) * 0x44;
    iVar5 = iVar3;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar3 + -4);
      if (0x1f < (uint)((iVar3 + -4) - iVar5)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      uVar4 = uVar4 + 0x23;
    }
    FUN_102283a0(iVar5,uVar4);
  }
  return;
}

