/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00479258 */

void __thiscall
FUN_00479258(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8,int param_9)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  iVar1 = param_2;
  iVar2 = param_1;
  iVar3 = param_2;
  if (param_9 != 1) {
    if (param_9 == 2) {
      *(int *)this = param_5;
      iVar1 = param_6;
      iVar2 = param_5;
      iVar3 = param_6;
    }
    else {
      if (param_9 != 3) {
        return;
      }
      *(int *)this = param_7;
      iVar2 = param_7;
      if (param_5 < param_7) {
        iVar2 = param_5;
      }
      if (param_7 < param_5) {
        param_7 = param_5;
      }
      iVar3 = param_8;
      if (param_6 < param_8) {
        iVar3 = param_6;
      }
      iVar1 = param_8;
      param_5 = param_7;
      if (param_8 < param_6) {
        iVar1 = param_6;
      }
    }
    if (param_1 < iVar2) {
      iVar2 = param_1;
    }
    if (param_5 < param_1) {
      param_5 = param_1;
    }
    if (param_2 < iVar3) {
      iVar3 = param_2;
    }
    param_1 = param_5;
    if (iVar1 < param_2) {
      iVar1 = param_2;
    }
  }
  if (param_3 < iVar2) {
    iVar2 = param_3;
  }
  *(int *)this = iVar2;
  if (param_1 < param_3) {
    param_1 = param_3;
  }
  *(int *)((int)this + 8) = param_1;
  if (param_4 < iVar3) {
    iVar3 = param_4;
  }
  *(int *)((int)this + 4) = iVar3;
  if (iVar1 < param_4) {
    iVar1 = param_4;
  }
  *(int *)((int)this + 0xc) = iVar1;
  return;
}

