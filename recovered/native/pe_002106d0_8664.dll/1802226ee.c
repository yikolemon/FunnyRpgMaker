/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802226ee */

undefined8
FUN_1802226ee(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = FUN_18022723a();
  if (lVar1 != 0) {
    if (param_4 != (undefined4 *)0x0) {
      *param_4 = *(undefined4 *)(lVar1 + 0xc);
    }
    uVar2 = FUN_1801ce63e(param_3,*(undefined4 *)(lVar1 + 8));
    return uVar2;
  }
  return 0x8e;
}

