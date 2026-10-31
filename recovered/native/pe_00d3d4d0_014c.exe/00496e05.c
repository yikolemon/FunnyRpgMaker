/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496e05 */

FARPROC __fastcall FUN_00496e05(void *param_1)

{
  FARPROC pFVar1;
  
  if (DAT_00525008 == (FARPROC)0xffffffff) {
    return (FARPROC)0x0;
  }
  pFVar1 = DAT_00525008;
  if (DAT_00525008 == (FARPROC)0x0) {
    pFVar1 = FUN_00496ce3(param_1,2,"EnumSystemLocalesEx",(int *)&DAT_004f9960,(int *)&DAT_004f9968)
    ;
  }
  return pFVar1;
}

