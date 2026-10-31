/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496edc */

FARPROC __fastcall FUN_00496edc(void *param_1)

{
  FARPROC pFVar1;
  
  if (DAT_00525044 == (FARPROC)0xffffffff) {
    return (FARPROC)0x0;
  }
  pFVar1 = DAT_00525044;
  if (DAT_00525044 == (FARPROC)0x0) {
    pFVar1 = FUN_00496ce3(param_1,0x11,"IsValidLocaleName",(int *)&DAT_004f9990,(int *)&DAT_004f9998
                         );
  }
  return pFVar1;
}

