/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f6767 */

int __fastcall FUN_101f6767(int *param_1,uint param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  local_18 = 0;
  if ((param_1 == (int *)0x0) || ((uint)param_1[3] <= param_2)) {
    local_18 = 6;
    goto LAB_101f67c2;
  }
  local_1c = *param_1;
  iVar4 = param_1[7];
  if (iVar4 == 0) {
    local_18 = FUN_101c461e(local_1c,param_1[2] + param_1[1] + *(byte *)(param_1 + 4) * param_2);
    if ((local_18 != 0) || (uVar5 = FUN_101f68d2(), local_18 != 0)) goto LAB_101f67c2;
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      do {
        uVar3 = FUN_101f68d2();
        if (uVar3 != 0) goto LAB_101f6854;
        param_2 = param_2 + 1;
      } while (param_2 < (uint)param_1[3]);
    }
  }
  else {
    uVar5 = *(uint *)(iVar4 + param_2 * 4);
    if (uVar5 == 0) {
      uVar5 = 0;
    }
    else {
      do {
        uVar3 = *(uint *)(iVar4 + 4 + param_2 * 4);
        if (uVar3 != 0) goto LAB_101f6854;
        param_2 = param_2 + 1;
      } while (param_1[3] != param_2);
    }
  }
  uVar1 = *(int *)(local_1c + 4) + 1;
  uVar3 = 0;
LAB_101f683b:
  uVar2 = param_1[5];
  if (uVar1 - uVar3 < uVar2) goto LAB_101f685f;
LAB_101f6863:
  if ((uVar5 == 0) || (iVar4 = uVar3 - uVar5, uVar3 < uVar5 || iVar4 == 0)) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    *param_4 = iVar4;
    if (param_1[8] == 0) {
      local_18 = FUN_101c461e(local_1c,param_1[5] + uVar5 + -1);
      if (local_18 == 0) {
        local_18 = FUN_101c4b40(local_1c,iVar4,param_3);
      }
    }
    else {
      *param_3 = param_1[8] + uVar5 + -1;
    }
  }
LAB_101f67c2:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_18;
LAB_101f6854:
  uVar1 = *(int *)(local_1c + 4) + 1;
  if (uVar3 <= uVar1) goto LAB_101f683b;
  uVar2 = param_1[5];
LAB_101f685f:
  uVar3 = uVar1 - uVar2;
  goto LAB_101f6863;
}

