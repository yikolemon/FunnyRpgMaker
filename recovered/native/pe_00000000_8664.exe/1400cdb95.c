/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400cdb95 */

undefined8 FUN_1400cdb95(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(*(longlong *)(DAT_140f2a910 + 0x1608) + 0x10e) == '\0') {
    if (*(longlong *)(DAT_140f2a910 + 0x2560) != 0) {
      uVar1 = FUN_1400ccc78(*(longlong *)(DAT_140f2a910 + 0x2560),param_1,0,param_2 | 0x200020,0);
      return uVar1;
    }
    FUN_14007a954("Needs to be called between BeginTabBar() and EndTabBar()!",param_1);
  }
  return 0;
}

