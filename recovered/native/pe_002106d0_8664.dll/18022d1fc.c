/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022d1fc */

undefined8 FUN_18022d1fc(longlong param_1)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(param_1 + 8);
  *(undefined1 (*) [16])(lVar1 + 0x158) = ZEXT416(DAT_18034d1e8);
  *(undefined8 *)(lVar1 + 0x168) = 0x15;
  (**(code **)(*(longlong *)(*(longlong *)(param_1 + 0x18) + 0x60) + 0x10))
            (*(undefined8 *)(param_1 + 0x60),0,0);
  return 0;
}

