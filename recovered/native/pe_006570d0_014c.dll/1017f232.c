/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1017f232 */

void __fastcall FUN_1017f232(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = param_1[1];
  if (iVar4 != 0) {
    iVar6 = param_1[3];
    iVar1 = param_1[4];
    if (iVar6 != iVar1) {
      uVar2 = *param_1;
      do {
        FUN_10179724(uVar2,iVar6);
        iVar6 = iVar6 + 0x2c;
      } while (iVar6 != iVar1);
      iVar4 = param_1[1];
    }
    uVar5 = param_1[2] * 0x2c;
    iVar6 = iVar4;
    if (0xfff < uVar5) {
      iVar6 = *(int *)(iVar4 + -4);
      if (0x1f < (uint)((iVar4 + -4) - iVar6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar5 = uVar5 + 0x23;
    }
    FUN_102283a0(iVar6,uVar5);
  }
  return;
}

