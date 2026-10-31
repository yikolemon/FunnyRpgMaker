/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10003106 */

int __fastcall FUN_10003106(int param_1)

{
  if (0xf < *(uint *)(param_1 + 0x58)) {
    return *(int *)(param_1 + 0x44);
  }
  return param_1 + 0x44;
}

