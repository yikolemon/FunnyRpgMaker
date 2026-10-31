/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14004b8d1 */

byte FUN_14004b8d1(uint param_1)

{
  uint *puVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  uint *puVar5;
  ulonglong uVar6;
  
  if (0x25fc < param_1) {
    puVar5 = &DAT_14013d3b0;
    uVar3 = 0xd0;
    do {
      uVar6 = uVar3 >> 1;
      uVar3 = ~uVar6 + uVar3;
      puVar1 = puVar5 + uVar6 + 1;
      if (param_1 < puVar5[uVar6]) {
        uVar3 = uVar6;
        puVar1 = puVar5;
      }
      puVar5 = puVar1;
    } while (0 < (longlong)uVar3);
    return (((uint)puVar5 >> 2 & 1) != 0) + 1;
  }
  bVar2 = 1;
  lVar4 = 0;
  do {
    if (param_1 < *(uint *)((longlong)&DAT_14013d3b0 + lVar4)) {
      return bVar2;
    }
    bVar2 = bVar2 ^ 3;
    lVar4 = lVar4 + 4;
  } while (lVar4 != 0x340);
  return 1;
}

