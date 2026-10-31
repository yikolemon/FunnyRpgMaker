/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496b6f */

int __thiscall FUN_00496b6f(void *this,undefined4 param_1)

{
  FARPROC pFVar1;
  int iVar2;
  
  if (DAT_00525068 == (FARPROC)0xffffffff) {
LAB_00496bb4:
    iVar2 = -0x3ffffddb;
  }
  else {
    pFVar1 = DAT_00525068;
    if (DAT_00525068 == (FARPROC)0x0) {
      pFVar1 = FUN_00496ce3(this,0x1a,"AppPolicyGetProcessTerminationMethod",(int *)&DAT_004f99b8,
                            (int *)&DAT_004f99bc);
      if (pFVar1 == (FARPROC)0x0) goto LAB_00496bb4;
    }
    (*(code *)PTR_guard_check_icall_00508898)(0xfffffffa,param_1);
    iVar2 = (*pFVar1)();
  }
  return iVar2;
}

