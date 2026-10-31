/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015db5e */

void FUN_14015db5e(longlong param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_1 + 0xd8);
  if (lVar1 != 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x98);
    if (*(longlong *)(lVar1 + 0xa0) != 0) {
      FUN_14012dd2b(*(undefined8 *)(param_1 + 0xa0),lVar1 + 0xa0);
    }
    FUN_140128b39(uVar2,*(undefined8 *)(lVar1 + 0xb0));
    *(undefined8 *)(lVar1 + 0xb0) = 0;
    FUN_140128b39(uVar2,lVar1);
    *(undefined8 *)(param_1 + 0xd8) = 0;
  }
  return;
}

