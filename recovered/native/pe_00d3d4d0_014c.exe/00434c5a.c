/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00434c5a */

int __fastcall FUN_00434c5a(int param_1,uint param_2,uint *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0041ccd3(param_1,(int)param_3);
  if (piVar1 == (int *)0x0) {
    iVar2 = FUN_0041cb8d(param_1,param_2 & 0xffff,param_3,param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
  }
  else {
    iVar2 = FUN_0041cb8d((uint)*(ushort *)((int)piVar1 + 2) * 0x10000 + param_1 + 0x10000,
                         param_2 & 0xffff,param_3,param_4);
    if (iVar2 != 0) {
      return iVar2;
    }
    *piVar1 = *piVar1 + 0x10000;
  }
  return 0;
}

