/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496e5b */

FARPROC __fastcall FUN_00496e5b(void *param_1)

{
  FARPROC pFVar1;
  
  if (DAT_00525028 == (FARPROC)0xffffffff) {
    return (FARPROC)0x0;
  }
  pFVar1 = DAT_00525028;
  if (DAT_00525028 == (FARPROC)0x0) {
    pFVar1 = FUN_00496ce3(param_1,10,"GetLocaleInfoEx",(int *)&DAT_004f9978,(int *)&DAT_004f9980);
  }
  return pFVar1;
}

