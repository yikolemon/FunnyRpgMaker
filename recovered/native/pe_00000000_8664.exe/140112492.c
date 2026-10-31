/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140112492 */

int FUN_140112492(int param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(DAT_140f2a910 + 0x24f8);
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

