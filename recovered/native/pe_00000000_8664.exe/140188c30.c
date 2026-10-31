/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140188c30 */

undefined8 FUN_140188c30(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar3 = FUN_14018e390();
  if (iVar3 != 0) {
    lVar1 = *(longlong *)((longlong)Self + 8);
    lVar4 = 0;
    LOCK();
    bVar5 = DAT_140f2a9b0 == 0;
    lVar2 = lVar1;
    if (!bVar5) {
      lVar4 = DAT_140f2a9b0;
      lVar2 = DAT_140f2a9b0;
    }
    DAT_140f2a9b0 = lVar2;
    UNLOCK();
    lVar2 = DAT_140f2a9b0;
    while (DAT_140f2a9b0 = lVar2, !bVar5) {
      if (lVar1 == lVar4) {
        return 1;
      }
      lVar4 = 0;
      LOCK();
      bVar5 = lVar2 == 0;
      DAT_140f2a9b0 = lVar1;
      if (!bVar5) {
        lVar4 = lVar2;
        DAT_140f2a9b0 = lVar2;
      }
      UNLOCK();
      lVar2 = DAT_140f2a9b0;
    }
  }
  return 0;
}

