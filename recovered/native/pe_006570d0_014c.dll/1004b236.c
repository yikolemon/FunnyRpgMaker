/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1004b236 */

undefined4 *
FUN_1004b236(undefined4 *param_1,undefined4 param_2,int param_3,int *param_4,char param_5,
            int *param_6)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 uVar2;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint local_24;
  undefined4 local_20;
  undefined2 local_1a;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_24;
  iVar1 = *param_4;
  iVar5 = 0;
  if (iVar1 - param_3 == 0 || iVar1 < param_3) {
LAB_1004b28d:
    local_24 = (uint)*(byte *)((int)param_4 + 0xe);
  }
  else {
    if (*(char *)((int)param_4 + 9) != '\0') {
      param_5 = *(char *)((int)param_4 + 9);
    }
    if (param_5 == '\x03') {
      iVar3 = (iVar1 - param_3) / 2;
      iVar5 = (iVar1 - param_3) - iVar3;
    }
    else {
      if (param_5 != '\x02') {
        if (param_5 == '\x01') {
          iVar5 = iVar1 - param_3;
        }
        goto LAB_1004b28d;
      }
      iVar3 = iVar1 - param_3;
      iVar5 = 0;
    }
    local_24 = (uint)*(byte *)((int)param_4 + 0xe);
    if (0 < iVar3) {
      iVar1 = local_24 * 2;
      uVar4 = iVar3 + 1;
      do {
        FUN_10044e30(param_4 + 4,(int)(param_4 + 4) + iVar1,param_2);
        uVar4 = uVar4 - 1;
        param_2 = extraout_EDX_01;
      } while (1 < uVar4);
    }
  }
  FUN_10044e30(*param_6,*param_6 + 4,param_2);
  uVar2 = extraout_EDX;
  if ((*(char *)param_6[1] == '\x01') &&
     (iVar1 = *(int *)param_6[3] - *(int *)param_6[2], uVar2 = extraout_EDX,
     iVar1 != 0 && *(int *)param_6[2] <= *(int *)param_6[3])) {
    local_1a = 0x30;
    FUN_10047dcc(&local_18,extraout_EDX,iVar1,&local_1a);
    uVar2 = local_18;
  }
  FUN_10045530(&local_20,param_6[4],*(undefined4 *)param_6[5],uVar2);
  if (0 < iVar5) {
    iVar1 = local_24 * 2;
    uVar4 = iVar5 + 1;
    do {
      FUN_10044e30(param_4 + 4,(int)param_4 + iVar1 + 0x10,local_20);
      uVar4 = uVar4 - 1;
      local_20 = extraout_EDX_00;
    } while (1 < uVar4);
  }
  *param_1 = local_20;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

