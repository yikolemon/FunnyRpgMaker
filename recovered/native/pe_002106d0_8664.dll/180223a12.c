/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180223a12 */

undefined8 FUN_180223a12(longlong param_1,undefined8 param_2,char param_3)

{
  undefined8 uVar1;
  
  if (param_3 == '\0') {
    uVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x68686561,param_2,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    param_1 = param_1 + 0x138;
  }
  else {
    uVar1 = (**(code **)(param_1 + 0x2a0))(param_1,0x76686561,param_2,0);
    if ((int)uVar1 != 0) {
      return uVar1;
    }
    param_1 = param_1 + 0x198;
  }
  uVar1 = FUN_1801cf0cc(param_2,&DAT_18034cc70,param_1);
  if ((int)uVar1 == 0) {
    *(undefined8 *)(param_1 + 0x28) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    uVar1 = 0;
  }
  return uVar1;
}

