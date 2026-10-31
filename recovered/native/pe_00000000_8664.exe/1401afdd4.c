/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401afdd4 */

bool FUN_1401afdd4(void)

{
  longlong lVar1;
  bool bVar2;
  
  if (DAT_140f4f018 == -1) {
    lVar1 = 0;
  }
  else {
    bVar2 = DAT_140f4f018 == 0;
    if (!bVar2) goto LAB_1401afe0e;
    lVar1 = FUN_1401afe18(3,"FlsGetValue2",&DAT_140eb79c0,&DAT_140eb79c8);
  }
  bVar2 = lVar1 == 0;
LAB_1401afe0e:
  return !bVar2;
}

