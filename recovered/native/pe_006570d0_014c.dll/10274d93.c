/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274d93 */

/* Library Function - Single Match
    ___acrt_LCIDToLocaleName@16
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_LCIDToLocaleName_16
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = (code *)FUN_1027524d();
  if (pcVar1 == (code *)0x0) {
    FUN_1028354b(param_1,param_2,param_3);
  }
  else {
    (*(code *)PTR_guard_check_icall_1035d810)(param_1,param_2,param_3,param_4);
    (*pcVar1)();
  }
  return;
}

