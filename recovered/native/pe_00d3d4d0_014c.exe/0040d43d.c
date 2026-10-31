/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0040d43d */

int * __cdecl FUN_0040d43d(int *param_1,uint *param_2,uint *param_3,uint param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if (param_4 != 0) {
    uVar1 = param_4 & 0x7fffff;
    uVar2 = param_4 >> 0x17;
    if (param_4 < 0x4b800000 || param_5 != 2) {
      uVar4 = FUN_0040d6f9(uVar1,uVar2);
      FUN_0040dcba(param_1,param_2,(byte *)param_3,(uint)uVar4,(uint)((ulonglong)uVar4 >> 0x20),
                   param_5,uVar1,uVar2);
      return param_1;
    }
    FUN_0040d4fc(param_1,(byte *)param_2,(byte *)param_3,uVar1 | 0x800000,uVar2 - 0x96);
    return param_1;
  }
  if (param_5 == 1) {
    if ((int)param_3 - (int)param_2 < 5) {
LAB_0040d4ee:
      *param_1 = (int)param_3;
      param_1[1] = 0x84;
      return param_1;
    }
    *(undefined1 *)(param_2 + 1) = 0x30;
    *param_2 = 0x302b6530;
    iVar3 = (int)param_2 + 5;
  }
  else {
    if (param_2 == param_3) goto LAB_0040d4ee;
    *(undefined1 *)param_2 = 0x30;
    iVar3 = (int)param_2 + 1;
  }
  *param_1 = iVar3;
  param_1[1] = 0;
  return param_1;
}

