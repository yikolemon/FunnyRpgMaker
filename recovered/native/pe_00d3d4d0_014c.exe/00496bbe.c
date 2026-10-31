/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496bbe */

int __thiscall FUN_00496bbe(void *this,undefined4 param_1)

{
  FARPROC pFVar1;
  int iVar2;
  
  if (DAT_0052506c == (FARPROC)0xffffffff) {
LAB_00496c03:
    iVar2 = -0x3ffffddb;
  }
  else {
    pFVar1 = DAT_0052506c;
    if (DAT_0052506c == (FARPROC)0x0) {
      pFVar1 = FUN_00496ce3(this,0x1b,"AppPolicyGetThreadInitializationType",(int *)&DAT_004f99bc,
                            (int *)&PTR_u_ja_JP_004f99c0);
      if (pFVar1 == (FARPROC)0x0) goto LAB_00496c03;
    }
    (*(code *)PTR_guard_check_icall_00508898)(0xfffffffa,param_1);
    iVar2 = (*pFVar1)();
  }
  return iVar2;
}

