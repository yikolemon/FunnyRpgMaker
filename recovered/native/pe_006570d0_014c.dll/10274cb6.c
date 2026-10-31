/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274cb6 */

/* Library Function - Single Match
    ___acrt_GetUserDefaultLocaleName@8
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void ___acrt_GetUserDefaultLocaleName_8(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  LCID LVar2;
  undefined4 uVar3;
  
  pcVar1 = (code *)FUN_102751cc();
  if (pcVar1 == (code *)0x0) {
    uVar3 = 0;
    LVar2 = GetUserDefaultLCID();
    ___acrt_LCIDToLocaleName_16(LVar2,param_1,param_2,uVar3);
  }
  else {
    (*(code *)PTR_guard_check_icall_1035d810)(param_1,param_2);
    (*pcVar1)();
  }
  return;
}

