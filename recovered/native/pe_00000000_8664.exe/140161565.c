/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140161565 */

ulonglong FUN_140161565(byte *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  uint uVar3;
  
  bVar1 = *param_1;
  uVar3 = (uint)bVar1;
  if (((byte)(&DAT_140ea0a00)[bVar1 >> 3] >> (bVar1 & 7) & 1) == 0) {
    return 0;
  }
  uVar2 = 0;
  do {
    param_1 = param_1 + 1;
    if (0x1997 < ((uint)uVar2 & 0xffff)) {
      return CONCAT62((int6)(uVar2 >> 0x10),0xffff);
    }
    uVar2 = (ulonglong)((uint)(byte)(&DAT_140ea0a20)[(char)uVar3] + (uint)uVar2 * 10);
    uVar3 = (uint)*param_1;
  } while (((byte)(&DAT_140ea0a00)[*param_1 >> 3] >> (uVar3 & 7) & 1) != 0);
  return uVar2;
}

