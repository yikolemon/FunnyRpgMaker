/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006602e */

void FUN_18006602e(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  ulonglong uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  ulonglong local_8;
  
  local_8 = DAT_180402640 ^ (ulonglong)auStack_48;
  uVar3 = *param_2;
  if (uVar3 < *param_1) {
    local_18 = param_2[2];
    uVar1 = *param_2;
    uVar2 = param_2[1];
    param_2[2] = param_1[2];
    uVar3 = param_1[1];
    *param_2 = *param_1;
    param_2[1] = uVar3;
    param_1[2] = local_18;
    local_28._0_4_ = (undefined4)uVar1;
    local_28._4_4_ = (undefined4)(uVar1 >> 0x20);
    uStack_20._0_4_ = (undefined4)uVar2;
    uStack_20._4_4_ = (undefined4)(uVar2 >> 0x20);
    *(undefined4 *)param_1 = (undefined4)local_28;
    *(undefined4 *)((longlong)param_1 + 4) = local_28._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_20._4_4_;
    uVar3 = *param_2;
    local_28 = uVar1;
    uStack_20 = uVar2;
  }
  if (*param_3 < uVar3) {
    local_18 = param_3[2];
    uVar3 = *param_3;
    uVar1 = param_3[1];
    param_3[2] = param_2[2];
    uVar2 = param_2[1];
    *param_3 = *param_2;
    param_3[1] = uVar2;
    param_2[2] = local_18;
    local_28._0_4_ = (undefined4)uVar3;
    local_28._4_4_ = (undefined4)(uVar3 >> 0x20);
    uStack_20._0_4_ = (undefined4)uVar1;
    uStack_20._4_4_ = (undefined4)(uVar1 >> 0x20);
    *(undefined4 *)param_2 = (undefined4)local_28;
    *(undefined4 *)((longlong)param_2 + 4) = local_28._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_20._4_4_;
    local_28 = uVar3;
    uStack_20 = uVar1;
    if (*param_2 < *param_1) {
      local_18 = param_2[2];
      uVar3 = *param_2;
      uVar1 = param_2[1];
      param_2[2] = param_1[2];
      uVar2 = param_1[1];
      *param_2 = *param_1;
      param_2[1] = uVar2;
      param_1[2] = local_18;
      local_28._0_4_ = (undefined4)uVar3;
      local_28._4_4_ = (undefined4)(uVar3 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar1;
      uStack_20._4_4_ = (undefined4)(uVar1 >> 0x20);
      *(undefined4 *)param_1 = (undefined4)local_28;
      *(undefined4 *)((longlong)param_1 + 4) = local_28._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_20._4_4_;
      local_28 = uVar3;
      uStack_20 = uVar1;
    }
  }
  if (DAT_180402640 == (local_8 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_8 ^ (ulonglong)auStack_48);
}

