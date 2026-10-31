/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001e18a */

uint __thiscall FUN_1001e18a(int param_1,byte param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(byte *)(param_1 + 0x4d);
  uVar2 = *(uint *)(param_1 + 0x38);
  if ((uVar2 >> 0x15 & 1) != 0) {
    if ((uVar3 - 99 < 0x15) && ((0x110003U >> (uVar3 - 99 & 0x1f) & 1) != 0)) {
      return 0;
    }
    if ((uVar3 - 0x44 < 0x14) && ((0x88001U >> (uVar3 - 0x44 & 0x1f) & 1) != 0)) {
      return 0;
    }
    return 1;
  }
  if (uVar3 < 0x5c) {
    uVar1 = uVar3 - 0x22;
    if (uVar1 < 0x1e) {
      if ((0x200002c0U >> (uVar1 & 0x1f) & 1) != 0) goto LAB_1001e215;
      if ((0x1104U >> (uVar1 & 0x1f) & 1) != 0) goto LAB_1001e223;
      if ((0x2001U >> (uVar1 & 0x1f) & 1) != 0) {
        return uVar2 >> 0x17 & 1;
      }
    }
    if (uVar3 != 0x5b) {
      return 0;
    }
  }
  else {
    if (uVar3 - 0x7b < 3) {
LAB_1001e215:
      return (uint)(byte)((param_2 ^ 1) & (byte)(uVar2 >> 0x16));
    }
    if (1 < uVar3 - 0x5d) {
      if (uVar3 != 0x5c) {
        return 0;
      }
      return 1;
    }
  }
LAB_1001e223:
  return param_2 ^ 1;
}

