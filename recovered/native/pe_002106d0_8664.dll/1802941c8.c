/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802941c8 */

void FUN_1802941c8(longlong param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined2 *puVar3;
  longlong lVar4;
  
  FUN_1802a89a0(param_1 + 0x18,0,0x101);
  lVar2 = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  *(undefined8 *)(param_1 + 0x220) = 0;
  puVar3 = (undefined2 *)(param_1 + 0xc);
  for (lVar1 = 6; lVar4 = lVar2, lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  do {
    lVar1 = lVar4 + 1;
    *(undefined1 *)(param_1 + lVar4 + 0x18) = (&DAT_180416238)[lVar4];
    lVar4 = lVar1;
  } while (lVar1 < 0x101);
  do {
    lVar1 = lVar2 + 1;
    *(undefined1 *)(param_1 + lVar2 + 0x119) = (&DAT_180416339)[lVar2];
    lVar2 = lVar1;
  } while (lVar1 < 0x100);
  return;
}

