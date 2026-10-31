/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004f62c */

undefined8 FUN_14004f62c(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  uVar4 = 0xa1;
  if (puVar1 + 3 <= *(undefined8 **)(param_1 + 0x28)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    uVar3 = FUN_14004f2c7(param_1,puVar1);
    *(uint *)(lVar2 + 0x80) = uVar3;
    uVar3 = FUN_14004f2c7(param_1,puVar1 + 1);
    *(uint *)(lVar2 + 0x84) = uVar3;
    uVar3 = FUN_14004f2c7(param_1,puVar1 + 2);
    *(uint *)(lVar2 + 0x88) = uVar3;
    uVar4 = 0;
  }
  return uVar4;
}

