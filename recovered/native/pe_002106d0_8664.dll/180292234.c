/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180292234 */

bool FUN_180292234(void)

{
  longlong lVar1;
  bool bVar2;
  
  if (DAT_180450018 == -1) {
    lVar1 = 0;
  }
  else {
    bVar2 = DAT_180450018 == 0;
    if (!bVar2) goto LAB_18029226e;
    lVar1 = FUN_180292278(3,"FlsGetValue2",&DAT_1803536e0,&DAT_1803536e8);
  }
  bVar2 = lVar1 == 0;
LAB_18029226e:
  return !bVar2;
}

