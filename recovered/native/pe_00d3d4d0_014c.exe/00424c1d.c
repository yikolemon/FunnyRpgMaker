/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00424c1d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __fastcall FUN_00424c1d(undefined4 param_1)

{
  undefined1 auVar1 [10];
  double dVar2;
  int iStack00000004;
  undefined8 in_stack_00000000;
  
  iStack00000004 = (int)((ulonglong)in_stack_00000000 >> 0x20);
  dVar2 = (double)iStack00000004 / _DAT_004d7dc8;
  if (dVar2 <= DAT_004d80a8) {
    dVar2 = dVar2 / _DAT_004d7db0;
  }
  else {
    dVar2 = (dVar2 + _DAT_004d80b0) / _DAT_004d7db8;
    auVar1 = FUN_004924e0(param_1,SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20),0x33333333,
                          0x40033333);
    dVar2 = (double)(float10)auVar1;
  }
  return (float10)(dVar2 * DAT_004d7da0);
}

