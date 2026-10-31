/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496f32 */

FARPROC __fastcall FUN_00496f32(void *param_1)

{
  FARPROC pFVar1;
  
  if (DAT_0052504c == (FARPROC)0xffffffff) {
    return (FARPROC)0x0;
  }
  pFVar1 = DAT_0052504c;
  if (DAT_0052504c == (FARPROC)0x0) {
    pFVar1 = FUN_00496ce3(param_1,0x13,"LCIDToLocaleName",(int *)&DAT_004f99a0,(int *)&DAT_004f99a8)
    ;
  }
  return pFVar1;
}

