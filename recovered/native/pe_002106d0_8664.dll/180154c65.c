/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180154c65 */

undefined8 FUN_180154c65(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  
  if (*(char *)(*(longlong *)(DAT_180419160 + 0x1608) + 0x10e) == '\0') {
    if (*(longlong *)(DAT_180419160 + 0x2560) != 0) {
      uVar1 = FUN_180153d48(*(longlong *)(DAT_180419160 + 0x2560),param_1,0,param_2 | 0x200020,0);
      return uVar1;
    }
    FUN_180101698("Needs to be called between BeginTabBar() and EndTabBar()!",param_1);
  }
  return 0;
}

