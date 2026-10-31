/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004f699 */

undefined8 FUN_14004f699(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 == 0) {
    uVar2 = 3;
  }
  else {
    FUN_14004f2c7(param_1,*(undefined8 **)(param_1 + 0x20));
    *(undefined4 *)(lVar1 + 0xb4) = 0x201;
    uVar2 = 0;
  }
  return uVar2;
}

