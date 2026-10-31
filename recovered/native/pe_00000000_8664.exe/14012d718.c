/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012d718 */

int FUN_14012d718(undefined8 *param_1,undefined8 param_2,int param_3,int param_4,int param_5,
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
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  uVar1 = *param_1;
  iVar5 = FUN_14012d612(param_2,param_3);
  if ((iVar5 == 0) &&
     (local_58 = uVar1, sVar2 = FUN_14012d676(param_2,&local_4c), iVar5 = local_4c, local_4c == 0))
  {
    iVar5 = 8;
    if (sVar2 < 0xfef) {
      if (-1 < sVar2) {
        iVar11 = sVar2 + 1;
        do {
          iVar6 = FUN_14012d9e0(param_2,&local_4c);
          iVar5 = local_4c;
          if (((local_4c != 0) ||
              (uVar3 = FUN_14012d676(param_2,&local_4c), iVar5 = local_4c, local_4c != 0)) ||
             (sVar2 = FUN_14012d676(param_2,&local_4c), iVar5 = local_4c, local_4c != 0))
          goto LAB_14012d7f1;
          if (iVar6 == param_5) {
            *param_8 = (int)(short)uVar3 + 1;
            iVar5 = 8;
            if ((0xaa6 < uVar3) || (iVar5 = FUN_14012d612(param_2,param_3 + sVar2), iVar5 != 0))
            goto LAB_14012d7f1;
            local_68 = 0;
            local_60 = &local_4c;
            lVar8 = FUN_14012b8aa(local_58,8,0,*param_8);
            iVar5 = local_4c;
            if (local_4c != 0) goto LAB_14012d7f1;
            uVar10 = (ulonglong)*param_8;
            if ((int)*param_8 < 1) goto LAB_14012d938;
            lVar12 = 0;
            goto LAB_14012d8ae;
          }
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
      }
      iVar5 = 1;
    }
  }
  goto LAB_14012d7f1;
  while( true ) {
    *(uint *)(lVar8 + 4 + lVar12 * 8) = uVar7 & 0xffffff;
    lVar12 = lVar12 + 1;
    uVar10 = (ulonglong)(int)*param_8;
    if ((longlong)uVar10 <= lVar12) break;
LAB_14012d8ae:
    uVar4 = FUN_14012d676(param_2,&local_4c);
    *(undefined2 *)(lVar8 + lVar12 * 8) = uVar4;
    iVar5 = local_4c;
    if (((local_4c != 0) || (iVar5 = FUN_14012d664(param_2,2), iVar5 != 0)) ||
       ((uVar7 = FUN_14012d9e0(param_2,&local_4c), iVar5 = local_4c, local_4c != 0 ||
        (local_4c = FUN_14012d664(param_2,4), iVar5 = local_4c, local_4c != 0))))
    goto LAB_14012d9c0;
  }
LAB_14012d938:
  if (param_6 != '\0') {
    FUN_1401a7460(lVar8,(longlong)(int)uVar10,8,&LAB_14012da84);
    uVar10 = (ulonglong)*param_8;
  }
  local_68 = 0;
  local_60 = &local_4c;
  lVar12 = FUN_14012b8aa(local_58,4,0,uVar10);
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
LAB_14012d9c0:
  FUN_140128b39(local_58,lVar8);
LAB_14012d7f1:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
  }
  return iVar5;
}

