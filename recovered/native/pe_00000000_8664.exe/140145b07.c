/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140145b07 */

void FUN_140145b07(longlong *param_1)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = param_1[0x22];
  uVar2 = *(undefined8 *)(*param_1 + 0x98);
  if (lVar1 != 0) {
    FUN_140128b39(uVar2,*(undefined8 *)(lVar1 + 0x30));
    *(undefined8 *)(lVar1 + 0x30) = 0;
    FUN_140128b39(uVar2,*(undefined8 *)(lVar1 + 0x230));
    *(undefined8 *)(lVar1 + 0x230) = 0;
    FUN_140146447(lVar1);
    param_1[0x22] = 0;
  }
  FUN_1401464ec(uVar2,param_1 + 0x1b);
  return;
}

