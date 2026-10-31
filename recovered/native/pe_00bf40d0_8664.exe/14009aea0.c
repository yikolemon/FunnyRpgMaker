/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14009aea0 */

ulonglong FUN_14009aea0(ulonglong param_1)

{
  bool bVar1;
  byte bVar2;
  byte bVar3;
  ulonglong uVar4;
  
  uVar4 = param_1 >> 0x34 & 0x7ff;
  if (uVar4 < 0x433) {
    if (uVar4 < 0x3ff) {
      param_1 = param_1 & 0x8000000000000000;
      if (uVar4 == 0x3fe) {
        param_1 = param_1 | 0x3ff0000000000000;
      }
    }
    else {
      bVar3 = (byte)(0x433 - uVar4);
      bVar2 = bVar3 & 0x3f;
      bVar1 = (0x433 - uVar4 & 0x3f) == 0;
      param_1 = (param_1 >> bVar2) +
                (ulonglong)
                (byte)(bVar1 * (0x433 < uVar4) | !bVar1 * ((param_1 >> bVar2 - 1 & 1) != 0)) <<
                (bVar3 & 0x3f);
    }
  }
  return param_1;
}

