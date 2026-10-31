/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020beb1 */

void __fastcall FUN_1020beb1(int param_1,uint param_2)

{
  uint uVar1;
  
  uVar1 = FUN_1020b545();
  if (uVar1 < param_2) {
    FUN_1020a812();
    return;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + param_2 * -8;
  return;
}

