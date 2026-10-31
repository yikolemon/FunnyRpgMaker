/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18016a4c2 */

int FUN_18016a4c2(int param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_180419160 + 0x24f8);
  if (lVar1 == 0) {
    return 0;
  }
  if (param_1 < 0) {
    param_1 = *(int *)(lVar1 + 0x74);
  }
  if (param_1 == *(int *)(lVar1 + 0x6c)) {
    return (uint)(param_1 == *(short *)(lVar1 + 0x20a)) << 0x1b;
  }
  return *(int *)(*(longlong *)(lVar1 + 0x18) + (longlong)param_1 * 0x74);
}

