/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800c7033 */

void FUN_1800c7033(undefined8 *param_1)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (DAT_180417a10 < 0x30257) {
    uVar2 = *(undefined8 *)param_1[5];
    uVar1 = *(undefined4 *)param_1[4];
    uVar3 = *(undefined8 *)param_1[3];
    uVar4 = *(undefined8 *)param_1[2];
    uVar5 = *(undefined8 *)param_1[1];
    if (DAT_180417a10 < 0x30000) {
      uVar6 = FUN_180061eb4(*(undefined4 *)*param_1);
      FUN_1800c7370(uVar6,uVar5,uVar4,uVar3,uVar1,uVar2);
    }
    else {
      uVar6 = FUN_180061eb4(*(undefined4 *)*param_1);
      FUN_1800c723e(uVar6,uVar5,uVar4,uVar3,uVar1,uVar2);
    }
  }
  else {
    uVar2 = *(undefined8 *)param_1[5];
    uVar1 = *(undefined4 *)param_1[4];
    uVar3 = *(undefined8 *)param_1[3];
    uVar4 = *(undefined8 *)param_1[2];
    uVar5 = *(undefined8 *)param_1[1];
    uVar6 = FUN_180061eb4(*(undefined4 *)*param_1);
    FUN_1800c710c(uVar6,uVar5,uVar4,uVar3,uVar1,uVar2);
  }
  return;
}

