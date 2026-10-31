/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b734c */

undefined4 __fastcall FUN_100b734c(undefined4 param_1,uint param_2,int *param_3)

{
  int iVar1;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1c40;
  local_1c = ExceptionList;
  local_24 = param_1;
  ExceptionList = &local_1c;
  if ((int)param_2 < 0 || param_3 == (int *)0x0) {
    FUN_100b6cf2();
    ExceptionList = local_1c;
  }
  else {
    iVar1 = *(int *)*param_3;
    if (param_2 < (uint)((((int *)*param_3)[1] - iVar1 >> 2) * 0x286bca1b)) {
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = 0;
      local_28 = 0;
      local_14 = 4;
      local_40 = (int *)(iVar1 + param_2 * 0x4c);
      local_20 = (undefined1 *)&local_40;
      FUN_1009f93e(*local_40,local_40[1] - *local_40 >> 2);
      FUN_100b7040(local_40[4],(local_40[5] - local_40[4] >> 3) * -0x55555555);
      FUN_100b6d56(&local_3c);
      local_14 = 0xffffffff;
      FUN_10060b3c();
      FUN_10004eae();
      ExceptionList = local_1c;
    }
    else {
      local_20 = (undefined1 *)&local_40;
      FUN_100b6cf2();
      ExceptionList = local_1c;
      local_24 = param_1;
    }
  }
  return local_24;
}

