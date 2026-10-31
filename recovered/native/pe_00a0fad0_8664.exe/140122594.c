/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140122594 */

bool FUN_140122594(void)

{
  longlong lVar1;
  bool bVar2;
  
  if (DAT_14036f018 == -1) {
    lVar1 = 0;
  }
  else {
    bVar2 = DAT_14036f018 == 0;
    if (!bVar2) goto LAB_1401225ce;
    lVar1 = FUN_1401225d8(3,"FlsGetValue2",&DAT_140168920,&DAT_140168928);
  }
  bVar2 = lVar1 == 0;
LAB_1401225ce:
  return !bVar2;
}

