/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496db0 */

FARPROC __fastcall FUN_00496db0(void *param_1)

{
  FARPROC pFVar1;
  
  if (DAT_00525000 == (FARPROC)0xffffffff) {
    return (FARPROC)0x0;
  }
  pFVar1 = DAT_00525000;
  if (DAT_00525000 == (FARPROC)0x0) {
    pFVar1 = FUN_00496ce3(param_1,0,"AreFileApisANSI",(int *)&DAT_004f9954,(int *)&DAT_004f9958);
  }
  return pFVar1;
}

