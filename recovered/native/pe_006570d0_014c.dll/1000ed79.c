/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000ed79 */

undefined4 *
FUN_1000ed79(undefined4 *param_1,undefined4 param_2,int param_3,int *param_4,char param_5)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  iVar1 = *param_4;
  iVar3 = 0;
  if (iVar1 - param_3 == 0 || iVar1 < param_3) {
LAB_1000edc7:
    local_1c = (uint)*(byte *)((int)param_4 + 0xe);
  }
  else {
    if (*(char *)((int)param_4 + 9) != '\0') {
      param_5 = *(char *)((int)param_4 + 9);
    }
    if (param_5 == '\x03') {
      iVar4 = (iVar1 - param_3) / 2;
      iVar3 = (iVar1 - param_3) - iVar4;
    }
    else {
      if (param_5 != '\x02') {
        if (param_5 == '\x01') {
          iVar3 = iVar1 - param_3;
        }
        goto LAB_1000edc7;
      }
      iVar4 = iVar1 - param_3;
      iVar3 = 0;
    }
    local_1c = (uint)*(byte *)((int)param_4 + 0xe);
    if (0 < iVar4) {
      iVar1 = (int)param_4 + 0xf + local_1c;
      uVar2 = iVar4 + 1;
      do {
        FUN_100062e9((int)param_4 + 0xf,iVar1,param_2);
        uVar2 = uVar2 - 1;
        param_2 = extraout_EDX_00;
      } while (1 < uVar2);
    }
  }
  FUN_1000ebd2(&local_18,param_2);
  if (0 < iVar3) {
    iVar1 = local_1c + 0xf;
    uVar2 = iVar3 + 1;
    do {
      FUN_100062e9((int)param_4 + 0xf,(int)param_4 + iVar1,local_18);
      uVar2 = uVar2 - 1;
      local_18 = extraout_EDX;
    } while (1 < uVar2);
  }
  *param_1 = local_18;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

