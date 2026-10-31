/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001dbdc */

void __thiscall FUN_1001dbdc(int param_1,char param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(*(int *)(param_1 + 4) + 4) != 6) {
    FUN_10020142();
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    param_2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 4) + 0x10))((int)param_2);
  }
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(uint *)(iVar1 + 0x18);
  if (*(uint *)(iVar1 + 0x14) <= uVar2) {
    FUN_1001f242(1);
    uVar2 = *(uint *)(iVar1 + 0x18);
  }
  *(uint *)(iVar1 + 0x18) = uVar2 + 1;
  *(char *)(*(int *)(iVar1 + 0x1c) + uVar2) = param_2;
  return;
}

