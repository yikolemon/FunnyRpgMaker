/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042fab9 */

undefined4 __fastcall FUN_0042fab9(int param_1)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x198) >> 8),
                  *(int *)(*(int *)(param_1 + 0x198) + 0x38) != 0);
}

