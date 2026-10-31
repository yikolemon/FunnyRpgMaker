/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401af528 */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1401af528(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 local_res8;
  undefined1 local_28 [4];
  undefined4 local_24;
  undefined4 local_20 [2];
  undefined8 *local_18 [2];
  
  local_res8 = param_1;
  if (DAT_140f4f010 == (code *)0xffffffffffffffff) {
LAB_1401af58c:
    local_18[0] = &local_res8;
    local_24 = 4;
    local_20[0] = 4;
    FUN_1401b0018(local_28,local_20,local_18,&local_24);
  }
  else {
    pcVar1 = DAT_140f4f010;
    if (DAT_140f4f010 == (code *)0x0) {
      pcVar1 = (code *)FUN_1401afe18(2,"EnumSystemLocalesEx",&DAT_140eb79b8,&DAT_140eb79c0);
      if (pcVar1 == (code *)0x0) goto LAB_1401af58c;
    }
    (*pcVar1)(local_res8,param_2,param_3,param_4);
  }
  return;
}

