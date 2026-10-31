/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cce6b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1408cce6b(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  undefined8 uStack_10;
  
  uVar6 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uStack_10 = 0x800;
  uStack_18 = 0;
  uStack_20 = *(undefined8 *)(uVar6 + 8);
  uStack_28 = 0x1408cce80;
  uVar3 = (*_DAT_150c2aec8)();
  if ((int)uVar3 == 0) {
    uStack_28 = 0x1408cce8a;
    iVar2 = (*_DAT_150c2ae1a)();
    if (iVar2 == 0x57) {
      uStack_28 = 7;
      uStack_30 = 0x1035a714;
      uStack_38 = *(undefined8 *)(uVar6 + 8);
      iVar2 = FUN_1408d3c90();
      uVar4 = (ulonglong)((int)&uStack_38 + 0xc);
      if (iVar2 != 0) {
        *(undefined8 *)(uVar4 - 8) = 7;
        *(undefined8 *)(uVar4 - 0x10) = 0x1035a704;
        *(undefined8 *)(uVar4 - 0x18) = *(undefined8 *)(uVar6 + 8);
        *(undefined8 *)(uVar4 - 0x20) = 0x1408cceb4;
        iVar2 = FUN_1408d3c90();
        uVar5 = (ulonglong)((int)(uVar4 - 0x18) + 0xc);
        if (iVar2 != 0) {
          *(undefined8 *)(uVar5 - 8) = 0;
          *(undefined8 *)(uVar5 - 0x10) = 0;
          *(undefined8 *)(uVar5 - 0x18) = *(undefined8 *)(uVar6 + 8);
          pcVar1 = _DAT_150c2af10;
          *(undefined8 *)(uVar5 - 0x20) = 0x1408ccec8;
          uVar3 = (*pcVar1)();
          return uVar3;
        }
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

