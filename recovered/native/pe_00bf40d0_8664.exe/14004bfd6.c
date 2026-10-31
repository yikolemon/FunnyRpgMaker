/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14004bfd6 */

void FUN_14004bfd6(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  longlong lVar3;
  byte *pbVar4;
  byte *pbVar5;
  char *_Str2;
  int iVar6;
  bool bVar7;
  uint uVar8;
  int iVar9;
  undefined7 extraout_var;
  undefined8 *puVar10;
  int iVar11;
  longlong lVar12;
  int iVar13;
  ulonglong uVar14;
  byte *pbVar15;
  undefined1 auStack_98 [36];
  int local_74;
  int local_70;
  uint local_6c;
  longlong local_68;
  undefined8 *local_60;
  uint local_58;
  int local_54;
  undefined8 local_50;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStack_98;
  lVar12 = param_2[4];
  puVar10 = *(undefined8 **)(param_1 + 0x2a0);
  lVar3 = *param_2;
  pbVar4 = (byte *)param_2[2];
  uVar8 = (*(code *)param_2[9])(param_2);
  iVar11 = 3;
  iVar9 = iVar11;
  if (-1 < (int)uVar8) {
    uVar14 = (longlong)pbVar4 - lVar3 >> 3;
    if ((longlong)(ulonglong)uVar8 <= (longlong)uVar14) {
      uVar14 = (ulonglong)uVar8;
    }
    iVar13 = (int)uVar14;
    if ((iVar13 == 0) || ((int)param_2[3] != 0)) goto LAB_14004c638;
    local_60 = puVar10;
    if ((int)param_2[0x23] == 0) {
      iVar9 = (**(code **)*puVar10)(param_2 + 0x2f,iVar13 + 6,lVar12);
      if (((iVar9 != 0) ||
          (iVar9 = (**(code **)*puVar10)(param_2 + 0x24,iVar13 + 6,lVar12), iVar9 != 0)) ||
         (iVar9 = (**(code **)*puVar10)(param_2 + 0x3a,4,lVar12), local_54 = iVar9, iVar9 != 0))
      goto LAB_14004c635;
    }
    (*(code *)param_2[7])(param_2);
    pbVar15 = (byte *)*param_2;
    iVar9 = iVar11;
    if (pbVar15 < pbVar4) {
      local_70 = 0;
      local_6c = 0;
      local_74 = 0;
      local_68 = lVar12;
      do {
        if (pbVar15 + 3 < pbVar4) {
          bVar2 = pbVar15[3];
          if ((((ulonglong)bVar2 < 0x3f) &&
              ((0x5000832100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) ||
             ((bVar2 - 0x5b < 0x23 &&
              ((0x500000005U >> ((ulonglong)(bVar2 - 0x5b) & 0x3f) & 1) != 0)))) {
            if (*pbVar15 == 0x65) {
              if ((pbVar15[1] == 0x6e) && (pbVar15[2] == 100)) break;
            }
            else if ((*pbVar15 == 100) &&
                    (((pbVar15[1] == 0x65 && (pbVar15[2] == 0x66)) && (local_74 != 0)))) {
              *(int *)(param_2 + 0x23) = local_74;
              iVar11 = local_74;
              goto joined_r0x00014004c531;
            }
          }
        }
        (*(code *)param_2[8])(param_2);
        pbVar5 = (byte *)*param_2;
        iVar9 = iVar11;
        if (pbVar4 <= pbVar5) goto LAB_14004c635;
        if ((int)param_2[3] != 0) goto LAB_14004c638;
        if (*pbVar15 == 0x2f) {
          if (pbVar4 <= pbVar15 + 2) {
LAB_14004c501:
            local_54 = 3;
            iVar9 = local_54;
            goto LAB_14004c635;
          }
          bVar7 = FUN_14004b563(param_2,&local_58,&local_50,
                                *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x50) != 0);
          iVar6 = local_74;
          if ((int)CONCAT71(extraout_var,bVar7) == 0) goto LAB_14004c638;
          if ((int)param_2[0x23] == 0) {
            pbVar15 = pbVar15 + 1;
            uVar14 = (longlong)pbVar5 - (longlong)pbVar15;
            local_54 = (*(code *)param_2[0x2d])(param_2 + 0x24,local_74,pbVar15,(int)uVar14 + 1);
            iVar9 = local_54;
            if (local_54 != 0) goto LAB_14004c635;
            *(undefined1 *)
             (*(longlong *)(param_2[0x28] + (longlong)iVar6 * 8) + (uVar14 & 0xffffffff)) = 0;
            if (*pbVar15 == 0x2e) {
              iVar9 = strcmp(".notdef",*(char **)(param_2[0x28] + (longlong)iVar6 * 8));
              if (iVar9 == 0) {
                local_70 = iVar6;
              }
              local_6c = local_6c & 0xff;
              if (iVar9 == 0) {
                local_6c = 1;
              }
            }
            uVar8 = local_58;
            if (((int)*(uint *)(param_1 + 0x118) < 0) || (iVar13 + 5 <= iVar6)) {
              local_54 = (*(code *)param_2[0x38])
                                   (param_2 + 0x2f,iVar6,
                                    CONCAT44(local_50._4_4_,(undefined4)local_50),local_58);
            }
            else {
              if (local_58 <= *(uint *)(param_1 + 0x118)) goto LAB_14004c501;
              puVar10 = FUN_140021dbc(local_68,(undefined8 *)
                                               CONCAT44(local_50._4_4_,(undefined4)local_50),
                                      local_58,&local_54);
              iVar6 = local_74;
              iVar9 = local_54;
              if (local_54 != 0) goto LAB_14004c635;
              (*(code *)local_60[4])(puVar10,uVar8,0x10ea);
              local_54 = (*(code *)param_2[0x38])
                                   (param_2 + 0x2f,iVar6,
                                    (longlong)puVar10 + (longlong)*(int *)(param_1 + 0x118),
                                    uVar8 - *(int *)(param_1 + 0x118));
              FUN_14001c53d(local_68,(longlong)puVar10);
            }
            iVar9 = local_54;
            if (local_54 != 0) goto LAB_14004c635;
            local_74 = local_74 + 1;
          }
        }
        (*(code *)param_2[7])(param_2);
        pbVar15 = (byte *)*param_2;
      } while (pbVar15 < pbVar4);
      iVar9 = iVar11;
      if (local_74 != 0) {
        *(int *)(param_2 + 0x23) = local_74;
        iVar11 = local_74;
joined_r0x00014004c531:
        local_74 = iVar11;
        if ((char)local_6c == '\0') {
          uVar8 = (uint)local_50._4_4_ >> 8;
          local_50._4_4_ = CONCAT31((int3)uVar8,0xe);
          local_50._0_4_ = 0xde1f78b;
          iVar9 = (*(code *)param_2[0x43])
                            (param_2 + 0x3a,0,*(undefined8 *)param_2[0x28],
                             *(undefined4 *)param_2[0x29]);
          local_54 = iVar9;
          if (((iVar9 == 0) &&
              (iVar9 = (*(code *)param_2[0x43])
                                 (param_2 + 0x3a,1,*(undefined8 *)param_2[0x33],
                                  *(undefined4 *)param_2[0x34]), local_54 = iVar9, iVar9 == 0)) &&
             ((iVar9 = (*(code *)param_2[0x2d])(param_2 + 0x24,0,".notdef",8), local_54 = iVar9,
              iVar9 == 0 &&
              (((iVar9 = (*(code *)param_2[0x38])(param_2 + 0x2f,0,&local_50,5), local_54 = iVar9,
                iVar9 == 0 &&
                (iVar9 = (*(code *)param_2[0x2d])
                                   (param_2 + 0x24,iVar11,*(undefined8 *)param_2[0x3e],
                                    *(undefined4 *)param_2[0x3f]), local_54 = iVar9, iVar9 == 0)) &&
               (iVar9 = (*(code *)param_2[0x38])
                                  (param_2 + 0x2f,iVar11,*(undefined8 *)(param_2[0x3e] + 8),
                                   *(undefined4 *)(param_2[0x3f] + 4)), iVar9 == 0)))))) {
            *(int *)(param_2 + 0x23) = (int)param_2[0x23] + 1;
            goto LAB_14004c638;
          }
        }
        else {
          _Str2 = *(char **)param_2[0x28];
          iVar9 = strcmp(".notdef",_Str2);
          if (iVar9 == 0) goto LAB_14004c638;
          plVar1 = param_2 + 0x3a;
          iVar9 = (*(code *)param_2[0x43])(plVar1,0,_Str2,*(undefined4 *)param_2[0x29]);
          local_54 = iVar9;
          if ((iVar9 == 0) &&
             (iVar9 = (*(code *)param_2[0x43])
                                (plVar1,1,*(undefined8 *)param_2[0x33],*(undefined4 *)param_2[0x34])
             , local_54 = iVar9, iVar9 == 0)) {
            lVar12 = (longlong)local_70;
            iVar9 = (*(code *)param_2[0x43])
                              (plVar1,2,*(undefined8 *)(param_2[0x28] + lVar12 * 8),
                               *(undefined4 *)(param_2[0x29] + lVar12 * 4));
            local_54 = iVar9;
            if ((((iVar9 == 0) &&
                 ((iVar9 = (*(code *)param_2[0x43])
                                     (plVar1,3,*(undefined8 *)(param_2[0x33] + lVar12 * 8),
                                      *(undefined4 *)(param_2[0x34] + lVar12 * 4)), local_54 = iVar9
                  , iVar9 == 0 &&
                  (iVar9 = (*(code *)param_2[0x2d])
                                     (param_2 + 0x24,local_70,*(undefined8 *)param_2[0x3e],
                                      *(undefined4 *)param_2[0x3f]), local_54 = iVar9, iVar9 == 0)))
                 ) && (iVar9 = (*(code *)param_2[0x38])
                                         (param_2 + 0x2f,local_70,*(undefined8 *)(param_2[0x3e] + 8)
                                          ,*(undefined4 *)(param_2[0x3f] + 4)), local_54 = iVar9,
                      iVar9 == 0)) &&
               ((iVar9 = (*(code *)param_2[0x2d])
                                   (param_2 + 0x24,0,*(undefined8 *)(param_2[0x3e] + 0x10),
                                    *(undefined4 *)(param_2[0x3f] + 8)), local_54 = iVar9,
                iVar9 == 0 &&
                (iVar9 = (*(code *)param_2[0x38])
                                   (param_2 + 0x2f,0,*(undefined8 *)(param_2[0x3e] + 0x18),
                                    *(undefined4 *)(param_2[0x3f] + 0xc)), iVar9 == 0))))
            goto LAB_14004c638;
          }
        }
      }
    }
  }
LAB_14004c635:
  *(int *)(param_2 + 3) = iVar9;
LAB_14004c638:
  if (DAT_14012ea80 == (local_48 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_48 ^ (ulonglong)auStack_98);
}

