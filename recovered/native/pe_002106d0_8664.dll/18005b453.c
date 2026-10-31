/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005b453 */

undefined8 FUN_18005b453(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (DAT_180417a10 < 0x30257) {
    uVar1 = *(undefined8 *)param_2[3];
    uVar2 = *(undefined8 *)param_2[2];
    uVar3 = *(undefined8 *)param_2[1];
    if (DAT_180417a10 < 0x30000) {
      uVar4 = FUN_180061eb4(*(undefined4 *)*param_2);
      FUN_180069428(param_1,uVar4,uVar3,uVar2,uVar1);
    }
    else {
      uVar4 = FUN_180061eb4(*(undefined4 *)*param_2);
      FUN_180068954(param_1,uVar4,uVar3,uVar2,uVar1);
    }
  }
  else {
    uVar1 = *(undefined8 *)param_2[3];
    uVar2 = *(undefined8 *)param_2[2];
    uVar3 = *(undefined8 *)param_2[1];
    uVar4 = FUN_180061eb4(*(undefined4 *)*param_2);
    FUN_18006786b(param_1,uVar4,uVar3,uVar2,uVar1);
  }
  return param_1;
}

