/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fe685 */

void FUN_1801fe685(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined8 local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  uVar1 = param_2[4];
  puVar2 = *(undefined8 **)(param_1 + 0x2a0);
  (*(code *)param_2[7])(param_2);
  if (((char *)*param_2 < (char *)param_2[2]) && (*(char *)*param_2 == '[')) {
    (*(code *)param_2[8])(param_2);
    (*(code *)param_2[7])(param_2);
    if (((char *)*param_2 < (char *)param_2[2]) && (*(char *)*param_2 == ']')) goto LAB_1801fe901;
  }
  else {
    uVar3 = (*(code *)param_2[9])(param_2);
    if (-1 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      if ((param_2[2] < *param_2) ||
         (uVar10 = (longlong)(param_2[2] - *param_2) >> 3, (longlong)uVar8 <= (longlong)uVar10)) {
LAB_1801fe725:
        (*(code *)param_2[8])(param_2);
        if ((int)param_2[3] != 0) goto LAB_1801fe901;
        (*(code *)param_2[7])(param_2);
        if (((int)param_2[0x45] != 0) ||
           (iVar5 = (**(code **)*puVar2)(param_2 + 0x46,uVar8,uVar1), local_4c = iVar5, iVar5 == 0))
        {
          pcVar6 = (char *)*param_2;
          local_60 = puVar2;
          if (pcVar6 + 4 < (char *)param_2[2]) {
            iVar9 = 0;
            do {
              if (((*pcVar6 != 'd') || (pcVar6[1] != 'u')) || (pcVar6[2] != 'p')) break;
              (*(code *)param_2[8])(param_2);
              iVar4 = (*(code *)param_2[9])(param_2);
              iVar5 = FUN_1801fdf29(param_2,&local_50,&local_58,
                                    *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x50) != 0);
              if ((iVar5 == 0) || ((*(code *)param_2[8])(param_2), (int)param_2[3] != 0))
              goto LAB_1801fe901;
              (*(code *)param_2[7])(param_2);
              pcVar6 = (char *)*param_2;
              if (((pcVar6 + 4 < (char *)param_2[2]) && ((*pcVar6 == 'p' && (pcVar6[1] == 'u')))) &&
                 (pcVar6[2] == 't')) {
                (*(code *)param_2[8])(param_2);
                (*(code *)param_2[7])(param_2);
              }
              if (param_2[0x51] != 0) {
                FUN_1801ca2cd(iVar4,iVar9,param_2[0x51],uVar1);
                iVar4 = iVar9;
              }
              uVar3 = local_50;
              if ((int)param_2[0x45] == 0) {
                if ((int)*(uint *)(param_1 + 0x118) < 0) {
                  local_4c = (*(code *)param_2[0x4f])(param_2 + 0x46,iVar4,local_58,local_50);
                }
                else {
                  if (local_50 < *(uint *)(param_1 + 0x118)) {
                    iVar5 = 3;
                    goto LAB_1801fe97f;
                  }
                  lVar7 = FUN_1801cf9b9(uVar1,local_58,local_50,&local_4c);
                  iVar5 = local_4c;
                  if (local_4c != 0) goto LAB_1801fe97f;
                  (*(code *)local_60[4])(lVar7,uVar3,0x10ea);
                  local_4c = (*(code *)param_2[0x4f])
                                       (param_2 + 0x46,iVar4,lVar7 + *(int *)(param_1 + 0x118),
                                        uVar3 - *(int *)(param_1 + 0x118));
                  FUN_1801c9b65(uVar1,lVar7);
                }
                iVar5 = local_4c;
                if (local_4c != 0) goto LAB_1801fe97f;
              }
              iVar9 = iVar9 + 1;
              pcVar6 = (char *)*param_2;
            } while (pcVar6 + 4 < (char *)param_2[2]);
          }
          if ((int)param_2[0x45] == 0) {
            *(int *)(param_2 + 0x45) = (int)uVar8;
          }
          goto LAB_1801fe901;
        }
      }
      else {
        if (param_2[0x51] != 0) {
          uVar8 = uVar10 & 0xffffffff;
          goto LAB_1801fe725;
        }
        uVar8 = FUN_1801cc006(uVar1,0x28,&local_4c);
        param_2[0x51] = uVar8;
        iVar5 = local_4c;
        if (local_4c == 0) {
          iVar5 = FUN_1801ca183(uVar8,uVar1);
          uVar8 = uVar10 & 0xffffffff;
          local_4c = iVar5;
          if (iVar5 == 0) goto LAB_1801fe725;
        }
      }
LAB_1801fe97f:
      *(int *)(param_2 + 3) = iVar5;
      goto LAB_1801fe901;
    }
  }
  *(undefined4 *)(param_2 + 3) = 3;
LAB_1801fe901:
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
  }
  return;
}

