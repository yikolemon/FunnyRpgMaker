/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10002f22 */

undefined4 *
FUN_10002f22(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 *param_4,
            undefined4 *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 ***local_60 [4];
  int local_50;
  uint local_4c;
  undefined4 ***local_48 [4];
  int local_38;
  uint local_34;
  undefined4 ***local_30;
  undefined4 ***local_2c;
  int local_28;
  undefined1 local_24 [4];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_60;
  local_18 = &LAB_100050a0;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  param_1[4] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[5] = 0xf;
  local_14 = 0;
  local_28 = FUN_10229050();
  puVar1 = param_4 + 4;
  if (7 < (uint)param_4[5]) {
    param_4 = (undefined4 *)*param_4;
  }
  local_2c = local_48;
  local_30 = local_60;
  FUN_10003856(local_30,local_28,param_4,*puVar1,local_2c);
  local_14 = 1;
  puVar1 = param_5 + 4;
  if (7 < (uint)param_5[5]) {
    param_5 = (undefined4 *)*param_5;
  }
  FUN_10003856(local_48,local_28,param_5,*puVar1,local_24);
  local_14 = 2;
  uVar2 = local_38 + param_3 + local_50 + (uint)(local_38 != 0) * 4 + 4;
  if ((uint)param_1[5] < uVar2) {
    local_28 = param_1[4];
    FUN_10003cd4(uVar2 - local_28,local_24[0]);
    param_1[4] = local_28;
  }
  FUN_1000347e(param_2,param_3);
  FUN_1000347e(&DAT_1034a797,3);
  if (0xf < local_4c) {
    local_30 = local_60[0];
  }
  FUN_1000347e(local_30,local_50);
  if (local_38 != 0) {
    FUN_1000347e(&DAT_1034a79b,4);
    if (0xf < local_34) {
      local_2c = local_48[0];
    }
    FUN_1000347e(local_2c,local_38);
  }
  FUN_10003d9a(0x22);
  local_14 = 0xffffffff;
  FUN_10001fee();
  FUN_10001fee();
  ExceptionList = local_1c;
  return param_1;
}

