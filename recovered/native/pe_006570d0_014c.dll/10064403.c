/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10064403 */

int FUN_10064403(byte *param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    return 1;
  }
  iVar2 = 2;
  if (((bVar1 & 0xe0) != 0xc0) && (iVar2 = 3, (bVar1 & 0xf0) != 0xe0)) {
    iVar2 = (uint)((bVar1 & 0xf8) == 0xf0) << 2;
  }
  return iVar2;
}

