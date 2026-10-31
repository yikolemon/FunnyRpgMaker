/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101651b5 */

int FUN_101651b5(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(DAT_1039d74c + 0x2308);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 < 0) {
    param_1 = *(int *)(iVar1 + 0x48);
  }
  if (param_1 == *(int *)(iVar1 + 0x40)) {
    return (uint)(param_1 == *(short *)(iVar1 + 0x1be)) << 0x1b;
  }
  return *(int *)(*(int *)(iVar1 + 0x10) + param_1 * 0x74);
}

