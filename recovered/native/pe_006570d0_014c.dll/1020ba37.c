/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020ba37 */

int __fastcall FUN_1020ba37(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    FUN_1020a812();
    param_2 = 0;
  }
  return param_2 * *(int *)(param_1 + 8) + *(int *)(param_1 + 0x18);
}

