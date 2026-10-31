/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004f5c3 */

undefined4 FUN_14004f5c3(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0xa1;
  if (*(undefined8 **)(param_1 + 0x20) + 5 <= *(undefined8 **)(param_1 + 0x28)) {
    lVar1 = *(longlong *)(param_1 + 0x38);
    uVar2 = FUN_14004f2c7(param_1,*(undefined8 **)(param_1 + 0x20));
    uVar3 = 3;
    if (0xfffffff0 < uVar2 - 0x11) {
      *(short *)(lVar1 + 0xac) = (short)uVar2;
      *(short *)(lVar1 + 0xae) =
           (short)((uint)(*(int *)(param_1 + 0x28) - *(int *)(param_1 + 0x20)) >> 3) + -4;
      *(short *)(param_1 + 0x40) = (short)uVar2;
      *(undefined2 *)(param_1 + 0x42) = *(undefined2 *)(lVar1 + 0xae);
      uVar3 = 0;
    }
  }
  return uVar3;
}

