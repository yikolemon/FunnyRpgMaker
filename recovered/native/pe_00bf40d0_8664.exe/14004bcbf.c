/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004bcbf */

void FUN_14004bcbf(longlong param_1,ulonglong *param_2)

{
  ulonglong uVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  undefined7 extraout_var;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  undefined1 auStack_88 [40];
  undefined8 *local_60;
  undefined8 *local_58;
  uint local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  uVar1 = param_2[4];
  puVar6 = *(undefined8 **)(param_1 + 0x2a0);
  (*(code *)param_2[7])(param_2);
  if (((char *)*param_2 < (char *)param_2[2]) && (*(char *)*param_2 == '[')) {
    (*(code *)param_2[8])(param_2);
    (*(code *)param_2[7])(param_2);
    if (((char *)*param_2 < (char *)param_2[2]) && (*(char *)*param_2 == ']')) goto LAB_14004bf3b;
  }
  else {
    uVar3 = (*(code *)param_2[9])(param_2);
    if (-1 < (int)uVar3) {
      uVar8 = (ulonglong)uVar3;
      if ((param_2[2] < *param_2) ||
         (uVar10 = (longlong)(param_2[2] - *param_2) >> 3, (longlong)uVar8 <= (longlong)uVar10)) {
LAB_14004bd5f:
        (*(code *)param_2[8])(param_2);
        if ((int)param_2[3] != 0) goto LAB_14004bf3b;
        (*(code *)param_2[7])(param_2);
        if (((int)param_2[0x45] != 0) ||
           (iVar4 = (**(code **)*puVar6)(param_2 + 0x46,uVar8,uVar1), local_4c = iVar4, iVar4 == 0))
        {
          pcVar5 = (char *)*param_2;
          local_60 = puVar6;
          if (pcVar5 + 4 < (char *)param_2[2]) {
            uVar10 = 0;
            do {
              if (((*pcVar5 != 'd') || (pcVar5[1] != 'u')) || (pcVar5[2] != 'p')) break;
              (*(code *)param_2[8])(param_2);
              uVar3 = (*(code *)param_2[9])(param_2);
              bVar2 = FUN_14004b563((longlong *)param_2,&local_50,(longlong *)&local_58,
                                    *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x50) != 0);
              if (((int)CONCAT71(extraout_var,bVar2) == 0) ||
                 ((*(code *)param_2[8])(param_2), (int)param_2[3] != 0)) goto LAB_14004bf3b;
              (*(code *)param_2[7])(param_2);
              pcVar5 = (char *)*param_2;
              if (((pcVar5 + 4 < (char *)param_2[2]) && ((*pcVar5 == 'p' && (pcVar5[1] == 'u')))) &&
                 (pcVar5[2] == 't')) {
                (*(code *)param_2[8])(param_2);
                (*(code *)param_2[7])(param_2);
              }
              uVar9 = (ulonglong)uVar3;
              if ((uint *)param_2[0x51] != (uint *)0x0) {
                FUN_14001cca5(uVar3,uVar10,(uint *)param_2[0x51],uVar1);
                uVar9 = uVar10;
              }
              uVar3 = local_50;
              if ((int)param_2[0x45] == 0) {
                if ((int)*(uint *)(param_1 + 0x118) < 0) {
                  local_4c = (*(code *)param_2[0x4f])(param_2 + 0x46,uVar9,local_58,local_50);
                }
                else {
                  if (local_50 < *(uint *)(param_1 + 0x118)) {
                    iVar4 = 3;
                    goto LAB_14004bfb9;
                  }
                  puVar6 = FUN_140021dbc(uVar1,local_58,local_50,&local_4c);
                  iVar4 = local_4c;
                  if (local_4c != 0) goto LAB_14004bfb9;
                  (*(code *)local_60[4])(puVar6,uVar3,0x10ea);
                  local_4c = (*(code *)param_2[0x4f])
                                       (param_2 + 0x46,uVar9,
                                        (longlong)puVar6 + (longlong)*(int *)(param_1 + 0x118),
                                        uVar3 - *(int *)(param_1 + 0x118));
                  FUN_14001c53d(uVar1,(longlong)puVar6);
                }
                iVar4 = local_4c;
                if (local_4c != 0) goto LAB_14004bfb9;
              }
              uVar10 = (ulonglong)((int)uVar10 + 1);
              pcVar5 = (char *)*param_2;
            } while (pcVar5 + 4 < (char *)param_2[2]);
          }
          if ((int)param_2[0x45] == 0) {
            *(int *)(param_2 + 0x45) = (int)uVar8;
          }
          goto LAB_14004bf3b;
        }
      }
      else {
        if (param_2[0x51] != 0) {
          uVar8 = uVar10 & 0xffffffff;
          goto LAB_14004bd5f;
        }
        puVar7 = (undefined8 *)FUN_14001e961(uVar1,0x28,&local_4c);
        param_2[0x51] = (ulonglong)puVar7;
        iVar4 = local_4c;
        if (local_4c == 0) {
          iVar4 = FUN_14001cb5b(puVar7,uVar1);
          uVar8 = uVar10 & 0xffffffff;
          local_4c = iVar4;
          if (iVar4 == 0) goto LAB_14004bd5f;
        }
      }
LAB_14004bfb9:
      *(int *)(param_2 + 3) = iVar4;
      goto LAB_14004bf3b;
    }
  }
  *(undefined4 *)(param_2 + 3) = 3;
LAB_14004bf3b:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStack_88);
  }
  return;
}

