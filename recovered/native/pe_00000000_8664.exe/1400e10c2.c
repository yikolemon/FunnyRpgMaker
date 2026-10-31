/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e10c2 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_1400e10c2(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0;
  *(undefined8 *)(param_1 + 0x70) = 0;
  *(undefined8 *)(param_1 + 0x54) = 0;
  *(undefined8 *)(param_1 + 0x5c) = 0;
  *(undefined8 *)(param_1 + 0x78) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  FUN_1401c5830(param_1 + 0x88,0,0x210,param_4,0xfffffffffffffffe);
  *(undefined8 *)(param_1 + 0x2a0) = 0;
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  FUN_1401c5830(param_1,0,0x2f8);
  uVar1 = _UNK_140e8c738;
  *(undefined8 *)(param_1 + 8) = _DAT_140e8c730;
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined4 *)(param_1 + 0x18) = 0x2000;
  *(undefined1 *)(param_1 + 0x51) = 0;
  *(undefined8 *)(param_1 + 0x298) = 0x100000001;
  return param_1;
}

