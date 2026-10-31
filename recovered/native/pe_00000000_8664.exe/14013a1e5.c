/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013a1e5 */

undefined8 FUN_14013a1e5(longlong *param_1,undefined8 param_2,longlong param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  
  *param_1 = param_3;
  lVar1 = *(longlong *)(param_3 + 0xb8);
  param_1[1] = lVar1;
  uVar2 = 0;
  if (lVar1 == 0) {
    uVar2 = FUN_14013a5b7(param_3,param_1 + 1,param_2);
    if ((int)uVar2 == 0) {
      *(longlong *)(param_3 + 0xb8) = param_1[1];
      *(code **)(param_3 + 0xc0) = FUN_14013a6e0;
      uVar2 = 0;
    }
  }
  return uVar2;
}

