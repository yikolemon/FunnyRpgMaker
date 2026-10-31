/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a2660 */

FARPROC FUN_1400a2660(void)

{
  FARPROC pFVar1;
  
  if (DAT_140151008 == (FARPROC)0xffffffffffffffff) {
    return (FARPROC)0x0;
  }
  if (DAT_140151008 != (FARPROC)0x0) {
    return DAT_140151008;
  }
  pFVar1 = FUN_1400a24ac(1,"CompareStringEx",(uint *)&DAT_14010fe60,(uint *)&DAT_14010fe68);
  return pFVar1;
}

