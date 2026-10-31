/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b74fa */

/* WARNING: Type propagation algorithm not settling */

int __fastcall FUN_100b74fa(undefined4 param_1,uint param_2,int *param_3)

{
  int local_40 [8];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)local_40;
  local_14 = 0xffffffff;
  local_18 = &LAB_100c1c50;
  local_1c = ExceptionList;
  local_40[7] = param_1;
  ExceptionList = &local_1c;
  if ((int)param_2 < 0 || param_3 == (int *)0x0) {
    FUN_100b6cf2();
    ExceptionList = local_1c;
  }
  else {
    local_40[0] = *(int *)(*param_3 + 4);
    if (param_2 < (uint)((*(int *)(*param_3 + 8) - local_40[0] >> 2) * 0x3cf3cf3d)) {
      local_40[1] = 0;
      local_40[2] = 0;
      local_40[3] = 0;
      local_40[4] = 0;
      local_40[5] = 0;
      local_40[6] = 0;
      local_14 = 4;
      local_40[0] = local_40[0] + param_2 * 0x54;
      local_20 = (undefined1 *)local_40;
      FUN_1009f93e(*(int *)(local_40[0] + 4),
                   *(int *)(local_40[0] + 8) - *(int *)(local_40[0] + 4) >> 2);
      FUN_100b76aa(*(int *)(local_40[0] + 0x18),
                   (*(int *)(local_40[0] + 0x1c) - *(int *)(local_40[0] + 0x18) >> 2) * -0x49249249)
      ;
      FUN_100b6d56(local_40 + 1);
      local_14 = 0xffffffff;
      FUN_10060b3c();
      FUN_10004eae();
      ExceptionList = local_1c;
    }
    else {
      local_20 = (undefined1 *)local_40;
      FUN_100b6cf2();
      ExceptionList = local_1c;
      local_40[7] = param_1;
    }
  }
  return local_40[7];
}

