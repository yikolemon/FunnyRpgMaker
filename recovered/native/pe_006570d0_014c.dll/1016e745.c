/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1016e745 */

void __fastcall FUN_1016e745(int param_1,int param_2,int param_3)

{
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(int *)(param_1 + 0xb4) = param_2;
  *(int *)(param_1 + 0xac) = param_2;
  *(int *)(param_1 + 0xb8) = param_2 + param_3;
  *(int *)(param_1 + 0xb0) = param_2 + param_3;
  return;
}

