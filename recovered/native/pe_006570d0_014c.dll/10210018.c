/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10210018 */

void __fastcall FUN_10210018(int param_1,undefined4 param_2)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x14) + -4 + *(int *)(param_1 + 0xc) * 0x10) = param_2;
  }
  return;
}

