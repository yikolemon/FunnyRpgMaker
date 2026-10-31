/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140dd4775 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140dd4775(void)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  ulonglong *puVar6;
  ulonglong uStack_50;
  ulonglong uStack_48;
  ulonglong uStack_40;
  undefined8 uStack_38;
  ulonglong uStack_30;
  
  uVar2 = (*_DAT_1412dd3de)();
  iVar3 = FUN_140dd4c13();
  if (iVar3 == 0) {
    (*_DAT_1412dd4b0)();
    return 0;
  }
  uStack_30 = 0x364;
  uStack_38 = 1;
  uStack_40 = 0x140dd47aa;
  uVar4 = FUN_140dd5330();
  uVar1 = uStack_30;
  uVar5 = (ulonglong)uVar4;
  if (uVar4 == 0) {
    uStack_30 = 0;
    uStack_38 = _DAT_1412ef63b;
    uStack_40 = 0x140dd47c0;
    FUN_140dd4c13(uVar1);
    uStack_40 = 0;
    uStack_48 = 0x140dd47c6;
    FUN_140dd41d0();
    uVar1 = uStack_40;
    uStack_48 = 0x140dd47ce;
    uStack_40 = (ulonglong)uVar2;
    (*_DAT_1412dd4e6)(uVar1);
    uVar5 = 0;
  }
  else {
    uStack_38 = _DAT_1412ef659;
    uStack_40 = 0x140dd47de;
    uStack_30 = uVar5;
    iVar3 = FUN_140dd4c13(uVar1);
    if (iVar3 == 0) {
      uStack_40 = 0;
      puVar6 = &uStack_48;
      uStack_48 = _DAT_1412ef66b;
      uStack_50 = 0x140dd47f0;
      FUN_140dd4c13();
      uStack_50 = uVar5;
      FUN_140dd41d0();
      uVar5 = 0;
    }
    else {
      uStack_40 = 0x521b90;
      uStack_50 = 0x140dd4804;
      uStack_48 = uVar5;
      FUN_140dd460f();
      uStack_50 = 0;
      FUN_140dd41d0();
      puVar6 = (ulonglong *)(ulonglong)((int)&uStack_50 + 0xc);
    }
    *(ulonglong *)((longlong)puVar6 + -8) = (ulonglong)uVar2;
    *(undefined8 *)((longlong)puVar6 + -0x10) = 0x140dd4817;
    (*_DAT_1412dd52f)();
  }
  return uVar5;
}

