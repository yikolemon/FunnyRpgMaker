/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496f5d */

FARPROC __fastcall FUN_00496f5d(void *param_1)

{
  FARPROC pFVar1;
  
  if (DAT_00525050 == (FARPROC)0xffffffff) {
    return (FARPROC)0x0;
  }
  pFVar1 = DAT_00525050;
  if (DAT_00525050 == (FARPROC)0x0) {
    pFVar1 = FUN_00496ce3(param_1,0x14,"LocaleNameToLCID",(int *)&DAT_004f99a8,(int *)&DAT_004f99b0)
    ;
  }
  return pFVar1;
}

