/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a5718 */

ulonglong FUN_1400a5718(byte *param_1)

{
  byte bVar1;
  ulonglong uVar2;
  
  bVar1 = *param_1;
  if (-1 < (char)bVar1) {
    return (ulonglong)(bVar1 != 0);
  }
  if ((bVar1 & 0xe0) == 0xc0) {
    return 2;
  }
  if ((bVar1 & 0xf0) == 0xe0) {
    return 3;
  }
  uVar2 = 0xffffffff;
  if ((bVar1 & 0xf8) == 0xf0) {
    uVar2 = 4;
  }
  return uVar2;
}

