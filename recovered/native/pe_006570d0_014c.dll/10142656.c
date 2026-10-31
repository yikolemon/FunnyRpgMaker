/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10142656 */

void __fastcall FUN_10142656(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = **(undefined4 **)(param_1 + 4);
  (*(undefined4 **)(param_1 + 4))[2] = uVar1;
  *(undefined4 *)(*(int *)(param_1 + 4) + 4) = uVar1;
  return;
}

