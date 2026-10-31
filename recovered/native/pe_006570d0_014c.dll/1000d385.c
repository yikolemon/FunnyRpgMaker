/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1000d385 */

undefined4 *
FUN_1000d385(undefined4 *param_1,undefined4 param_2,int param_3,int *param_4,char param_5,
            int *param_6)

{
  int iVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  iVar1 = *param_4;
  iVar3 = 0;
  if (iVar1 - param_3 == 0 || iVar1 < param_3) {
LAB_1000d3dc:
    local_1c = (uint)*(byte *)((int)param_4 + 0xe);
  }
  else {
    if (*(char *)((int)param_4 + 9) != '\0') {
      param_5 = *(char *)((int)param_4 + 9);
    }
    if (param_5 == '\x03') {
      iVar2 = (iVar1 - param_3) / 2;
      iVar3 = (iVar1 - param_3) - iVar2;
    }
    else {
      if (param_5 != '\x02') {
        if (param_5 == '\x01') {
          iVar3 = iVar1 - param_3;
        }
        goto LAB_1000d3dc;
      }
      iVar2 = iVar1 - param_3;
      iVar3 = 0;
    }
    local_1c = (uint)*(byte *)((int)param_4 + 0xe);
    if (0 < iVar2) {
      iVar1 = local_1c + (int)param_4 + 0xf;
      uVar4 = iVar2 + 1;
      do {
        FUN_100062e9((int)param_4 + 0xf,iVar1,param_2);
        uVar4 = uVar4 - 1;
        param_2 = extraout_EDX;
      } while (1 < uVar4);
    }
  }
  FUN_1000ae69(&local_18,param_2,*param_6,param_6[2] - *param_6);
  if (0 < iVar3) {
    iVar1 = local_1c + 0xf;
    uVar4 = iVar3 + 1;
    do {
      FUN_100062e9((int)param_4 + 0xf,(int)param_4 + iVar1,local_18);
      uVar4 = uVar4 - 1;
      local_18 = extraout_EDX_00;
    } while (1 < uVar4);
  }
  *param_1 = local_18;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

