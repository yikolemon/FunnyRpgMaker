/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801d1578 */

void FUN_1801d1578(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = &DAT_180334180;
  ppuVar2 = &PTR_DAT_1803297a8;
  do {
    FUN_1801ccf5e(param_1,puVar1);
    puVar1 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
  } while (puVar1 != (undefined *)0x0);
  return;
}

