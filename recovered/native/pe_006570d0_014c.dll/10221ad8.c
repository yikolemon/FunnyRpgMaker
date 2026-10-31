/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10221ad8 */

void __thiscall
FUN_10221ad8(int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  iVar1 = param_3;
  iVar2 = param_2;
  iVar3 = param_3;
  if (param_10 != 1) {
    if (param_10 == 2) {
      *param_1 = param_6;
      iVar1 = param_7;
      iVar2 = param_6;
      iVar3 = param_7;
    }
    else {
      if (param_10 != 3) {
        return;
      }
      *param_1 = param_8;
      iVar2 = param_8;
      if (param_6 < param_8) {
        iVar2 = param_6;
      }
      if (param_8 < param_6) {
        param_8 = param_6;
      }
      iVar3 = param_9;
      if (param_7 < param_9) {
        iVar3 = param_7;
      }
      iVar1 = param_9;
      param_6 = param_8;
      if (param_9 < param_7) {
        iVar1 = param_7;
      }
    }
    if (param_2 < iVar2) {
      iVar2 = param_2;
    }
    if (param_6 < param_2) {
      param_6 = param_2;
    }
    if (param_3 < iVar3) {
      iVar3 = param_3;
    }
    param_2 = param_6;
    if (iVar1 < param_3) {
      iVar1 = param_3;
    }
  }
  if (param_4 < iVar2) {
    iVar2 = param_4;
  }
  *param_1 = iVar2;
  if (param_2 < param_4) {
    param_2 = param_4;
  }
  param_1[2] = param_2;
  if (param_5 < iVar3) {
    iVar3 = param_5;
  }
  param_1[1] = iVar3;
  if (iVar1 < param_5) {
    iVar1 = param_5;
  }
  param_1[3] = iVar1;
  return;
}

