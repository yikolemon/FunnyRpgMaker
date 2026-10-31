/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020bcc7 */

void __fastcall FUN_1020bcc7(int param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  
  uVar1 = FUN_1020b545();
  if (param_2 < uVar1) {
    *(undefined4 *)(*(int *)(param_1 + 8) + param_2 * 8) = param_3;
    *(undefined4 *)(*(int *)(param_1 + 8) + 4 + param_2 * 8) = 0;
    return;
  }
  FUN_1020a812();
  return;
}

