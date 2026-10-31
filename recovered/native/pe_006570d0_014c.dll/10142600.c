/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10142600 */

void __fastcall FUN_10142600(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_100fa683(**(undefined4 **)(param_1 + 4),*(undefined4 *)(param_1 + 0x10));
  **(undefined4 **)(param_1 + 4) = uVar1;
  uVar1 = FUN_100fa683(*(undefined4 *)(*(int *)(param_1 + 4) + 4),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(*(int *)(param_1 + 4) + 4) = uVar1;
  uVar1 = FUN_100fa683(*(undefined4 *)(*(int *)(param_1 + 4) + 8),*(undefined4 *)(param_1 + 0x10));
  *(undefined4 *)(*(int *)(param_1 + 4) + 8) = uVar1;
  return;
}

