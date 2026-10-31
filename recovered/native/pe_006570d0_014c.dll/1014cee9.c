/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014cee9 */

void FUN_1014cee9(void)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = DAT_1039d74c;
  if (*(char *)(*(int *)(DAT_1039d74c + 0x14cc) + 0x1a7) != '\0') {
    FUN_1014caf3();
    puVar1 = (uint *)(*(int *)(iVar2 + 0x14cc) + 0xc);
    *puVar1 = *puVar1 | 0x100;
    if ((((*(int *)(iVar2 + 0x14cc) == *(int *)(iVar2 + 0x2048)) && (*(int *)(iVar2 + 0x2050) == 0))
        && (*(char *)(iVar2 + 0x2099) == '\0')) && (*(int *)(iVar2 + 0x1528) == 0)) {
      FUN_10107908(*(int *)(iVar2 + 0x2048),0,0,3);
    }
    FUN_1010ad44();
    return;
  }
  FUN_100fcef5("Calling EndMainMenuBar() not from a menu-bar!");
  return;
}

