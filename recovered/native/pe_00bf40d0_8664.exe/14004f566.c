/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004f566 */

undefined8 FUN_14004f566(longlong param_1)

{
  undefined8 *puVar1;
  longlong lVar2;
  uint uVar3;
  undefined8 uVar4;
  
  puVar1 = *(undefined8 **)(param_1 + 0x20);
  uVar4 = 0xa1;
  if (puVar1 + 2 <= *(undefined8 **)(param_1 + 0x28)) {
    lVar2 = *(longlong *)(param_1 + 0x38);
    uVar3 = FUN_14004f2c7(param_1,puVar1);
    uVar4 = 3;
    if (-1 < (int)uVar3) {
      *(uint *)(lVar2 + 0x74) = uVar3;
      uVar3 = FUN_14004f2c7(param_1,puVar1 + 1);
      if (-1 < (int)uVar3) {
        *(uint *)(lVar2 + 0x70) = uVar3;
        uVar4 = 0;
      }
    }
  }
  return uVar4;
}

