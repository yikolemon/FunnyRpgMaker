/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1408be1e6 */

undefined4 * FUN_1408be1e6(uint param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  uVar4 = (ulonglong)&stack0xfffffffffffffff8 & 0xffffffff;
  uVar1 = *(undefined4 *)(uVar4 + 0xc);
  puVar5 = (undefined4 *)(ulonglong)param_1;
  *puVar5 = *(undefined4 *)(uVar4 + 8);
  uVar2 = *(undefined4 *)(uVar4 + 0x10);
  puVar5[1] = uVar1;
  puVar5[2] = uVar2;
  puVar5[3] = 0;
  puVar6 = (undefined4 *)(ulonglong)(param_1 + 0x2c);
  for (lVar3 = 8; lVar3 != 0; lVar3 = lVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar5[4] = 0;
  *(undefined2 *)(puVar5 + 5) = 0;
  *(undefined1 *)((longlong)puVar5 + 0x16) = 0;
  puVar5[6] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  *(undefined1 *)(puVar5 + 9) = 0;
  puVar5[10] = 0;
  return puVar5;
}

