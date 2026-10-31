/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00483f60 */

undefined4 FUN_00483f60(void)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  
  bVar3 = ___scrt_is_ucrt_dll_in_use();
  if (CONCAT31(extraout_var,bVar3) != 0) {
    iVar1 = *(int *)((int)Self + 4);
    iVar4 = 0;
    LOCK();
    iVar2 = iVar1;
    if (DAT_0051bef0 != 0) {
      iVar4 = DAT_0051bef0;
      iVar2 = DAT_0051bef0;
    }
    DAT_0051bef0 = iVar2;
    UNLOCK();
    iVar2 = DAT_0051bef0;
    while (DAT_0051bef0 = iVar2, iVar4 != 0) {
      if (iVar1 == iVar4) {
        return CONCAT31((int3)((uint)iVar4 >> 8),1);
      }
      iVar4 = 0;
      LOCK();
      DAT_0051bef0 = iVar1;
      if (iVar2 != 0) {
        iVar4 = iVar2;
        DAT_0051bef0 = iVar2;
      }
      UNLOCK();
      iVar2 = DAT_0051bef0;
    }
  }
  return 0;
}

