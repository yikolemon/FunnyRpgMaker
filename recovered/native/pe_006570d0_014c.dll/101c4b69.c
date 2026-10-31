/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c4b69 */

int FUN_101c4b69(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_18;
  uVar3 = param_1[1];
  if (param_1[5] == 0) {
    uVar1 = param_1[2];
    iVar4 = 0x55;
    if (param_2 <= uVar3 - uVar1 && uVar1 < uVar3) {
      param_1[8] = *param_1 + uVar1;
      param_1[9] = *param_1 + uVar1 + param_2;
      param_1[2] = uVar1 + param_2;
      iVar4 = 0;
    }
  }
  else {
    iVar4 = 0x55;
    if (param_2 <= uVar3) {
      iVar5 = param_1[7];
      iVar2 = FUN_101c21f6(iVar5,param_2,&local_18);
      *param_1 = iVar2;
      iVar4 = local_18;
      if (local_18 == 0) {
        uVar3 = (*(code *)param_1[5])(param_1,param_1[2],iVar2,param_2);
        iVar4 = 0;
        iVar2 = *param_1;
        if (uVar3 < param_2) {
          FUN_101c0017(iVar5,iVar2);
          *param_1 = 0;
          iVar2 = 0;
          iVar4 = 0x55;
        }
        param_1[8] = iVar2;
        iVar5 = param_2 + iVar2;
        if (iVar2 == 0) {
          iVar5 = 0;
        }
        param_1[9] = iVar5;
        param_1[2] = param_1[2] + uVar3;
      }
    }
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_18)) {
    return iVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

