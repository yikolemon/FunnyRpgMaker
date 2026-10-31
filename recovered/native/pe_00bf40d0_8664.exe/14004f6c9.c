/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004f6c9 */

undefined8 FUN_14004f6c9(longlong param_1)

{
  longlong lVar1;
  uint uVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  uVar3 = 3;
  if (((lVar1 != 0) && (*(longlong *)(lVar1 + 0x170) != 0)) &&
     (uVar3 = 0xa0, *(char *)(*(longlong *)(lVar1 + 0x170) + 0x231) == '\0')) {
    uVar2 = FUN_14004f2c7(param_1,*(undefined8 **)(param_1 + 0x20));
    *(uint *)(lVar1 + 0x168) = uVar2;
    uVar3 = 0;
  }
  return uVar3;
}

