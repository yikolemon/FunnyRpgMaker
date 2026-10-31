/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10150b10 */

undefined4 FUN_10150b10(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(char *)(*(int *)(DAT_1039d74c + 0x14cc) + 0xfe) == '\0') {
    if (*(int *)(DAT_1039d74c + 0x2358) != 0) {
      uVar1 = FUN_1014fb74(*(int *)(DAT_1039d74c + 0x2358),param_1,0,param_2 | 0x200020,0);
      return uVar1;
    }
    FUN_100fcef5("Needs to be called between BeginTabBar() and EndTabBar()!");
  }
  return 0;
}

