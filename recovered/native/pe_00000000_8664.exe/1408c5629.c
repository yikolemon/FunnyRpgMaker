/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c5629 */

undefined8 FUN_1408c5629(void)

{
  uint uVar1;
  ulonglong uVar2;
  uint *puVar3;
  uint unaff_EDI;
  uint uVar4;
  undefined8 uStack_48;
  ulonglong uStack_40;
  ulonglong uStack_38;
  undefined8 uStack_30;
  uint *puStack_28;
  ulonglong uStack_20;
  
  uStack_20 = (ulonglong)unaff_EDI;
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  puStack_28 = (uint *)(ulonglong)uVar1;
  puVar3 = (uint *)(ulonglong)(uVar1 + 0xc);
  if ((((byte)*puVar3 & 3) == 2) && ((*puVar3 & 0xc0) != 0)) {
    uVar1 = puStack_28[1];
    uVar4 = *puStack_28 - uVar1;
    *puStack_28 = uVar1;
    puStack_28[2] = 0;
    if (0 < (int)uVar4) {
      uStack_30 = 0x1408c565e;
      uStack_48 = FUN_1408d056e();
      uStack_30 = *(undefined8 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0xc);
      uStack_40 = (ulonglong)uVar1;
      uStack_38 = (ulonglong)uVar4;
      uVar1 = FUN_1408d6b76();
      uVar2 = (ulonglong)((int)&uStack_48 + 0x14);
      if (uVar4 != uVar1) {
        *(undefined8 *)(uVar2 - 8) = 0x10;
        LOCK();
        *puVar3 = *puVar3 | (uint)*(undefined8 *)(uVar2 - 8);
        UNLOCK();
        return 0xffffffff;
      }
      if ((*puVar3 >> 2 & 1) != 0) {
        *(undefined8 *)(uVar2 - 8) = 0xfffffffffffffffd;
        LOCK();
        *puVar3 = *puVar3 & (uint)*(undefined8 *)(uVar2 - 8);
        UNLOCK();
      }
    }
  }
  return 0;
}

