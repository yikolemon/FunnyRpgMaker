/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102360d0 */

void __fastcall FUN_102360d0(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar3 = param_1[5];
  if ((7 < uVar3) && (iVar2 = *param_1, DAT_103235d4 != '\0')) {
    uVar1 = iVar2 + (uVar3 + 1) * 2;
    uVar5 = iVar2 + (param_1[4] + 1) * 2;
    uVar4 = uVar3 * 2 + 9 + iVar2 & 0xfffffff8;
    uVar3 = uVar4;
    if (uVar1 <= uVar4) {
      uVar3 = uVar1;
    }
    if (uVar4 < uVar5) {
      uVar5 = uVar4;
    }
    guard_check_icall(iVar2,uVar4,uVar3,uVar5);
  }
  return;
}

