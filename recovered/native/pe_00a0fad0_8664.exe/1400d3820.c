/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400d3820 */

undefined8 FUN_1400d3820(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  bool bVar5;
  
  iVar3 = FUN_1400ddfc0();
  if (iVar3 != 0) {
    lVar1 = *(longlong *)((longlong)Self + 8);
    lVar4 = 0;
    LOCK();
    bVar5 = DAT_1401cc278 == 0;
    lVar2 = lVar1;
    if (!bVar5) {
      lVar4 = DAT_1401cc278;
      lVar2 = DAT_1401cc278;
    }
    DAT_1401cc278 = lVar2;
    UNLOCK();
    lVar2 = DAT_1401cc278;
    while (DAT_1401cc278 = lVar2, !bVar5) {
      if (lVar1 == lVar4) {
        return 1;
      }
      lVar4 = 0;
      LOCK();
      bVar5 = lVar2 == 0;
      DAT_1401cc278 = lVar1;
      if (!bVar5) {
        lVar4 = lVar2;
        DAT_1401cc278 = lVar2;
      }
      UNLOCK();
      lVar2 = DAT_1401cc278;
    }
  }
  return 0;
}

