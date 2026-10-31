/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00424b8a */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __thiscall FUN_00424b8a(void *this,undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auVar2 [10];
  float10 fVar3;
  double dVar4;
  
  dVar4 = (double)CONCAT44(param_2,param_1) / DAT_004d7da0;
  if (dVar4 <= DAT_004d7da8) {
    dVar4 = dVar4 * _DAT_004d7db0;
  }
  else {
    auVar2 = FUN_004924e0(this,SUB84(dVar4,0),(uint)((ulonglong)dVar4 >> 0x20),-0x55555555,
                          0x3fdaaaaa);
    dVar4 = (double)(float10)auVar2 * _DAT_004d7db8 + _DAT_004d7dc0;
  }
  fVar3 = FUN_00492980(dVar4 * _DAT_004d7dc8);
  iVar1 = 0;
  if (0 < (int)fVar3) {
    iVar1 = (int)fVar3;
  }
  if (0xfe < iVar1) {
    iVar1 = 0xff;
  }
  return iVar1;
}

