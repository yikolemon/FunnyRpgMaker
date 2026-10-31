/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007a83c */

undefined8 FUN_14007a83c(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined1 (*) [16])(lVar1 + 0x158) = ZEXT416(DAT_14010a318);
  *(undefined8 *)(lVar1 + 0x168) = 0x15;
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + 0x10))
            (*(undefined8 *)(param_1 + 0x60),0,0);
  return 0;
}

