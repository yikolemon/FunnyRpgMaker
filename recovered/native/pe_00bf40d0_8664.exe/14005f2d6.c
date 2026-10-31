/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005f2d6 */

uint FUN_14005f2d6(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *param_1;
  uVar3 = (uint)bVar1;
  if (((byte)(&DAT_1400f97c0)[bVar1 >> 3] >> (bVar1 & 7) & 1) == 0) {
    return 0;
  }
  uVar2 = 0;
  do {
    param_1 = param_1 + 1;
    if (0x19999997 < uVar2) {
      return 0xffffffff;
    }
    uVar2 = (uint)(byte)(&DAT_1400f97e0)[(char)uVar3] + uVar2 * 10;
    uVar3 = (uint)*param_1;
  } while (((byte)(&DAT_1400f97c0)[*param_1 >> 3] >> (uVar3 & 7) & 1) != 0);
  return uVar2;
}

