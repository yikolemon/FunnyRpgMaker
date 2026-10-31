/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140131d95 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140131d95(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_1 + 0x18) = 0x1e00000056;
  *(undefined1 *)(param_1 + 0x20) = 1;
  uVar1 = _UNK_140e9b5d8;
  *(undefined8 *)(param_1 + 0x24) = _DAT_140e9b5d0;
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  uVar4 = _UNK_140e9b5ec;
  uVar3 = _UNK_140e9b5e8;
  uVar2 = _UNK_140e9b5e4;
  *(undefined4 *)(param_1 + 0x34) = _DAT_140e9b5e0;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  FUN_14013b3de();
  return 0;
}

