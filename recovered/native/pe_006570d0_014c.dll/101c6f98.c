/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101c6f98 */

void FUN_101c6f98(undefined4 param_1)

{
  undefined *puVar1;
  undefined **ppuVar2;
  
  puVar1 = &DAT_1030b1d8;
  ppuVar2 = &PTR_DAT_10302f10;
  do {
    FUN_101c2fc8(param_1,puVar1);
    puVar1 = *ppuVar2;
    ppuVar2 = ppuVar2 + 1;
  } while (puVar1 != (undefined *)0x0);
  return;
}

