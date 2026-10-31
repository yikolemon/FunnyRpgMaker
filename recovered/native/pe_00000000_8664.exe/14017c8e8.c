/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017c8e8 */

undefined8 FUN_14017c8e8(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined1 (*) [16])(lVar1 + 0x158) = ZEXT416(DAT_140eb1558);
  *(undefined8 *)(lVar1 + 0x168) = 0x15;
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + 0x10))
            (*(undefined8 *)(param_1 + 0x60),0,0);
  return 0;
}

