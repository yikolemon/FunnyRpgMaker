/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18005b7b1 */

void FUN_18005b7b1(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (0x30256 < DAT_180417a10) {
    uVar1 = *(undefined8 *)param_1[1];
    uVar2 = FUN_180061eb4(*(undefined4 *)*param_1);
    FUN_18006a335(uVar2,uVar1);
    return;
  }
  uVar1 = *(undefined8 *)param_1[1];
  if (0x2ffff < DAT_180417a10) {
    uVar2 = FUN_180061eb4(*(undefined4 *)*param_1);
    FUN_18006a39c(uVar2,uVar1);
    return;
  }
  uVar2 = FUN_180061eb4(*(undefined4 *)*param_1);
  FUN_18006a403(uVar2,uVar1);
  return;
}

