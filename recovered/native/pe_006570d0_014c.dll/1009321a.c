/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009321a */

void __thiscall FUN_1009321a(int param_1,undefined2 param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(int *)(*(int *)(param_1 + 4) + 4) != 6) {
    FUN_10094888();
  }
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    param_2 = (**(code **)(**(int **)(*(int *)(param_1 + 0xc) + 4) + 0x20))(param_2);
  }
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(uint *)(iVar1 + 0x18);
  if (*(uint *)(iVar1 + 0x14) <= uVar2) {
    FUN_100946a8(1);
    uVar2 = *(uint *)(iVar1 + 0x18);
  }
  *(uint *)(iVar1 + 0x18) = uVar2 + 1;
  *(undefined2 *)(*(int *)(iVar1 + 0x1c) + uVar2 * 2) = param_2;
  return;
}

