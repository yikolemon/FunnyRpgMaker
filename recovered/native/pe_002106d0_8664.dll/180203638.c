/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180203638 */

int FUN_180203638(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  undefined1 auStack_78 [44];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_78;
  local_4c = 0;
  if (param_1 != (longlong *)0x0) {
    uVar6 = (ulonglong)param_2;
    if (param_2 < *(uint *)(param_1 + 2)) {
      lVar1 = *param_1;
      lVar2 = param_1[4];
      if (lVar2 == 0) {
        local_4c = FUN_1801ce63e(lVar1,*(int *)((longlong)param_1 + 0xc) + (int)param_1[1] +
                                       *(byte *)((longlong)param_1 + 0x14) * param_2);
        if ((local_4c != 0) || (uVar8 = FUN_1802037e2(param_1,&local_4c), local_4c != 0))
        goto LAB_1802036b4;
        if (uVar8 == 0) goto LAB_18020373e;
        do {
          uVar4 = FUN_1802037e2(param_1,&local_4c);
          if (uVar4 != 0) goto LAB_180203758;
          uVar4 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar4;
        } while (uVar4 < *(uint *)(param_1 + 2));
      }
      else {
        uVar8 = *(uint *)(lVar2 + uVar6 * 4);
        if (uVar8 == 0) {
LAB_18020373e:
          uVar8 = 0;
        }
        else {
          do {
            uVar4 = *(uint *)(lVar2 + 4 + uVar6 * 4);
            if (uVar4 != 0) goto LAB_180203758;
            uVar6 = uVar6 + 1;
          } while (*(uint *)(param_1 + 2) != uVar6);
        }
      }
      uVar3 = *(int *)(lVar1 + 8) + 1;
      uVar4 = 0;
      goto LAB_180203749;
    }
  }
  local_4c = 6;
  goto LAB_1802036b4;
LAB_180203758:
  uVar3 = *(int *)(lVar1 + 8) + 1;
  if (uVar3 < uVar4) {
    uVar5 = *(uint *)(param_1 + 3);
LAB_180203765:
    uVar4 = uVar3 - uVar5;
  }
  else {
LAB_180203749:
    uVar5 = *(uint *)(param_1 + 3);
    if (uVar3 - uVar4 < uVar5) goto LAB_180203765;
  }
  if ((uVar8 == 0) || (iVar7 = uVar4 - uVar8, uVar4 < uVar8 || iVar7 == 0)) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    *param_4 = iVar7;
    if (param_1[5] == 0) {
      local_4c = FUN_1801ce63e(lVar1,uVar8 + (int)param_1[3] + -1);
      if (local_4c == 0) {
        local_4c = FUN_1801cec36(lVar1,iVar7,param_3);
      }
    }
    else {
      *param_3 = param_1[5] + (ulonglong)uVar8 + -1;
    }
  }
LAB_1802036b4:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_78)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_78);
  }
  return local_4c;
}

