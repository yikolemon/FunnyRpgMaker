/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180211c9a */

uint FUN_180211c9a(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  bVar1 = *param_1;
  uVar3 = (uint)bVar1;
  if (((byte)(&DAT_18033c690)[bVar1 >> 3] >> (bVar1 & 7) & 1) == 0) {
    return 0;
  }
  uVar2 = 0;
  do {
    param_1 = param_1 + 1;
    if (0x19999997 < uVar2) {
      return 0xffffffff;
    }
    uVar2 = (uint)(byte)(&DAT_18033c6b0)[(char)uVar3] + uVar2 * 10;
    uVar3 = (uint)*param_1;
  } while (((byte)(&DAT_18033c690)[*param_1 >> 3] >> (uVar3 & 7) & 1) != 0);
  return uVar2;
}

