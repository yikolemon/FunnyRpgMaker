/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022ca50 */

undefined8 FUN_1022ca50(void)

{
  UINT UVar1;
  wchar_t **ppwVar2;
  undefined4 uVar3;
  
  UVar1 = ____lc_collate_cp_func();
  ppwVar2 = ____lc_locale_name_func();
  uVar3 = 0;
  if (ppwVar2[1] != (wchar_t *)0x0) {
    uVar3 = FUN_1026b130(ppwVar2[1]);
  }
  return CONCAT44(uVar3,UVar1);
}

