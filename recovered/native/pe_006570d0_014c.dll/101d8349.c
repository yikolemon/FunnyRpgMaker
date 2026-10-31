/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d8349 */

undefined4 __fastcall FUN_101d8349(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x198) >> 8),
                  *(int *)(*(int *)(param_1 + 0x198) + 0x38) != 0);
}

