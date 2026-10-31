/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408db499 */

undefined4 FUN_1408db499(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  uint unaff_EDI;
  int iVar6;
  ulonglong uStack_20;
  
  uStack_20 = (ulonglong)unaff_EDI;
  puVar4 = &uStack_20;
  iVar6 = 0;
  iVar3 = 0xe3;
  do {
    uVar5 = (iVar3 + iVar6) / 2;
    *(undefined8 *)((longlong)puVar4 + -8) = 0x55;
    *(undefined8 *)((longlong)puVar4 + -0x10) = *(undefined8 *)((ulonglong)uVar5 * 8 + 0x10326938);
    *(undefined8 *)((longlong)puVar4 + -0x18) =
         *(undefined8 *)(((ulonglong)&stack0xfffffffffffffff8 & 0xffffffff) + 8);
    *(undefined8 *)((longlong)puVar4 + -0x20) = 0x1408db4c3;
    iVar2 = FUN_1408dd850();
    puVar4 = (ulonglong *)(ulonglong)((int)(undefined1 *)((longlong)puVar4 + -0x18) + 0xc);
    if (iVar2 == 0) {
      return *(undefined4 *)((ulonglong)uVar5 * 8 + 0x1032693c);
    }
    iVar1 = uVar5 - 1;
    if (-1 < iVar2) {
      iVar6 = uVar5 + 1;
      iVar1 = iVar3;
    }
    iVar3 = iVar1;
  } while (iVar6 <= iVar3);
  return 0xffffffff;
}

