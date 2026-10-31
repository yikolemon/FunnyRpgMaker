/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400ca22f */

void FUN_1400ca22f(void)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = DAT_140f2a910;
  if (*(char *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x1bb) != '\0') {
    FUN_1400c9e35();
    puVar1 = (uint *)(*(longlong *)(lVar2 + 0x1608) + 0x14);
    *puVar1 = *puVar1 | 0x100;
    if ((((*(longlong *)(lVar2 + 0x1608) == *(longlong *)(lVar2 + 0x2200)) &&
         (*(int *)(lVar2 + 0x220c) == 0)) && (*(char *)(lVar2 + 0x2261) == '\0')) &&
       (*(int *)(lVar2 + 0x167c) == 0)) {
      FUN_14008592b(*(longlong *)(lVar2 + 0x2200),0,0,3);
    }
    FUN_140088c18();
    return;
  }
  FUN_14007a954("Calling EndMainMenuBar() not from a menu-bar!");
  return;
}

