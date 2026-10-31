/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10274ace */

/* Library Function - Single Match
    ___acrt_AreFileApisANSI@0
   
   Library: Visual Studio 2019 Release */

undefined4 ___acrt_AreFileApisANSI_0(void)

{
  code *pcVar1;
  undefined4 uVar2;
  
  pcVar1 = (code *)FUN_102750cb();
  if (pcVar1 != (code *)0x0) {
    (*(code *)PTR_guard_check_icall_1035d810)();
    uVar2 = (*pcVar1)();
    return uVar2;
  }
  return 1;
}

