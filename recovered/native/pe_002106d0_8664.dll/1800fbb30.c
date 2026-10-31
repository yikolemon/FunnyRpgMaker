/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800fbb30 */

undefined4 FUN_1800fbb30(void)

{
  DWORD DVar1;
  undefined4 uVar2;
  bool bVar3;
  
  uVar2 = 0x10dd;
  if (DAT_180418ff0 == 0) {
    DVar1 = GetCurrentThreadId();
    LOCK();
    bVar3 = DAT_180418ff0 == 0;
    if (!bVar3) {
      DVar1 = DAT_180418ff0;
    }
    DAT_180418ff0 = DVar1;
    UNLOCK();
    if (bVar3) {
      DAT_180418ff8 = 0;
      DAT_180419000 = 0;
      DAT_180419008 = 0;
      DAT_180419010 = FUN_1800fbb82();
      uVar2 = DAT_180419010;
    }
  }
  return uVar2;
}

