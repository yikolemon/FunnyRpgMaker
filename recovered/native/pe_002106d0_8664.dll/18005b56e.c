/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005b56e */

undefined8 FUN_18005b56e(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (DAT_180417a10 < 0x30257) {
    uVar1 = *(undefined8 *)param_2[1];
    if (DAT_180417a10 < 0x30000) {
      uVar2 = FUN_180061eb4(*(undefined4 *)*param_2);
      FUN_18006a075(param_1,uVar2,uVar1);
    }
    else {
      uVar2 = FUN_180061eb4(*(undefined4 *)*param_2);
      FUN_180069fc2(param_1,uVar2,uVar1);
    }
  }
  else {
    uVar1 = *(undefined8 *)param_2[1];
    uVar2 = FUN_180061eb4(*(undefined4 *)*param_2);
    FUN_180069f0f(param_1,uVar2,uVar1);
  }
  return param_1;
}

