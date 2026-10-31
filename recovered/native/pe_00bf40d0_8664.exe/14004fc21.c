/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004fc21 */

uint FUN_14004fc21(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  
  pbVar1 = param_1 + 1;
  bVar2 = *param_1;
  if (bVar2 == 0x1d) {
    if (param_2 < pbVar1 || param_1 + 5 <= param_2) {
      uVar3 = *(uint *)(param_1 + 1);
      return uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    }
  }
  else if (bVar2 == 0x1c) {
    if (param_2 < pbVar1 || param_1 + 3 <= param_2) {
      return (int)(short)((ushort)param_1[1] << 8) | (uint)param_1[2];
    }
  }
  else {
    if (bVar2 < 0xf7) {
      return bVar2 - 0x8b;
    }
    if (bVar2 < 0xfb) {
      if (param_2 < pbVar1 || param_1 + 2 <= param_2) {
        return ((uint)bVar2 * 0x100 + (uint)*pbVar1) - 0xf694;
      }
    }
    else if (param_2 < pbVar1 || param_1 + 2 <= param_2) {
      return 0xfa94 - CONCAT11(bVar2,*pbVar1);
    }
  }
  return 0;
}

