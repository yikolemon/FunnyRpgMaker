/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496f07 */

FARPROC __fastcall FUN_00496f07(void *param_1)

{
  FARPROC pFVar1;
  
  if (DAT_00525048 == (FARPROC)0xffffffff) {
    return (FARPROC)0x0;
  }
  pFVar1 = DAT_00525048;
  if (DAT_00525048 == (FARPROC)0x0) {
    pFVar1 = FUN_00496ce3(param_1,0x12,"LCMapStringEx",(int *)&DAT_004f9998,(int *)&DAT_004f99a0);
  }
  return pFVar1;
}

