/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10142d40 */

undefined4 __fastcall FUN_10142d40(int param_1,int param_2)

{
  return CONCAT31((int3)((uint)*(int *)(param_1 + 0x14) >> 8),
                  *(undefined1 *)(*(int *)(param_1 + 0x14) + param_2));
}

