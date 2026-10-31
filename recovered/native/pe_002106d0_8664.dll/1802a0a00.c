/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802a0a00 */

undefined4
FUN_1802a0a00(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_3 == 1) {
    uVar1 = 2;
    uVar3 = 0x22;
    uVar2 = 4;
  }
  else {
    if (param_3 != 2) {
      return param_2;
    }
    uVar1 = 1;
    uVar3 = 0x21;
    uVar2 = 8;
  }
  FUN_18029c420(param_5,param_4,param_2,uVar1,uVar2,uVar3,param_1,0,1);
  return param_2;
}

