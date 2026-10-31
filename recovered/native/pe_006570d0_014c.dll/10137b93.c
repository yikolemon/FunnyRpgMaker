/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10137b93 */

byte __fastcall FUN_10137b93(uint param_1,undefined4 param_2,int param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  
  if ((param_1 >> 9 & 1) == 0) {
    return 0;
  }
  if (param_3 == 0 && param_4 == 0) {
LAB_10137bd0:
    bVar1 = 0;
  }
  else {
    if (param_3 == 0 || param_4 == 0) {
      if (param_3 == 0) {
        return 1;
      }
      if (param_4 == 0) {
        return 1;
      }
    }
    else {
      iVar2 = FUN_101347e7(param_2,param_3,param_4);
      if (iVar2 < 0) {
        return 1;
      }
      if (iVar2 != 0) goto LAB_10137bd0;
    }
    bVar1 = FUN_10134b13(param_2,param_3);
    bVar1 = bVar1 ^ 1 | (byte)(param_1 >> 10) & 1;
  }
  return bVar1;
}

