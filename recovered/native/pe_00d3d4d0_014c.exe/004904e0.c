/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004904e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_004904e0(double param_1)

{
  uint uVar1;
  uint uVar2;
  double dVar3;
  longlong lVar4;
  
  uVar1 = (uint)((ulonglong)param_1 >> 0x20);
  uVar2 = uVar1 >> 0x14;
  lVar4 = CONCAT44(_UNK_004f9354,_DAT_004f9350 - (uVar1 >> 0x14 & _DAT_004f9370));
  if ((uVar2 & 0x800) == 0) {
    dVar3 = (double)(((ulonglong)param_1 >> lVar4) << lVar4);
    if (uVar2 < 0x3ff) {
      return (float10)(double)(-(ulonglong)(_DAT_004f9360 < param_1) & _DAT_004f9340);
    }
    if (uVar2 < 0x433) {
      return (float10)(dVar3 + (double)(-(ulonglong)(dVar3 < param_1) & _DAT_004f9340));
    }
  }
  else {
    if (uVar2 < 0xbff) {
      return (float10)_DAT_004f9380;
    }
    if (uVar2 < 0xc33) {
      return (float10)(double)(((ulonglong)param_1 >> lVar4) << lVar4);
    }
  }
  if (NAN(param_1)) {
    FUN_0049e260(&param_1,&param_1,&param_1,0x3ec);
  }
  return (float10)param_1;
}

