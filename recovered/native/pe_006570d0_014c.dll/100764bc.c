/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100764bc */

undefined4 __thiscall
FUN_100764bc(int param_1,undefined4 *param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 auStack_1c [3];
  undefined1 local_19 [5];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_1c;
  *param_5 = param_3;
  uVar4 = *param_2;
  uVar2 = param_2[1];
  iVar3 = FUN_1022c060(local_19,0,param_2,param_1 + 8);
  if (iVar3 < 1) {
    uVar4 = 2;
  }
  else {
    iVar1 = iVar3 + -1;
    if (param_4 - *param_5 < iVar1) {
      *param_2 = uVar4;
      param_2[1] = uVar2;
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
      if (iVar3 != 1) {
        FUN_1025b2d0(*param_5,local_19,iVar1);
        *param_5 = *param_5 + iVar1;
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_1c)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

