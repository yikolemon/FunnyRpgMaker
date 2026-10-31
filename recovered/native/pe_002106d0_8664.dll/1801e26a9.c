/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e26a9 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1801e26a9(longlong param_1)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  *(undefined8 *)(param_1 + 0x18) = 0x1e00000056;
  *(undefined1 *)(param_1 + 0x20) = 1;
  uVar1 = _UNK_180337278;
  *(undefined8 *)(param_1 + 0x24) = _DAT_180337270;
  *(undefined8 *)(param_1 + 0x2c) = uVar1;
  uVar4 = _UNK_18033728c;
  uVar3 = _UNK_180337288;
  uVar2 = _UNK_180337284;
  *(undefined4 *)(param_1 + 0x34) = _DAT_180337280;
  *(undefined4 *)(param_1 + 0x38) = uVar2;
  *(undefined4 *)(param_1 + 0x3c) = uVar3;
  *(undefined4 *)(param_1 + 0x40) = uVar4;
  FUN_1801ebcf2();
  return 0;
}

