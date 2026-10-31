/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140026f5e */

undefined8
FUN_140026f5e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
    FUN_14002709c(param_1,param_2,param_3,param_4,param_5,param_6);
  }
  else {
    local_260 = local_240;
    local_258 = 0;
    local_248 = FUN_14001d464;
    local_250 = 500;
    FUN_14002709c(local_38,&local_260,param_3,param_4,param_5,param_6);
    local_40 = (ulonglong)param_5;
    local_48 = local_260;
    FUN_14001deb6(param_7,local_38,param_2);
    FUN_14001aea5(param_1,local_260 + (int)param_5,local_260 + local_258,param_2);
    if (local_260 != local_240) {
      thunk_FUN_1401aea30();
    }
  }
  return param_1;
}

