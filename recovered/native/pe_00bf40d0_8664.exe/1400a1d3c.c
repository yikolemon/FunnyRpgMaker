/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a1d3c */

/* WARNING: Function: _guard_dispatch_icall replaced with injection: guard_dispatch_icall */

void FUN_1400a1d3c(undefined8 param_1,uint param_2,undefined8 param_3,undefined8 param_4)

{
  FARPROC pFVar1;
  undefined8 local_res8;
  undefined1 local_28 [4];
  int local_24 [3];
  undefined8 *local_18 [2];
  
  local_res8 = param_1;
  if (DAT_140151010 == (FARPROC)0xffffffffffffffff) {
LAB_1400a1da0:
    local_18[0] = &local_res8;
    local_24[0] = 4;
    local_24[1] = 4;
    FUN_1400a26ac(local_28,local_24 + 1,local_18,local_24);
  }
  else {
    pFVar1 = DAT_140151010;
    if (DAT_140151010 == (FARPROC)0x0) {
      pFVar1 = FUN_1400a24ac(2,"EnumSystemLocalesEx",(uint *)&DAT_14010fe68,(uint *)&DAT_14010fe70);
      if (pFVar1 == (FARPROC)0x0) goto LAB_1400a1da0;
    }
    (*pFVar1)(local_res8,(ulonglong)param_2,param_3,param_4);
  }
  return;
}

