/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c4d0 */

undefined4 FUN_1022c4d0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = ___scrt_is_ucrt_dll_in_use();
  if (iVar2 != 0) {
    iVar2 = *(int *)((int)Self + 4);
    iVar3 = 0;
    LOCK();
    iVar1 = iVar2;
    if (DAT_1039ce00 != 0) {
      iVar3 = DAT_1039ce00;
      iVar1 = DAT_1039ce00;
    }
    DAT_1039ce00 = iVar1;
    UNLOCK();
    iVar1 = DAT_1039ce00;
    while (DAT_1039ce00 = iVar1, iVar3 != 0) {
      if (iVar2 == iVar3) {
        return 1;
      }
      iVar3 = 0;
      LOCK();
      DAT_1039ce00 = iVar2;
      if (iVar1 != 0) {
        iVar3 = iVar1;
        DAT_1039ce00 = iVar1;
      }
      UNLOCK();
      iVar1 = DAT_1039ce00;
    }
  }
  return 0;
}

