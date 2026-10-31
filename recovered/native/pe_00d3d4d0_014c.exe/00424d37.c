/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00424d37 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00424d37(undefined4 param_1,double param_2)

{
  undefined1 auVar1 [10];
  double dVar2;
  
  dVar2 = param_2 / DAT_004d7da0;
  if (dVar2 <= DAT_004d80b8) {
    dVar2 = dVar2 * _DAT_004d80c0;
  }
  else {
    auVar1 = FUN_004924e0(param_1,SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20),0x55555555,
                          0x3fd55555);
    dVar2 = (double)(float10)auVar1 * _DAT_004d80c8 + _DAT_004d80d0;
  }
  return (float10)dVar2;
}

