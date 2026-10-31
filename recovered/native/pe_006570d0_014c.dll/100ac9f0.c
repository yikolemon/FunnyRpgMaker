/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100ac9f0 */

int * __thiscall FUN_100ac9f0(int *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *unaff_FS_OFFSET;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  int *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_34;
  local_18 = &LAB_100c4620;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  local_14 = 0;
  local_28 = param_3[4];
  local_30 = param_4[4];
  local_2c = local_30 + local_28;
  local_24 = param_1;
  if ((uint)param_3[5] < (uint)param_4[5] || param_3[5] - local_28 < local_30) {
    if (param_4[5] - local_30 < local_28) {
      if ((local_28 ^ 0x7fffffff) < local_30) {
        local_20 = (undefined1 *)&local_34;
                    /* WARNING: Subroutine does not return */
        FUN_100013fb();
      }
      uVar4 = 0x16;
      if (0x16 < (local_2c | 0xf)) {
        uVar4 = local_2c | 0xf;
      }
      local_34 = 0x7fffffff;
      if (-1 < (int)local_2c) {
        local_34 = uVar4;
      }
      local_20 = (undefined1 *)&local_34;
      iVar3 = FUN_10001426(local_34 + 1);
      *local_24 = iVar3;
      local_24[4] = local_2c;
      local_24[5] = local_34;
      if (0xf < (uint)param_3[5]) {
        param_3 = (int *)*param_3;
      }
      FUN_1025b2d0(iVar3,param_3,local_28);
      local_30 = local_30 + 1;
      if (0xf < (uint)param_4[5]) {
        param_4 = (int *)*param_4;
      }
      FUN_1025b2d0(iVar3 + local_28,param_4,local_30);
      goto code_r0x100acbac;
    }
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_4 + 4);
    iVar3 = param_4[1];
    iVar1 = param_4[2];
    iVar2 = param_4[3];
    *param_1 = *param_4;
    param_1[1] = iVar3;
    param_1[2] = iVar1;
    param_1[3] = iVar2;
    param_4[4] = 0;
    param_4[5] = 0xf;
    *(undefined1 *)param_4 = 0;
    iVar3 = *param_1;
    local_20 = (undefined1 *)&local_34;
    FUN_1025b2d0(iVar3 + local_28,iVar3,local_30 + 1);
    if (0xf < (uint)param_3[5]) {
      param_3 = (int *)*param_3;
    }
    FUN_1025b2d0(iVar3,param_3,local_28);
  }
  else {
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_3 + 4);
    iVar3 = param_3[1];
    iVar1 = param_3[2];
    iVar2 = param_3[3];
    *param_1 = *param_3;
    param_1[1] = iVar3;
    param_1[2] = iVar1;
    param_1[3] = iVar2;
    param_3[4] = 0;
    param_3[5] = 0xf;
    *(undefined1 *)param_3 = 0;
    if (0xf < (uint)param_1[5]) {
      param_1 = (int *)*param_1;
    }
    if (0xf < (uint)param_4[5]) {
      param_4 = (int *)*param_4;
    }
    FUN_1025b2d0((int)param_1 + local_28,param_4,local_30 + 1);
  }
  local_24[4] = local_2c;
code_r0x100acbac:
  *unaff_FS_OFFSET = local_1c;
  return local_24;
}

