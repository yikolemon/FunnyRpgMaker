/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009369c */

uint __thiscall FUN_1009369c(int param_1,byte param_2)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = (uint)*(ushort *)(param_1 + 0x4e);
  uVar4 = *(uint *)(param_1 + 0x38);
  bVar2 = (byte)(*(ushort *)(param_1 + 0x4e) >> 8);
  if ((uVar4 >> 0x15 & 1) != 0) {
    if (0xff < uVar3) {
      return CONCAT31((uint3)bVar2,1);
    }
    if ((uVar3 - 99 < 0x15) && ((0x110003U >> (uVar3 - 99 & 0x1f) & 1) != 0)) {
      return 0;
    }
    if ((uVar3 - 0x44 < 0x14) && ((0x88001U >> (uVar3 - 0x44 & 0x1f) & 1) != 0)) {
      return 0;
    }
    return 1;
  }
  if (uVar3 < 0x100) {
    if (uVar3 < 0x5c) {
      uVar1 = uVar3 - 0x22;
      if (uVar1 < 0x1e) {
        if ((0x200002c0U >> (uVar1 & 0x1f) & 1) != 0) goto LAB_10093747;
        if ((0x1104U >> (uVar1 & 0x1f) & 1) != 0) goto LAB_10093755;
        if ((0x2001U >> (uVar1 & 0x1f) & 1) != 0) {
          return uVar4 >> 0x17 & 1;
        }
      }
      if (uVar3 != 0x5b) goto LAB_10093759;
    }
    else {
      if (uVar3 - 0x7b < 3) {
LAB_10093747:
        return (uint)CONCAT11(bVar2,(param_2 ^ 1) & (byte)(uVar4 >> 0x16));
      }
      if (1 < uVar3 - 0x5d) {
        if (uVar3 == 0x5c) {
          return CONCAT31((uint3)bVar2,1);
        }
        goto LAB_10093759;
      }
    }
LAB_10093755:
    uVar4 = CONCAT11(bVar2,param_2) ^ 1;
  }
  else {
LAB_10093759:
    uVar4 = 0;
  }
  return uVar4;
}

