/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ce744 */

int FUN_1801ce744(undefined8 *param_1,undefined8 param_2,int param_3,int param_4,int param_5,
                 char param_6,longlong *param_7,uint *param_8)

{
  undefined8 uVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int *local_60;
  undefined8 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  uVar1 = *param_1;
  iVar5 = FUN_1801ce63e(param_2,param_3);
  if ((iVar5 == 0) &&
     (local_58 = uVar1, sVar2 = FUN_1801ce6a2(param_2,&local_4c), iVar5 = local_4c, local_4c == 0))
  {
    iVar5 = 8;
    if (sVar2 < 0xfef) {
      if (-1 < sVar2) {
        iVar11 = sVar2 + 1;
        do {
          iVar6 = FUN_1801cea0c(param_2,&local_4c);
          iVar5 = local_4c;
          if (((local_4c != 0) ||
              (uVar3 = FUN_1801ce6a2(param_2,&local_4c), iVar5 = local_4c, local_4c != 0)) ||
             (sVar2 = FUN_1801ce6a2(param_2,&local_4c), iVar5 = local_4c, local_4c != 0))
          goto LAB_1801ce81d;
          if (iVar6 == param_5) {
            *param_8 = (int)(short)uVar3 + 1;
            iVar5 = 8;
            if ((0xaa6 < uVar3) || (iVar5 = FUN_1801ce63e(param_2,param_3 + sVar2), iVar5 != 0))
            goto LAB_1801ce81d;
            local_68 = 0;
            local_60 = &local_4c;
            lVar8 = FUN_1801cc8d6(local_58,8,0,*param_8);
            iVar5 = local_4c;
            if (local_4c != 0) goto LAB_1801ce81d;
            uVar10 = (ulonglong)*param_8;
            if ((int)*param_8 < 1) goto LAB_1801ce964;
            lVar12 = 0;
            goto LAB_1801ce8da;
          }
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      iVar5 = 1;
    }
  }
  goto LAB_1801ce81d;
  while( true ) {
    *(uint *)(lVar8 + 4 + lVar12 * 8) = uVar7 & 0xffffff;
    lVar12 = lVar12 + 1;
    uVar10 = (ulonglong)(int)*param_8;
    if ((longlong)uVar10 <= lVar12) break;
LAB_1801ce8da:
    uVar4 = FUN_1801ce6a2(param_2,&local_4c);
    *(undefined2 *)(lVar8 + lVar12 * 8) = uVar4;
    iVar5 = local_4c;
    if (((local_4c != 0) || (iVar5 = FUN_1801ce690(param_2,2), iVar5 != 0)) ||
       ((uVar7 = FUN_1801cea0c(param_2,&local_4c), iVar5 = local_4c, local_4c != 0 ||
        (local_4c = FUN_1801ce690(param_2,4), iVar5 = local_4c, local_4c != 0))))
    goto LAB_1801ce9ec;
  }
LAB_1801ce964:
  if (param_6 != '\0') {
    FUN_180289570(lVar8,(longlong)(int)uVar10,8,&LAB_1801ceab0);
    uVar10 = (ulonglong)*param_8;
  }
  local_68 = 0;
  local_60 = &local_4c;
  lVar12 = FUN_1801cc8d6(local_58,4,0,uVar10);
  iVar5 = local_4c;
  if (local_4c == 0) {
    if (0 < (int)*param_8) {
      lVar9 = 0;
      do {
        *(int *)(lVar12 + lVar9 * 4) = *(int *)(lVar8 + 4 + lVar9 * 8) + param_4;
        lVar9 = lVar9 + 1;
      } while (lVar9 < (int)*param_8);
    }
    *param_7 = lVar12;
    iVar5 = 0;
  }
LAB_1801ce9ec:
  FUN_1801c9b65(local_58,lVar8);
LAB_1801ce81d:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
  }
  return iVar5;
}

