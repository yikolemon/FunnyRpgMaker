/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00422fbb */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __thiscall FUN_00422fbb(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auVar1 [10];
  double dVar2;
  
  dVar2 = (double)CONCAT44(param_3,param_2) / DAT_004d7da0;
  if (dVar2 <= DAT_004d7da8) {
    dVar2 = dVar2 * _DAT_004d7db0;
  }
  else {
    auVar1 = FUN_004924e0(param_1,SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20),-0x55555555,
                          0x3fdaaaaa);
    dVar2 = (double)(float10)auVar1 * _DAT_004d7db8 + _DAT_004d7dc0;
  }
  return (float10)(dVar2 * _DAT_004d7dc8);
}

