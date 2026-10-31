/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10236190 */

void FUN_10236190(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if ((7 < param_2) && (DAT_103235d4 != '\0')) {
    uVar2 = param_1 + (param_3 + 1) * 2;
    uVar4 = param_2 * 2 + 9 + param_1 & 0xfffffff8;
    uVar1 = param_1 + (param_4 + 1) * 2;
    uVar3 = uVar4;
    if (uVar2 <= uVar4) {
      uVar3 = uVar2;
    }
    uVar2 = uVar4;
    if (uVar1 <= uVar4) {
      uVar2 = uVar1;
    }
    guard_check_icall(param_1,uVar4,uVar3,uVar2);
  }
  return;
}

