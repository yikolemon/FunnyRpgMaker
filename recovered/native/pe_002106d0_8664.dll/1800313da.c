/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800313da */

undefined8
FUN_1800313da(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             uint param_5,undefined1 param_6,longlong param_7)

{
  undefined1 *local_260;
  longlong local_258;
  undefined8 local_250;
  code *local_248;
  undefined1 local_240 [504];
  undefined1 *local_48;
  ulonglong local_40;
  undefined1 local_38 [8];
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if (*(longlong *)(param_7 + 0x30) == 0) {
    FUN_180031518(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    local_260 = local_240;
    local_258 = 0;
    local_248 = FUN_18002792e;
    local_250 = 500;
    FUN_180031518(local_38,&local_260,param_3,param_4,param_5,param_6);
    local_40 = (ulonglong)param_5;
    local_48 = local_260;
    FUN_180028380(param_7,local_38,param_2);
    FUN_180025857(param_1,local_260 + (int)param_5,local_260 + local_258,param_2);
    if (local_260 != local_240) {
      thunk_FUN_180290e40();
    }
  }
  return param_1;
}

