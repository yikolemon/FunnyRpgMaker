/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10030a7b */

undefined4
FUN_10030a7b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,char param_6,int param_7)

{
  undefined1 *local_22c;
  int local_228;
  undefined4 local_224;
  code *local_220;
  undefined1 local_21c [504];
  undefined1 local_24 [4];
  undefined1 *local_20;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  
  local_20 = (undefined1 *)&local_22c;
  local_14 = 0xffffffff;
  local_18 = &LAB_10059a20;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  if (*(int *)(param_7 + 0x28) == 0) {
    FUN_10030bc1(param_1,param_2,param_3,param_4,param_5,(int)param_6);
    ExceptionList = local_1c;
  }
  else {
    local_22c = local_21c;
    local_228 = 0;
    local_220 = FUN_1002747c;
    local_224 = 500;
    local_14 = 0;
    local_20 = (undefined1 *)&local_22c;
    FUN_10030bc1(local_24,&local_22c,param_3,param_4,param_5,(int)param_6);
    FUN_10027d30(local_24,param_2,local_22c,param_5);
    FUN_100253ad(param_1,local_22c + param_5,local_22c + local_228,param_2);
    local_14 = 0xffffffff;
    if (local_22c != local_21c) {
      thunk_FUN_10274120(local_22c);
    }
    ExceptionList = local_1c;
  }
  return param_1;
}

