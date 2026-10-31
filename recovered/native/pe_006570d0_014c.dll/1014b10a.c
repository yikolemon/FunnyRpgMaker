/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014b10a */

void __thiscall FUN_1014b10a(int param_1,int param_2)

{
  undefined4 uVar1;
  
  FUN_101412d9(param_1,param_2);
  FUN_101412d9(param_1 + 0x10,param_2 + 0x10);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  *(undefined4 *)(param_2 + 0x14) = *(undefined4 *)(param_1 + 0x14);
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x18);
  *(undefined4 *)(param_2 + 0x18) = *(undefined4 *)(param_1 + 0x18);
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + 0x1c);
  *(undefined4 *)(param_1 + 0x1c) = uVar1;
  return;
}

