/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14005a05f */

void FUN_14005a05f(longlong param_1,longlong *param_2)

{
  byte bVar1;
  byte *pbVar2;
  undefined8 *puVar3;
  char *_Str2;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  undefined7 extraout_var;
  longlong lVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  byte *pbVar13;
  longlong lVar14;
  int local_48;
  
  pbVar2 = (byte *)param_2[2];
  lVar14 = param_2[4];
  puVar3 = *(undefined8 **)(param_1 + 0x2a0);
  (*(code *)param_2[7])(param_2);
  iVar11 = 3;
  iVar7 = iVar11;
  if ((byte *)*param_2 < pbVar2) {
    bVar1 = *(byte *)*param_2;
    if ((byte)(bVar1 - 0x30) < 10) {
      uVar6 = (*(code *)param_2[9])(param_2);
      *(uint *)(param_2 + 0x21) = uVar6;
      if ((int)param_2[3] != 0) {
        return;
      }
      if ((int)uVar6 < 0) goto LAB_14005a1a0;
      pbVar8 = (byte *)*param_2;
      lVar9 = (longlong)pbVar2 - (longlong)pbVar8 >> 2;
      if (lVar9 < (longlong)(ulonglong)uVar6) {
        *(int *)(param_2 + 0x21) = (int)lVar9;
      }
    }
    else {
      if (bVar1 != 0x3c) goto LAB_14005a1a0;
      (*(code *)param_2[8])(param_2);
      if ((int)param_2[3] != 0) {
        return;
      }
      (*(code *)param_2[7])(param_2);
      pbVar13 = (byte *)*param_2;
      pbVar8 = pbVar13;
      if (pbVar13 < pbVar2) {
        iVar12 = 0;
        do {
          if (*pbVar8 == 0x2f) {
            iVar12 = iVar12 + 1;
          }
          else if (*pbVar8 == 0x3e) {
            *(int *)(param_2 + 0x21) = iVar12;
            *param_2 = (longlong)pbVar13;
            pbVar8 = pbVar13;
            break;
          }
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) {
            return;
          }
          (*(code *)param_2[7])(param_2);
          pbVar8 = (byte *)*param_2;
        } while (pbVar8 < pbVar2);
      }
    }
    if ((((pbVar8 < pbVar2) && ((int)param_2[0x3b] == 0)) &&
        (iVar7 = (**(code **)*puVar3)(param_2 + 0x2d,(int)param_2[0x21],lVar14), iVar7 == 0)) &&
       ((iVar7 = (**(code **)*puVar3)(param_2 + 0x22,(int)param_2[0x21],lVar14), iVar7 == 0 &&
        (iVar7 = (**(code **)*puVar3)(param_2 + 0x38,4,lVar14), iVar7 == 0)))) {
      (*(code *)param_2[7])(param_2);
      pbVar13 = (byte *)*param_2;
      if (pbVar13 < pbVar2) {
        bVar4 = false;
        local_48 = 0;
        iVar12 = 0;
        do {
          if (*pbVar13 == 0x65) {
            if (((pbVar13 + 3 < pbVar2) && (pbVar13[1] == 0x6e)) &&
               ((pbVar13[2] == 100 &&
                (bVar5 = FUN_14005aa34(pbVar13[3]), (int)CONCAT71(extraout_var,bVar5) != 0))))
            break;
          }
          else if (*pbVar13 == 0x3e) break;
          (*(code *)param_2[8])(param_2);
          iVar7 = iVar11;
          if (pbVar2 <= (byte *)*param_2) goto LAB_14005a1a0;
          if ((int)param_2[3] != 0) {
            return;
          }
          bVar1 = *pbVar13;
          if ((bVar1 == 0x2f) || (bVar1 == 0x28)) {
            if (pbVar2 <= pbVar13 + (ulonglong)(bVar1 == 0x28) + 2) goto LAB_14005a1a0;
            pbVar13 = pbVar13 + 1;
            uVar6 = ((int)(byte *)*param_2 - (int)pbVar13) - (uint)(bVar1 == 0x28);
            iVar7 = (*(code *)param_2[0x2b])(param_2 + 0x22,iVar12,pbVar13,uVar6 + 1);
            if (iVar7 != 0) goto LAB_14005a1a0;
            lVar14 = (longlong)iVar12;
            *(undefined1 *)(*(longlong *)(param_2[0x26] + lVar14 * 8) + (ulonglong)uVar6) = 0;
            if ((*pbVar13 == 0x2e) &&
               (iVar7 = strcmp(".notdef",*(char **)(param_2[0x26] + lVar14 * 8)), iVar7 == 0)) {
              bVar4 = true;
              local_48 = iVar12;
            }
            (*(code *)param_2[7])(param_2);
            if (bVar1 == 0x28) {
              (*(code *)param_2[8])(param_2);
            }
            lVar9 = *param_2;
            (*(code *)param_2[9])(param_2);
            iVar7 = iVar11;
            if (pbVar2 <= (byte *)*param_2) goto LAB_14005a1a0;
            uVar10 = *param_2 - lVar9;
            iVar7 = (*(code *)param_2[0x36])(param_2 + 0x2d,iVar12,lVar9,(int)uVar10 + 1);
            if (iVar7 != 0) goto LAB_14005a1a0;
            *(undefined1 *)(*(longlong *)(param_2[0x31] + lVar14 * 8) + (uVar10 & 0xffffffff)) = 0;
            iVar12 = iVar12 + 1;
            if ((int)param_2[0x21] <= iVar12) break;
          }
          (*(code *)param_2[7])(param_2);
          pbVar13 = (byte *)*param_2;
        } while (pbVar13 < pbVar2);
        *(int *)(param_2 + 0x21) = iVar12;
        iVar7 = iVar11;
        if (bVar4) {
          _Str2 = *(char **)param_2[0x26];
          iVar7 = strcmp(".notdef",_Str2);
          if (iVar7 == 0) {
            return;
          }
          iVar7 = (*(code *)param_2[0x41])(param_2 + 0x38,0,_Str2,*(undefined4 *)param_2[0x27]);
          if ((iVar7 == 0) &&
             (iVar7 = (*(code *)param_2[0x41])
                                (param_2 + 0x38,1,*(undefined8 *)param_2[0x31],
                                 *(undefined4 *)param_2[0x32]), iVar7 == 0)) {
            lVar14 = (longlong)local_48;
            iVar7 = (*(code *)param_2[0x41])
                              (param_2 + 0x38,2,*(undefined8 *)(param_2[0x26] + lVar14 * 8),
                               *(undefined4 *)(param_2[0x27] + lVar14 * 4));
            if ((iVar7 == 0) &&
               ((((iVar7 = (*(code *)param_2[0x41])
                                     (param_2 + 0x38,3,*(undefined8 *)(param_2[0x31] + lVar14 * 8),
                                      *(undefined4 *)(param_2[0x32] + lVar14 * 4)), iVar7 == 0 &&
                  (iVar7 = (*(code *)param_2[0x2b])
                                     (param_2 + 0x22,local_48,*(undefined8 *)param_2[0x3c],
                                      *(undefined4 *)param_2[0x3d]), iVar7 == 0)) &&
                 (iVar7 = (*(code *)param_2[0x36])
                                    (param_2 + 0x2d,local_48,*(undefined8 *)(param_2[0x3c] + 8),
                                     *(undefined4 *)(param_2[0x3d] + 4)), iVar7 == 0)) &&
                ((iVar7 = (*(code *)param_2[0x2b])
                                    (param_2 + 0x22,0,*(undefined8 *)(param_2[0x3c] + 0x10),
                                     *(undefined4 *)(param_2[0x3d] + 8)), iVar7 == 0 &&
                 (iVar7 = (*(code *)param_2[0x36])
                                    (param_2 + 0x2d,0,*(undefined8 *)(param_2[0x3c] + 0x18),
                                     *(undefined4 *)(param_2[0x3d] + 0xc)), iVar7 == 0)))))) {
              return;
            }
          }
        }
      }
      else {
        *(undefined4 *)(param_2 + 0x21) = 0;
        iVar7 = iVar11;
      }
    }
  }
LAB_14005a1a0:
  *(int *)(param_2 + 3) = iVar7;
  return;
}

