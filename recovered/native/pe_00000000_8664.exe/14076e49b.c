/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076e49b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076e49b(void)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  
  puVar2 = (undefined8 *)(ulonglong)((int)&stack0xfffffffffffffff0 - 0x10);
  uVar3 = (ulonglong)_DAT_150b0bbf2;
  uVar4 = (ulonglong)*(uint *)(uVar3 + 0x14cc);
  if (((*(byte *)(uVar4 + 0xf) & 4) == 0) || (*(int *)(uVar3 + 0x1fc8) < 1)) {
    *(undefined8 *)((longlong)puVar2 + -8) = 0x1034a8ac;
    *(undefined8 *)((longlong)puVar2 + -0x10) = 0x14076e50e;
    FUN_140754dc5();
  }
  else {
    if (*(uint *)(uVar3 + 0x2048) == *(uint *)(uVar3 + 0x14cc)) {
      *(undefined8 *)((longlong)puVar2 + -8) = 2;
      *(ulonglong *)((longlong)puVar2 + -0x10) = uVar4;
      *(undefined8 *)((longlong)puVar2 + -0x18) = 0x14076e4cb;
      FUN_14076e761();
      puVar2 = (undefined8 *)(ulonglong)((int)(undefined1 *)((longlong)puVar2 + -0x10) + 8);
    }
    *puVar2 = *(undefined8 *)(uVar3 + 0x1458);
    puVar2[1] = 0;
    uVar1 = *(undefined4 *)(uVar4 + 8);
    *(undefined4 *)(uVar3 + 0x145c) = uVar1;
    if ((*(byte *)(uVar4 + 0xf) & 1) != 0) {
      *(undefined4 *)(uVar3 + 0x1458) = uVar1;
    }
    puVar2[-1] = 0x14076e4f4;
    FUN_140762c14();
    *(undefined8 *)(uVar3 + 0x1458) = *puVar2;
  }
  return;
}

