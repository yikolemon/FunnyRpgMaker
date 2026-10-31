/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10033a5a */

int * __thiscall FUN_10033a5a(float *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  float fVar3;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  int local_30;
  undefined4 local_2c;
  float *local_28;
  undefined1 local_21;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_44;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059ad0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  uVar1 = FUN_10033e6b(param_3);
  FUN_10033bce(&local_3c,param_3,uVar1);
  if (local_38 == 0) {
    local_2c = uVar1;
    if (param_1[2] == 2.5243547e-29) {
                    /* WARNING: Subroutine does not return */
      FUN_10228490("unordered_map/set too long");
    }
    local_44 = param_3;
    FUN_10033c1a(param_1 + 1,&DAT_102910a0,&local_44,&local_21);
    local_14 = 0;
    fVar3 = (float)((double)((ulonglong)((int)param_1[2] + 1) | (ulonglong)DAT_1028f6b0) -
                   DAT_1028f6b0) /
            (float)((double)((ulonglong)(uint)param_1[7] | (ulonglong)DAT_1028f6b0) - DAT_1028f6b0);
    if (*param_1 <= fVar3 && fVar3 != *param_1) {
      local_28 = param_1;
      FUN_10033ce4();
      FUN_10033bce(&local_44,local_30 + 8,local_2c);
      local_38 = local_40;
      local_3c = local_44;
    }
    iVar2 = local_30;
    local_30 = 0;
    iVar2 = FUN_10033d76(local_2c,local_3c,iVar2);
    *param_2 = iVar2;
    *(undefined1 *)(param_2 + 1) = 1;
    local_14 = 0xffffffff;
    FUN_10033dc4();
  }
  else {
    *param_2 = local_38;
    *(undefined1 *)(param_2 + 1) = 0;
  }
  ExceptionList = local_1c;
  return param_2;
}

