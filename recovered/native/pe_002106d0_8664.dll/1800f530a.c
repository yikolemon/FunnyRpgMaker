/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800f530a */

undefined8 * FUN_1800f530a(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auStack_48 [32];
  undefined8 local_28;
  undefined8 uStack_20;
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_48;
  if (param_1 != param_2) {
    FUN_1800f63f4(param_1);
    if (*(int *)(param_1 + 1) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_18028c2e0();
    }
    uVar1 = *param_2;
    uVar2 = param_2[1];
    *param_2 = 0;
    *(undefined4 *)(param_2 + 1) = 0;
    local_28._0_4_ = (undefined4)uVar1;
    local_28._4_4_ = (undefined4)((ulonglong)uVar1 >> 0x20);
    uStack_20._0_4_ = (undefined4)uVar2;
    uStack_20._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
    *(undefined4 *)param_1 = (undefined4)local_28;
    *(undefined4 *)((longlong)param_1 + 4) = local_28._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_20;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_20._4_4_;
    local_28 = uVar1;
    uStack_20 = uVar2;
    FUN_1800f6424(param_1 + 2,param_2 + 2);
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_48)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_48);
}

