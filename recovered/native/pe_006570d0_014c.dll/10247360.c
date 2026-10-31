/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10247360 */

void __fastcall FUN_10247360(int *param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  
  if (7 < (uint)param_1[5]) {
    FUN_10236130();
    iVar1 = *param_1;
    uVar4 = param_1[5] * 2 + 2;
    iVar3 = iVar1;
    if (0xfff < uVar4) {
      iVar3 = *(int *)(iVar1 + -4);
      uVar4 = param_1[5] * 2 + 0x25;
      if (0x1f < (iVar1 - iVar3) - 4U) {
        pcVar2 = (code *)swi(0x29);
        (*pcVar2)();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FUN_102283a0(iVar3,uVar4);
  }
  param_1[4] = 0;
  param_1[5] = 7;
  *(undefined2 *)param_1 = 0;
  return;
}

