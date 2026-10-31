/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10187e9e */

void __thiscall FUN_10187e9e(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == -8) {
    if (*(int *)(param_1[0xb] + 0x54) == 0) {
      param_2 = -8;
    }
    else {
      iVar4 = *(int *)(*(int *)(param_1[0xb] + 0x54) + 0xc2c);
      param_2 = -8;
      if (iVar4 != 0) {
        param_2 = iVar4;
      }
    }
  }
  if (*(int *)(param_1[2] + -0x18 + *param_1 * 0x40) == 0) {
    iVar4 = param_1[2] + *param_1 * 0x40;
  }
  else {
    FUN_10187d74();
    iVar4 = *param_1 * 0x40 + param_1[2];
  }
  *(int *)(iVar4 + -0x14) = param_2;
  if (param_4 == 0) {
    *(undefined4 *)(iVar4 + -0x10) = param_3;
    *(undefined4 *)(iVar4 + -0xc) = 0;
    *(undefined4 *)(iVar4 + -8) = 0xffffffff;
  }
  else {
    *(undefined4 *)(iVar4 + -0x10) = 0;
    *(int *)(iVar4 + -0xc) = param_4;
    iVar2 = param_1[0x27];
    *(int *)(iVar4 + -8) = iVar2;
    iVar2 = iVar2 + param_4;
    iVar3 = param_1[0x28];
    if (iVar3 < iVar2) {
      if (iVar3 == 0) {
        iVar3 = 8;
      }
      else {
        iVar3 = iVar3 / 2 + iVar3;
      }
      if (iVar3 <= iVar2) {
        iVar3 = iVar2;
      }
      iVar1 = FUN_100fa1fa(iVar3);
      if (param_1[0x29] != 0) {
        FUN_1025b2d0(iVar1,param_1[0x29],param_1[0x27]);
        FUN_100fa2cb(param_1[0x29]);
      }
      param_1[0x29] = iVar1;
      param_1[0x28] = iVar3;
    }
    else {
      iVar1 = param_1[0x29];
    }
    param_1[0x27] = iVar2;
    FUN_1025b2d0(iVar1 + *(int *)(iVar4 + -8),param_3,param_4);
  }
  FUN_10187d74();
  return;
}

