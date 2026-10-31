/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408bed7b */

uint FUN_1408bed7b(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  
  puVar4 = &stack0xfffffffffffffff0;
  do {
    uVar1 = *(undefined4 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
    *(undefined8 *)(puVar4 + -8) = 0x1408bed89;
    uVar2 = FUN_1408be905(uVar1);
    if (uVar2 == 0xffffffff) {
      return 0xffffffff;
    }
    *(undefined8 *)(puVar4 + -8) =
         *(undefined8 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 0xc);
    *(undefined8 *)(puVar4 + -0x10) = 8;
    *(ulonglong *)(puVar4 + -0x18) = (ulonglong)uVar2 & 0xff;
    *(undefined8 *)(puVar4 + -0x20) = 0x1408bed9e;
    iVar3 = FUN_1408bb66d();
    puVar4 = (undefined1 *)(ulonglong)((int)(puVar4 + -0x18) + 0xc);
  } while (iVar3 != 0);
  return uVar2;
}

