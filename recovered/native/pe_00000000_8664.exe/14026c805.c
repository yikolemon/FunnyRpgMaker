/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14026c805 */

void FUN_14026c805(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (0x30256 < DAT_140628ee0) {
    uVar1 = param_1[3];
    uVar2 = *(undefined8 *)param_1[2];
    uVar3 = *(undefined8 *)param_1[1];
    uVar4 = FUN_140273384(*(undefined4 *)*param_1);
    FUN_14027318f(uVar4,uVar3,uVar2,uVar1);
    return;
  }
  uVar1 = param_1[3];
  uVar2 = *(undefined8 *)param_1[2];
  uVar3 = *(undefined8 *)param_1[1];
  if (0x2ffff < DAT_140628ee0) {
    uVar4 = FUN_140273384(*(undefined4 *)*param_1);
    FUN_14027894d(uVar4,uVar3,uVar2,uVar1);
    return;
  }
  uVar4 = FUN_140273384(*(undefined4 *)*param_1);
  FUN_140278b42(uVar4,uVar3,uVar2,uVar1);
  return;
}

