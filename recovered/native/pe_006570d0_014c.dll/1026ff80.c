/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1026ff80 */

float10 FUN_1026ff80(double param_1)

{
  uint uVar1;
  uint uVar3;
  double dVar2;
  
  uVar3 = (uint)((ulonglong)param_1 >> 0x20);
  uVar1 = uVar3 >> 0x14 & 0x7ff;
  if (0x432 < uVar1) {
    return (float10)param_1;
  }
  if (uVar1 < 0x3ff) {
    if (uVar1 < 0x3fe) {
      return (float10)(double)(((ulonglong)uVar3 & 0x80000000) << 0x20);
    }
    return (float10)(double)(((ulonglong)uVar3 & 0xbff00000) << 0x20 | 0x3ff0000000000000);
  }
  dVar2 = (double)__allshl((ulonglong)param_1 >> (ulonglong)(0x432 - uVar1));
  return (float10)dVar2;
}

