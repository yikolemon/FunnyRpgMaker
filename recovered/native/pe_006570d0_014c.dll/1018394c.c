/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018394c */

int * __thiscall FUN_1018394c(float *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int *unaff_FS_OFFSET;
  float fVar3;
  undefined4 local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  int local_2c;
  undefined4 local_28;
  float *local_24;
  undefined1 *local_20;
  int local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_101860c0;
  local_1c = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_1c;
  uVar1 = FUN_100616f3(param_3);
  FUN_100614e8(&local_38,param_3,uVar1);
  if (local_34 == 0) {
    local_28 = uVar1;
    if (param_1[2] == 4.3082323e-26) {
                    /* WARNING: Subroutine does not return */
      FUN_10228490("unordered_map/set too long");
    }
    FUN_10183ab2(param_1 + 1,param_3);
    local_14 = 0;
    fVar3 = (float)((double)((ulonglong)((int)param_1[2] + 1) | (ulonglong)DAT_1028f6b0) -
                   DAT_1028f6b0) /
            (float)((double)((ulonglong)(uint)param_1[7] | (ulonglong)DAT_1028f6b0) - DAT_1028f6b0);
    if (*param_1 <= fVar3 && fVar3 != *param_1) {
      local_24 = param_1;
      FUN_10183b4c();
      FUN_100614e8(&local_40,local_2c + 8,local_28);
      local_34 = local_3c;
      local_38 = local_40;
    }
    iVar2 = local_2c;
    local_2c = 0;
    iVar2 = FUN_10033d76(local_28,local_38,iVar2);
    *param_2 = iVar2;
    *(undefined1 *)(param_2 + 1) = 1;
    local_14 = 0xffffffff;
    FUN_10183bde();
  }
  else {
    *param_2 = local_34;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  *unaff_FS_OFFSET = local_1c;
  return param_2;
}

