/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10004e60 */

void __fastcall FUN_10004e60(int *param_1)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  
  uVar1 = param_1[5];
  if (0xf < uVar1) {
    iVar2 = *param_1;
    uVar4 = uVar1 + 1;
    iVar5 = iVar2;
    if (0xfff < uVar4) {
      iVar5 = *(int *)(iVar2 + -4);
      if (0x1f < (uint)((iVar2 + -4) - iVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      uVar4 = uVar1 + 0x24;
    }
    FUN_102283a0(iVar5,uVar4);
  }
  param_1[4] = 0;
  param_1[5] = 0xf;
  *(undefined1 *)param_1 = 0;
  return;
}

