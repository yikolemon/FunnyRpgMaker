/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017316e */

undefined8 FUN_14017316e(longlong param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x636d6170,param_2,(undefined4 *)(param_1 + 0x298))
  ;
  if ((int)uVar1 == 0) {
    uVar1 = FUN_14012dc0a(param_2,*(undefined4 *)(param_1 + 0x298),param_1 + 0x290);
    if ((int)uVar1 == 0) {
      uVar1 = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x298) = 0;
    }
  }
  return uVar1;
}

