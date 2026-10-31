/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408db241 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408db241(void)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  uint unaff_EDI;
  undefined4 uVar6;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  ulonglong uStack_18;
  
  uStack_18 = (ulonglong)unaff_EDI;
  _DAT_150c7ff9c = _DAT_150c7ff9c + 1;
  uVar1 = *(uint *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
  puVar5 = (undefined4 *)(ulonglong)uVar1;
  uStack_20 = 1;
  uVar6 = 0x1000;
  uStack_28 = 0x1000;
  uStack_30 = 0x1408db25e;
  uVar2 = FUN_1408cdc60();
  uStack_30 = 0;
  puVar5[1] = uVar2;
  FUN_1408cbff0();
  uVar4 = (ulonglong)((int)&uStack_30 + 0xc);
  puVar3 = (uint *)(ulonglong)(uVar1 + 0xc);
  if (puVar5[1] == 0) {
    LOCK();
    *puVar3 = *puVar3 | 0x400;
    UNLOCK();
    *(undefined8 *)(uVar4 - 8) = 2;
    puVar5[1] = uVar1 + 0x14;
    uVar6 = (undefined4)*(undefined8 *)(uVar4 - 8);
  }
  else {
    *(undefined8 *)(uVar4 - 8) = 0x40;
    LOCK();
    *puVar3 = *puVar3 | (uint)*(undefined8 *)(uVar4 - 8);
    UNLOCK();
  }
  puVar5[6] = uVar6;
  puVar5[2] = 0;
  *puVar5 = puVar5[1];
  return;
}

