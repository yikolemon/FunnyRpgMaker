/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00424b24 */

int __thiscall FUN_00424b24(void *this,undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  void *this_01;
  
  iVar1 = FUN_00424b8a(this,(int)param_1,(int)((ulonglong)param_1 >> 0x20));
  iVar2 = FUN_00424b8a(this_00,(int)param_2,(int)((ulonglong)param_2 >> 0x20));
  iVar3 = FUN_00424b8a(this_01,(int)param_3,(int)((ulonglong)param_3 >> 0x20));
  return iVar3 + (iVar2 << 8 | iVar1 << 0x10) + -0x1000000;
}

