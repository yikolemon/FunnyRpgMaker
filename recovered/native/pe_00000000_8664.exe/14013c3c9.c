/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013c3c9 */

undefined8 FUN_14013c3c9(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *param_1;
  *(undefined4 *)(param_1 + 0x10) = param_2;
  if ((*(byte *)(lVar1 + 8) & 1) == 0) {
    uVar2 = (**(code **)(*(longlong *)(lVar1 + 0x2d0) + 0xe8))(lVar1,param_2,param_1 + 3);
    if ((int)uVar2 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      return uVar2;
    }
  }
  else {
    FUN_14012b2c6();
    FUN_140147f78(param_1);
  }
  return 0;
}

