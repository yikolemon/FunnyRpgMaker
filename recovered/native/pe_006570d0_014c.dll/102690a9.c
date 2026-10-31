/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102690a9 */

void FUN_102690a9(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_2 + 0x24) = 1;
  *(undefined4 *)(param_2 + 0x20) = param_1;
  uVar1 = FUN_1026904a(param_1);
  *(undefined1 *)(param_2 + 0x1c) = 1;
  *(undefined4 *)(param_2 + 0x18) = uVar1;
  return;
}

