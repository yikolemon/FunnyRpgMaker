/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1407c1e26 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1407c1e26(void)

{
  undefined4 uVar1;
  uint uVar2;
  ulonglong uVar3;
  undefined4 *puVar4;
  
  uVar2 = _DAT_150b5f58a;
  puVar4 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x70);
  uVar3 = (ulonglong)_DAT_150b5f58a;
  *(undefined1 *)((ulonglong)*(uint *)(uVar3 + 0x14cc) + 0xfb) = 1;
  puVar4[0xd] = uVar2;
  uVar3 = (ulonglong)*(uint *)(uVar3 + 0x14cc);
  uVar2 = *(uint *)(uVar3 + 0x1e8);
  *(undefined8 *)(puVar4 + -2) = 0x1407c1e60;
  FUN_14076d3c4();
  if (1 < *(int *)((ulonglong)uVar2 + 0x10)) {
    *(undefined8 *)(puVar4 + -2) = 0x1407c1e6b;
    FUN_140762458();
    *puVar4 = *(undefined4 *)(uVar3 + 0x2e8);
    *(undefined8 *)(puVar4 + -2) = 0x1407c1e7c;
    FUN_1407df838(uVar2 + 0x68);
    puVar4 = (undefined4 *)(ulonglong)((int)&stack0xffffffffffffffe0 - 0x74);
  }
  uVar1 = *(undefined4 *)((ulonglong)uVar2 + 0x20);
  puVar4[1] = *(undefined4 *)(uVar3 + 0x148);
  *puVar4 = uVar1;
                    /* WARNING: Subroutine does not return */
  *(undefined **)(puVar4 + -2) = &UNK_1407c1e9f;
  FUN_140755a9a();
}

