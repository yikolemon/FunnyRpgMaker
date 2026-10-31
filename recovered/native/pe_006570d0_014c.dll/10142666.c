/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10142666 */

void __fastcall FUN_10142666(int param_1)

{
  undefined4 uVar1;
  
  *(undefined4 *)(*(int *)(param_1 + 4) + 4) = 0;
  uVar1 = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(*(int *)(param_1 + 4) + 8) = uVar1;
  **(undefined4 **)(param_1 + 4) = uVar1;
  *(undefined1 *)(*(int *)(param_1 + 4) + 0x16) = 0;
  return;
}

