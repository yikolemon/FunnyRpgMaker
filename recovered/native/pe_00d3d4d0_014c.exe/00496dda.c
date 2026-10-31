/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496dda */

FARPROC __fastcall FUN_00496dda(void *param_1)

{
  FARPROC pFVar1;
  
  if (DAT_00525004 == (FARPROC)0xffffffff) {
    return (FARPROC)0x0;
  }
  pFVar1 = DAT_00525004;
  if (DAT_00525004 == (FARPROC)0x0) {
    pFVar1 = FUN_00496ce3(param_1,1,"CompareStringEx",(int *)&DAT_004f9958,(int *)&DAT_004f9960);
  }
  return pFVar1;
}

