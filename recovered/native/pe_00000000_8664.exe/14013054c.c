/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013054c */

void FUN_14013054c(undefined8 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = &DAT_140e984e0;
  ppuVar2 = &PTR_DAT_140e94fa8;
  do {
    FUN_14012bf32(param_1,puVar1);
    puVar1 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
  } while (puVar1 != (undefined *)0x0);
  return;
}

