/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00423c7d */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float10 __cdecl FUN_00423c7d(undefined4 param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  undefined1 auVar1 [10];
  double dVar2;
  undefined8 uStack_10;
  
  dVar2 = (double)(_DAT_004a88c0 & CONCAT44(param_2,param_1));
  dVar2 = (DAT_004d7dd8 * dVar2) / (DAT_004d7dd0 - dVar2);
  if (dVar2 <= 0.0) {
    dVar2 = 0.0;
  }
  FUN_00424eb0((double)CONCAT44(param_2,param_1));
  auVar1 = FUN_004924e0(extraout_ECX,SUB84(dVar2,0),(uint)((ulonglong)dVar2 >> 0x20),-0x3cf3cf3d,
                        0x40030c30);
  return (float10)(uStack_10 * (double)(float10)auVar1);
}

