/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496ae8 */

int __thiscall FUN_00496ae8(void *this,undefined4 param_1)

{
  FARPROC pFVar1;
  int iVar2;
  
  if (DAT_00525060 == (FARPROC)0xffffffff) {
LAB_00496b2b:
    iVar2 = 0;
  }
  else {
    pFVar1 = DAT_00525060;
    if (DAT_00525060 == (FARPROC)0x0) {
      pFVar1 = FUN_00496ce3(this,0x18,"RoInitialize",(int *)&DAT_004f99b0,(int *)&DAT_004f99b4);
      if (pFVar1 == (FARPROC)0x0) goto LAB_00496b2b;
    }
    (*(code *)PTR_guard_check_icall_00508898)(param_1);
    iVar2 = (*pFVar1)();
  }
  return iVar2;
}

