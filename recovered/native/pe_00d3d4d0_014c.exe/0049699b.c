/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0049699b */

/* Library Function - Single Match
    ___acrt_GetUserDefaultLocaleName@8
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

void __thiscall ___acrt_GetUserDefaultLocaleName_8(void *this,short *param_1,int param_2)

{
  FARPROC pFVar1;
  LCID LVar2;
  void *this_00;
  undefined4 uVar3;
  
  pFVar1 = FUN_00496eb1(this);
  if (pFVar1 == (FARPROC)0x0) {
    uVar3 = 0;
    LVar2 = GetUserDefaultLCID();
    ___acrt_LCIDToLocaleName_16(this_00,LVar2,param_1,param_2,uVar3);
  }
  else {
    (*(code *)PTR_guard_check_icall_00508898)(param_1,param_2);
    (*pFVar1)();
  }
  return;
}

