/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100f7787 */

undefined4 FUN_100f7787(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  bool bVar3;
  
  uVar2 = 0x10dd;
  if (DAT_1039d6c0 == 0) {
    DVar1 = GetCurrentThreadId();
    LOCK();
    bVar3 = DAT_1039d6c0 == 0;
    if (!bVar3) {
      DVar1 = DAT_1039d6c0;
    }
    DAT_1039d6c0 = DVar1;
    UNLOCK();
    if (bVar3) {
      DAT_1039d6c4 = 0;
      DAT_1039d6c8 = 0;
      DAT_1039d6cc = 0;
      uVar2 = FUN_100f77cd();
      DAT_1039d6d0 = uVar2;
    }
  }
  return uVar2;
}

