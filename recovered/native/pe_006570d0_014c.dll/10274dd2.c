/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274dd2 */

/* Library Function - Single Match
    ___acrt_LocaleNameToLCID@8
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_LocaleNameToLCID_8(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_10275278();
  if (pcVar1 == (code *)0x0) {
    ___acrt_DownlevelLocaleNameToLCID(param_1);
  }
  else {
    (*(code *)PTR_guard_check_icall_1035d810)(param_1,param_2);
    (*pcVar1)();
  }
  return;
}

