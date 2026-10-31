/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00499486 */

uint __cdecl FUN_00499486(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 uStack_8;
  
  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    return (uint)(bVar1 != 0);
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    uStack_8 = 2;
  }
  else {
    if ((bVar1 & 0xf0) != 0xe0) {
      uVar2 = 0xffffffff;
      if ((bVar1 & 0xf8) == 0xf0) {
        uVar2 = 4;
      }
      return uVar2;
    }
    uStack_8 = 3;
  }
  return uStack_8;
}

