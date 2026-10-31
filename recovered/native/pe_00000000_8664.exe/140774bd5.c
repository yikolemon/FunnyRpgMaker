/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140774bd5 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140774bd5(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  int iVar5;
  
  puVar4 = &stack0xffffffffffffffe8;
  iVar5 = _DAT_150b12331 + 0xe00;
  uVar3 = 0xffffffdc;
  do {
    *(ulonglong *)(puVar4 + -8) = (ulonglong)(uint)(*(int *)(uVar3 + 0x102b86dc) * 0x10 + iVar5);
    *(undefined8 *)(puVar4 + -0x10) = 0x140774bfb;
    uVar1 = FUN_140752c0d();
    puVar4 = (undefined1 *)(ulonglong)((int)(puVar4 + -8) + 4);
    *(undefined4 *)((ulonglong)param_1 + 0x430 + uVar3) = uVar1;
    uVar2 = (int)uVar3 + 4;
    uVar3 = (ulonglong)uVar2;
  } while (uVar2 != 0);
  return;
}

