/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014e088 */

void FUN_14014e088(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  undefined8 *puVar3;
  longlong lVar4;
  byte *pbVar5;
  byte *pbVar6;
  char *_Str2;
  int iVar7;
  uint uVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  byte *pbVar14;
  undefined1 auStack_98 [36];
  int local_74;
  int local_70;
  uint local_6c;
  longlong local_68;
  undefined8 *local_60;
  uint local_58;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  lVar10 = param_2[4];
  puVar3 = *(undefined8 **)(param_1 + 0x2a0);
  lVar4 = *param_2;
  pbVar5 = (byte *)param_2[2];
  uVar8 = (*(code *)param_2[9])(param_2);
  iVar11 = 3;
  iVar9 = iVar11;
  if (-1 < (int)uVar8) {
    uVar13 = (longlong)pbVar5 - lVar4 >> 3;
    if ((longlong)(ulonglong)uVar8 <= (longlong)uVar13) {
      uVar13 = (ulonglong)uVar8;
    }
    iVar12 = (int)uVar13;
    if ((iVar12 == 0) || ((int)param_2[3] != 0)) goto LAB_14014e6ea;
    local_60 = puVar3;
    if ((int)param_2[0x23] == 0) {
      iVar9 = (**(code **)*puVar3)(param_2 + 0x2f,iVar12 + 6,lVar10);
      if (((iVar9 != 0) ||
          (iVar9 = (**(code **)*puVar3)(param_2 + 0x24,iVar12 + 6,lVar10), iVar9 != 0)) ||
         (iVar9 = (**(code **)*puVar3)(param_2 + 0x3a,4,lVar10), local_54 = iVar9, iVar9 != 0))
      goto LAB_14014e6e7;
    }
    (*(code *)param_2[7])(param_2);
    pbVar14 = (byte *)*param_2;
    iVar9 = iVar11;
    if (pbVar14 < pbVar5) {
      local_70 = 0;
      local_6c = 0;
      local_74 = 0;
      local_68 = lVar10;
      do {
        if (pbVar14 + 3 < pbVar5) {
          bVar2 = pbVar14[3];
          if ((((ulonglong)bVar2 < 0x3f) &&
              ((0x5000832100003601U >> ((ulonglong)bVar2 & 0x3f) & 1) != 0)) ||
             ((bVar2 - 0x5b < 0x23 &&
              ((0x500000005U >> ((ulonglong)(bVar2 - 0x5b) & 0x3f) & 1) != 0)))) {
            if (*pbVar14 == 0x65) {
              if ((pbVar14[1] == 0x6e) && (pbVar14[2] == 100)) break;
            }
            else if ((*pbVar14 == 100) &&
                    (((pbVar14[1] == 0x65 && (pbVar14[2] == 0x66)) && (local_74 != 0)))) {
              *(int *)(param_2 + 0x23) = local_74;
              iVar11 = local_74;
              goto joined_r0x00014014e5e3;
            }
          }
        }
        (*(code *)param_2[8])(param_2);
        pbVar6 = (byte *)*param_2;
        iVar9 = iVar11;
        if (pbVar5 <= pbVar6) goto LAB_14014e6e7;
        if ((int)param_2[3] != 0) goto LAB_14014e6ea;
        if (*pbVar14 == 0x2f) {
          if (pbVar5 <= pbVar14 + 2) {
LAB_14014e5b3:
            local_54 = 3;
            iVar9 = local_54;
            goto LAB_14014e6e7;
          }
          iVar9 = FUN_14014d615(param_2,&local_58,&local_50,
                                *(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x50) != 0);
          iVar7 = local_74;
          if (iVar9 == 0) goto LAB_14014e6ea;
          if ((int)param_2[0x23] == 0) {
            pbVar14 = pbVar14 + 1;
            uVar13 = (longlong)pbVar6 - (longlong)pbVar14;
            local_54 = (*(code *)param_2[0x2d])(param_2 + 0x24,local_74,pbVar14,(int)uVar13 + 1);
            iVar9 = local_54;
            if (local_54 != 0) goto LAB_14014e6e7;
            *(undefined1 *)
             (*(longlong *)(param_2[0x28] + (longlong)iVar7 * 8) + (uVar13 & 0xffffffff)) = 0;
            if (*pbVar14 == 0x2e) {
              iVar9 = strcmp(".notdef",*(char **)(param_2[0x28] + (longlong)iVar7 * 8));
              if (iVar9 == 0) {
                local_70 = iVar7;
              }
              local_6c = local_6c & 0xff;
              if (iVar9 == 0) {
                local_6c = 1;
              }
            }
            uVar8 = local_58;
            if (((int)*(uint *)(param_1 + 0x118) < 0) || (iVar12 + 5 <= iVar7)) {
              local_54 = (*(code *)param_2[0x38])
                                   (param_2 + 0x2f,iVar7,CONCAT44(uStack_4c,local_50),local_58);
            }
            else {
              if (local_58 <= *(uint *)(param_1 + 0x118)) goto LAB_14014e5b3;
              lVar10 = FUN_14012e98d(local_68,CONCAT44(uStack_4c,local_50),local_58,&local_54);
              iVar7 = local_74;
              iVar9 = local_54;
              if (local_54 != 0) goto LAB_14014e6e7;
              (*(code *)local_60[4])(lVar10,uVar8,0x10ea);
              local_54 = (*(code *)param_2[0x38])
                                   (param_2 + 0x2f,iVar7,lVar10 + *(int *)(param_1 + 0x118),
                                    uVar8 - *(int *)(param_1 + 0x118));
              FUN_140128b39(local_68,lVar10);
            }
            iVar9 = local_54;
            if (local_54 != 0) goto LAB_14014e6e7;
            local_74 = local_74 + 1;
          }
        }
        (*(code *)param_2[7])(param_2);
        pbVar14 = (byte *)*param_2;
      } while (pbVar14 < pbVar5);
      iVar9 = iVar11;
      if (local_74 != 0) {
        *(int *)(param_2 + 0x23) = local_74;
        iVar11 = local_74;
joined_r0x00014014e5e3:
        local_74 = iVar11;
        if ((char)local_6c == '\0') {
          uVar8 = (uint)uStack_4c >> 8;
          uStack_4c = CONCAT31((int3)uVar8,0xe);
          local_50 = 0xde1f78b;
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
            goto LAB_14014e6ea;
          }
        }
        else {
          _Str2 = *(char **)param_2[0x28];
          iVar9 = strcmp(".notdef",_Str2);
          if (iVar9 == 0) goto LAB_14014e6ea;
          plVar1 = param_2 + 0x3a;
          iVar9 = (*(code *)param_2[0x43])(plVar1,0,_Str2,*(undefined4 *)param_2[0x29]);
          local_54 = iVar9;
          if ((iVar9 == 0) &&
             (iVar9 = (*(code *)param_2[0x43])
                                (plVar1,1,*(undefined8 *)param_2[0x33],*(undefined4 *)param_2[0x34])
             , local_54 = iVar9, iVar9 == 0)) {
            lVar10 = (longlong)local_70;
            iVar9 = (*(code *)param_2[0x43])
                              (plVar1,2,*(undefined8 *)(param_2[0x28] + lVar10 * 8),
                               *(undefined4 *)(param_2[0x29] + lVar10 * 4));
            local_54 = iVar9;
            if ((((iVar9 == 0) &&
                 ((iVar9 = (*(code *)param_2[0x43])
                                     (plVar1,3,*(undefined8 *)(param_2[0x33] + lVar10 * 8),
                                      *(undefined4 *)(param_2[0x34] + lVar10 * 4)), local_54 = iVar9
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
            goto LAB_14014e6ea;
          }
        }
      }
    }
  }
LAB_14014e6e7:
  *(int *)(param_2 + 3) = iVar9;
LAB_14014e6ea:
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_98)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_98);
}

