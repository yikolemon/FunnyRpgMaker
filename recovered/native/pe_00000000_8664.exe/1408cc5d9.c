/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cc5d9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1408cc5d9(void)

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
  
  uVar2 = (*_DAT_150c2a572)();
  iVar3 = FUN_1408cca92();
  if (iVar3 == 0) {
    (*_DAT_150c2a6a8)();
    return 0;
  }
  uStack_30 = 0x364;
  uStack_38 = 1;
  uStack_40 = 0x1408cc60e;
  uVar4 = FUN_1408cdc60();
  uVar1 = uStack_30;
  uVar5 = (ulonglong)uVar4;
  if (uVar4 == 0) {
    uStack_30 = 0;
    uStack_38 = _DAT_150c67a1f;
    uStack_40 = 0x1408cc624;
    FUN_1408cca92(uVar1);
    uStack_40 = 0;
    uStack_48 = 0x1408cc62a;
    FUN_1408cbff0();
    uVar1 = uStack_40;
    uStack_48 = 0x1408cc632;
    uStack_40 = (ulonglong)uVar2;
    (*_DAT_150c2a6de)(uVar1);
    uVar5 = 0;
  }
  else {
    uStack_38 = _DAT_150c67a3d;
    uStack_40 = 0x1408cc642;
    uStack_30 = uVar5;
    iVar3 = FUN_1408cca92(uVar1);
    if (iVar3 == 0) {
      uStack_40 = 0;
      puVar6 = &uStack_48;
      uStack_48 = _DAT_150c67a4f;
      uStack_50 = 0x1408cc654;
      FUN_1408cca92();
      uStack_50 = uVar5;
      FUN_1408cbff0();
      uVar5 = 0;
    }
    else {
      uStack_40 = 0x103a50f0;
      uStack_50 = 0x1408cc668;
      uStack_48 = uVar5;
      FUN_1408cc473();
      uStack_50 = 0;
      FUN_1408cbff0();
      puVar6 = (ulonglong *)(ulonglong)((int)&uStack_50 + 0xc);
    }
    *(ulonglong *)((longlong)puVar6 + -8) = (ulonglong)uVar2;
    *(undefined8 *)((longlong)puVar6 + -0x10) = 0x1408cc67b;
    (*_DAT_150c2a727)();
  }
  return uVar5;
}

