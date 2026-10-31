/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002fcdd */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_14002fcdd(longlong param_1)

{
  undefined8 uVar1;
  
  *(undefined8 *)(param_1 + 0x18) = 0x1e00000056;
  *(undefined1 *)(param_1 + 0x20) = 1;
  uVar1 = _UNK_1400f4398;
  *(undefined8 *)(param_1 + 0x24) = _DAT_1400f4390;
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  uVar1 = _UNK_1400f43a8;
  *(undefined8 *)(param_1 + 0x34) = _DAT_1400f43a0;
  *(undefined8 *)(param_1 + 0x3c) = uVar1;
  FUN_140039326(param_1);
  return 0;
}

