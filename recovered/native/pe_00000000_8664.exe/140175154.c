/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140175154 */

void FUN_140175154(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x4d8);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    FUN_14012dd2b(*(undefined8 *)(param_1 + 0xa0),lVar1 + 0x18);
    FUN_140128b39(uVar2,lVar1);
    return;
  }
  return;
}

