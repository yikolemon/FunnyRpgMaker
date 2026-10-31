/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00496eb1 */

FARPROC __fastcall FUN_00496eb1(void *param_1)

{
  FARPROC pFVar1;
  
  if (DAT_00525038 == (FARPROC)0xffffffff) {
    return (FARPROC)0x0;
  }
  pFVar1 = DAT_00525038;
  if (DAT_00525038 == (FARPROC)0x0) {
    pFVar1 = FUN_00496ce3(param_1,0xe,"GetUserDefaultLocaleName",(int *)&DAT_004f9988,
                          (int *)&DAT_004f9990);
  }
  return pFVar1;
}

