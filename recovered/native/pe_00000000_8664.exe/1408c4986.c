/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408c4986 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1408c4986(void)

{
  code *pcVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uStack_8;
  
  uStack_8 = 0x1408c498b;
  iVar2 = FUN_1408ced6e();
  if (iVar2 != 0) {
    uStack_8 = 0x16;
    FUN_1408ced95();
  }
  if ((DAT_150c5fd1a & 2) != 0) {
    uStack_8 = 0x17;
    iVar2 = (*_DAT_150c229d0)();
    puVar3 = &uStack_8;
    if (iVar2 != 0) {
      pcVar1 = (code *)swi(0x29);
      (*pcVar1)(7);
      puVar3 = (undefined8 *)register0x00000020;
    }
    *(undefined8 *)((longlong)puVar3 + -8) = 1;
    *(undefined8 *)((longlong)puVar3 + -0x10) = 0x40000015;
    *(undefined8 *)((longlong)puVar3 + -0x18) = 3;
    *(undefined8 *)((longlong)puVar3 + -0x20) = 0x1408c49bf;
    FUN_1408cbdbc();
    register0x00000020 =
         (BADSPACEBASE *)(ulonglong)((int)(undefined1 *)((longlong)puVar3 + -0x18) + 0xc);
  }
  *(undefined8 *)((longlong)register0x00000020 + -8) = 3;
  *(undefined8 *)((longlong)register0x00000020 + -0x10) = 0x1408c49c9;
  FUN_1408c051e();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

