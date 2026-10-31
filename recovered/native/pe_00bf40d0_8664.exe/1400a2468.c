/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400a2468 */

bool FUN_1400a2468(void)

{
  FARPROC pFVar1;
  bool bVar2;
  
  if (DAT_140151018 == -1) {
    pFVar1 = (FARPROC)0x0;
  }
  else {
    bVar2 = DAT_140151018 == 0;
    if (!bVar2) goto LAB_1400a24a2;
    pFVar1 = FUN_1400a24ac(3,"FlsGetValue2",(uint *)&DAT_14010fe70,(uint *)&DAT_14010fe78);
  }
  bVar2 = pFVar1 == (FARPROC)0x0;
LAB_1400a24a2:
  return !bVar2;
}

