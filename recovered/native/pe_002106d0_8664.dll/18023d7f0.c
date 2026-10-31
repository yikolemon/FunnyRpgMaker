/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18023d7f0 */

undefined8 FUN_18023d7f0(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar3 = FUN_180246a20();
  if (iVar3 != 0) {
    lVar1 = *(longlong *)((longlong)Self + 8);
    lVar4 = 0;
    LOCK();
    bVar5 = DAT_180418080 == 0;
    lVar2 = lVar1;
    if (!bVar5) {
      lVar4 = DAT_180418080;
      lVar2 = DAT_180418080;
    }
    DAT_180418080 = lVar2;
    UNLOCK();
    lVar2 = DAT_180418080;
    while (DAT_180418080 = lVar2, !bVar5) {
      if (lVar1 == lVar4) {
        return 1;
      }
      lVar4 = 0;
      LOCK();
      bVar5 = lVar2 == 0;
      DAT_180418080 = lVar1;
      if (!bVar5) {
        lVar4 = lVar2;
        DAT_180418080 = lVar2;
      }
      UNLOCK();
      lVar2 = DAT_180418080;
    }
  }
  return 0;
}

