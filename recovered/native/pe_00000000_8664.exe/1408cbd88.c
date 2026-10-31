/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408cbd88 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408cbd88(void)

{
  code *pcVar1;
  undefined8 uVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  undefined8 unaff_RSI;
  undefined8 uStack_8;
  
  uStack_8 = 0x17;
  iVar3 = (*_DAT_150c29db8)();
  puVar4 = &uStack_8;
  if (iVar3 != 0) {
    pcVar1 = (code *)swi(0x29);
    (*pcVar1)(5);
    puVar4 = (undefined8 *)register0x00000020;
  }
  *(undefined8 *)((longlong)puVar4 + -8) = unaff_RSI;
  *(undefined8 *)((longlong)puVar4 + -0x10) = 1;
  *(undefined8 *)((longlong)puVar4 + -0x18) = 0xc0000417;
  *(undefined8 *)((longlong)puVar4 + -0x20) = 2;
  *(undefined8 *)((longlong)puVar4 + -0x28) = 0x1408cbda9;
  FUN_1408cbdbc();
  uVar5 = (ulonglong)((int)(undefined1 *)((longlong)puVar4 + -0x20) + 0xc);
  *(undefined8 *)(uVar5 - 8) = 0xc0000417;
  pcVar1 = _DAT_150c29cfb;
  *(undefined8 *)(uVar5 - 0x10) = 0x1408cbdb3;
  uVar2 = (*pcVar1)();
  *(undefined8 *)(uVar5 - 0x10) = uVar2;
  pcVar1 = _DAT_150c29e8a;
  *(undefined8 *)(uVar5 - 0x18) = 0x1408cbdba;
  (*pcVar1)();
  return;
}

