/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801512ff */

void FUN_1801512ff(void)

{
  uint *puVar1;
  longlong lVar2;
  
  lVar2 = DAT_180419160;
  if (*(char *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x1bb) != '\0') {
    FUN_180150f05();
    puVar1 = (uint *)(*(longlong *)(lVar2 + 0x1608) + 0x14);
    *puVar1 = *puVar1 | 0x100;
    if ((((*(longlong *)(lVar2 + 0x1608) == *(longlong *)(lVar2 + 0x2200)) &&
         (*(int *)(lVar2 + 0x220c) == 0)) && (*(char *)(lVar2 + 0x2261) == '\0')) &&
       (*(int *)(lVar2 + 0x167c) == 0)) {
      FUN_18010c613(*(longlong *)(lVar2 + 0x2200),0,0,3);
    }
    FUN_18010f900();
    return;
  }
  FUN_180101698("Calling EndMainMenuBar() not from a menu-bar!");
  return;
}

