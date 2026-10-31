/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102102c2 */

int __fastcall FUN_102102c2(int *param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_24 [3];
  byte local_21;
  int *local_20;
  int *local_1c;
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_24;
  local_21 = param_3 == -0x15;
  iVar5 = param_2 + -0x15;
  if (!(bool)local_21) {
    iVar5 = param_2;
  }
  iVar2 = 0;
  iVar6 = 0;
  if (0 < param_3) {
    iVar6 = param_3;
  }
  iVar1 = *param_1;
  if (iVar1 != 0) {
    piVar4 = (int *)(param_1[2] + 4);
    do {
      if ((piVar4[-1] == iVar5) && (*piVar4 == iVar6)) goto LAB_10210351;
      iVar2 = iVar2 + 1;
      piVar4 = piVar4 + 3;
    } while (iVar1 != iVar2);
  }
  local_20 = param_1;
  iVar3 = FUN_102103ad(&local_1c);
  if (iVar3 == 0) {
    *local_1c = iVar5;
    local_1c[1] = iVar6;
    local_1c[2] = param_3 >> 0x1f & (uint)local_21 * 2 + 1;
    iVar2 = iVar1;
LAB_10210351:
    iVar3 = FUN_102103eb(local_18);
    if (((iVar3 == 0) && (iVar3 = FUN_10210444(param_4), iVar3 == 0)) &&
       (iVar3 = 0, param_5 != (int *)0x0)) {
      *param_5 = iVar2;
    }
  }
  if (DAT_10388d00 != (local_14 ^ (uint)auStack_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return iVar3;
}

