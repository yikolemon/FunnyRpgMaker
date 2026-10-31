/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005b335 */

void FUN_18005b335(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (0x30256 < DAT_180417a10) {
    uVar1 = param_1[3];
    uVar2 = *(undefined8 *)param_1[2];
    uVar3 = *(undefined8 *)param_1[1];
    uVar4 = FUN_180061eb4(*(undefined4 *)*param_1);
    FUN_180061cbf(uVar4,uVar3,uVar2,uVar1);
    return;
  }
  uVar1 = param_1[3];
  uVar2 = *(undefined8 *)param_1[2];
  uVar3 = *(undefined8 *)param_1[1];
  if (0x2ffff < DAT_180417a10) {
    uVar4 = FUN_180061eb4(*(undefined4 *)*param_1);
    FUN_18006747d(uVar4,uVar3,uVar2,uVar1);
    return;
  }
  uVar4 = FUN_180061eb4(*(undefined4 *)*param_1);
  FUN_180067672(uVar4,uVar3,uVar2,uVar1);
  return;
}

