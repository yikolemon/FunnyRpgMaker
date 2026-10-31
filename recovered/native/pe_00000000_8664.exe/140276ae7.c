/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140276ae7 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140276ae7(ulonglong *param_1,ulonglong *param_2,ulonglong *param_3)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  ulonglong local_10;
  
  local_10 = ram0x000140613b10 ^ (ulonglong)auStack_48;
  uVar3 = *param_2;
  uVar2 = param_2[1] - uVar3;
  uVar5 = param_1[1] - *param_1;
  bVar1 = uVar5 < uVar2;
  if (uVar2 == uVar5) {
    bVar1 = uVar3 < *param_1;
  }
  if (bVar1) {
    local_18 = param_2[2];
    uVar5 = *param_2;
    uVar4 = param_2[1];
    param_2[2] = param_1[2];
    uVar3 = param_1[1];
    *param_2 = *param_1;
    param_2[1] = uVar3;
    param_1[2] = local_18;
    local_28._0_4_ = (undefined4)uVar5;
    local_28._4_4_ = (undefined4)(uVar5 >> 0x20);
    uStack_20._0_4_ = (undefined4)uVar4;
    uStack_20._4_4_ = (undefined4)(uVar4 >> 0x20);
    *(undefined4 *)param_1 = (undefined4)local_28;
    *(undefined4 *)((longlong)param_1 + 4) = local_28._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_20._4_4_;
    uVar3 = *param_2;
    uVar2 = param_2[1] - uVar3;
    local_28 = uVar5;
    uStack_20 = uVar4;
  }
  uVar5 = param_3[1] - *param_3;
  bVar1 = uVar2 < uVar5;
  if (uVar5 == uVar2) {
    bVar1 = *param_3 < uVar3;
  }
  if (bVar1) {
    local_18 = param_3[2];
    uVar3 = *param_3;
    uVar2 = param_3[1];
    param_3[2] = param_2[2];
    uVar5 = param_2[1];
    *param_3 = *param_2;
    param_3[1] = uVar5;
    param_2[2] = local_18;
    local_28._0_4_ = (undefined4)uVar3;
    local_28._4_4_ = (undefined4)(uVar3 >> 0x20);
    uStack_20._0_4_ = (undefined4)uVar2;
    uStack_20._4_4_ = (undefined4)(uVar2 >> 0x20);
    *(undefined4 *)param_2 = (undefined4)local_28;
    *(undefined4 *)((longlong)param_2 + 4) = local_28._4_4_;
    *(undefined4 *)(param_2 + 1) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)param_2 + 0xc) = uStack_20._4_4_;
    uVar5 = param_2[1] - *param_2;
    uVar4 = param_1[1] - *param_1;
    bVar1 = uVar4 < uVar5;
    if (uVar5 == uVar4) {
      bVar1 = *param_2 < *param_1;
    }
    local_28 = uVar3;
    uStack_20 = uVar2;
    if (bVar1) {
      local_18 = param_2[2];
      uVar3 = *param_2;
      uVar2 = param_2[1];
      param_2[2] = param_1[2];
      uVar5 = param_1[1];
      *param_2 = *param_1;
      param_2[1] = uVar5;
      param_1[2] = local_18;
      local_28._0_4_ = (undefined4)uVar3;
      local_28._4_4_ = (undefined4)(uVar3 >> 0x20);
      uStack_20._0_4_ = (undefined4)uVar2;
      uStack_20._4_4_ = (undefined4)(uVar2 >> 0x20);
      *(undefined4 *)param_1 = (undefined4)local_28;
      *(undefined4 *)((longlong)param_1 + 4) = local_28._4_4_;
      *(undefined4 *)(param_1 + 1) = (undefined4)uStack_20;
      *(undefined4 *)((longlong)param_1 + 0xc) = uStack_20._4_4_;
      local_28 = uVar3;
      uStack_20 = uVar2;
    }
  }
  if (ram0x000140613b10 == (local_10 ^ (ulonglong)auStack_48)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_14044aba0(local_10 ^ (ulonglong)auStack_48);
}

