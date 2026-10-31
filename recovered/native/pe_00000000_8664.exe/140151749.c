/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140151749 */

undefined8 FUN_140151749(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x38);
  if (lVar1 == 0) {
    uVar2 = 3;
  }
  else {
    FUN_140151377(param_1,*(undefined8 *)(param_1 + 0x20));
    *(undefined4 *)(lVar1 + 0xb4) = 0x201;
    uVar2 = 0;
  }
  return uVar2;
}

