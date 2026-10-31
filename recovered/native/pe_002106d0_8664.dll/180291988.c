/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180291988 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_180291988(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 local_res8;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined8 *local_18 [2];
  
  local_res8 = param_1;
  if (DAT_180450010 == (code *)0xffffffffffffffff) {
LAB_1802919ec:
    local_18[0] = &local_res8;
    local_24 = 4;
    local_20[0] = 4;
    FUN_180292478(local_28,local_20,local_18,&local_24);
  }
  else {
    pcVar1 = DAT_180450010;
    if (DAT_180450010 == (code *)0x0) {
      pcVar1 = (code *)FUN_180292278(2,"EnumSystemLocalesEx",&DAT_1803536d8,&DAT_1803536e0);
      if (pcVar1 == (code *)0x0) goto LAB_1802919ec;
    }
    (*pcVar1)(local_res8,param_2,param_3,param_4);
  }
  return;
}

