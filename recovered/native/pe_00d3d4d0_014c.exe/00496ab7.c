/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496ab7 */

/* Library Function - Single Match
    ___acrt_LocaleNameToLCID@8
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall ___acrt_LocaleNameToLCID_8(void *this,ushort *param_1,undefined4 param_2)

{
  FARPROC pFVar1;
  
  pFVar1 = FUN_00496f5d(this);
  if (pFVar1 == (FARPROC)0x0) {
    ___acrt_DownlevelLocaleNameToLCID(param_1);
  }
  else {
    (*(code *)PTR_guard_check_icall_00508898)(param_1,param_2);
    (*pFVar1)();
  }
  return;
}

