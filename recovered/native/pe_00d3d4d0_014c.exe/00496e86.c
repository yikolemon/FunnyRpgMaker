/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496e86 */

FARPROC __fastcall FUN_00496e86(void *param_1)

{
  FARPROC pFVar1;
  
  if (DAT_00525034 == (FARPROC)0xffffffff) {
    return (FARPROC)0x0;
  }
  pFVar1 = DAT_00525034;
  if (DAT_00525034 == (FARPROC)0x0) {
    pFVar1 = FUN_00496ce3(param_1,0xd,"GetTimeFormatEx",(int *)&DAT_004f9980,(int *)&DAT_004f9988);
  }
  return pFVar1;
}

