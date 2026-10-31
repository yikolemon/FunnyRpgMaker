/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1003d17a */

void __thiscall FUN_1003d17a(int param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = param_4[1];
  uVar3 = iVar2 + 1;
  if ((uint)param_4[2] < uVar3) {
    (*(code *)param_4[3])(param_4,uVar3);
    iVar2 = param_4[1];
    uVar3 = iVar2 + 1;
  }
  uVar1 = *(undefined1 *)(param_1 + 0x10);
  param_4[1] = uVar3;
  *(undefined1 *)(*param_4 + iVar2) = uVar1;
  return;
}

