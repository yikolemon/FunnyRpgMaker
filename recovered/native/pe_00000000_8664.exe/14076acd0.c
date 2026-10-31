/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076acd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076acd0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
  puVar5 = (undefined4 *)(ulonglong)((int)&stack0xfffffffffffffff8 - 0xc);
  uVar6 = (ulonglong)_DAT_150b08426;
  if (*(int *)(uVar6 + 0x1f8c) < 1) {
    *puVar5 = 0x1034ab0e;
    *(undefined8 *)(puVar5 + -2) = 0x14076ad25;
    FUN_140754dc5();
  }
  else {
    uVar4 = (ulonglong)*(uint *)(uVar6 + 0x1f94);
    uVar3 = (ulonglong)(uint)(*(int *)(uVar6 + 0x1f8c) * 3);
    uVar1 = *(undefined4 *)((uVar4 - 8) + uVar3 * 4);
    uVar2 = *(undefined4 *)((uVar4 - 0xc) + uVar3 * 4);
    puVar5[2] = *(undefined4 *)((uVar4 - 4) + uVar3 * 4);
    puVar5[1] = uVar1;
    *puVar5 = uVar2;
    *(undefined8 *)(puVar5 + -2) = 0x14076ad11;
    FUN_14076ab1f();
    *(int *)(uVar6 + 0x1f8c) = *(int *)(uVar6 + 0x1f8c) + -1;
  }
  return;
}

