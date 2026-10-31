/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496b32 */

void __fastcall FUN_00496b32(void *param_1)

{
  FARPROC pFVar1;
  
  if (DAT_00525064 != (FARPROC)0xffffffff) {
    pFVar1 = DAT_00525064;
    if ((DAT_00525064 == (FARPROC)0x0) &&
       (pFVar1 = FUN_00496ce3(param_1,0x19,"RoUninitialize",(int *)&DAT_004f99b4,
                              (int *)&DAT_004f99b8), pFVar1 == (FARPROC)0x0)) {
      return;
    }
    (*(code *)PTR_guard_check_icall_00508898)();
    (*pFVar1)();
  }
  return;
}

