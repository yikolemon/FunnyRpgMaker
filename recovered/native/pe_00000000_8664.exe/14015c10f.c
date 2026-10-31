/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015c10f */

void FUN_14015c10f(longlong param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  undefined8 *puVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  longlong lVar8;
  ulonglong uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  longlong lVar13;
  int local_48;
  
  pcVar2 = (char *)param_2[2];
  lVar13 = param_2[4];
  puVar3 = *(undefined8 **)(param_1 + 0x2a0);
  (*(code *)param_2[7])(param_2);
  iVar10 = 3;
  iVar6 = iVar10;
  if ((char *)*param_2 < pcVar2) {
    cVar1 = *(char *)*param_2;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar5 = (*(code *)param_2[9])(param_2);
      *(uint *)(param_2 + 0x21) = uVar5;
      if ((int)param_2[3] != 0) {
        return;
      }
      if ((int)uVar5 < 0) goto LAB_14015c250;
      pcVar7 = (char *)*param_2;
      lVar8 = (longlong)pcVar2 - (longlong)pcVar7 >> 2;
      if (lVar8 < (longlong)(ulonglong)uVar5) {
        *(int *)(param_2 + 0x21) = (int)lVar8;
      }
    }
    else {
      if (cVar1 != '<') goto LAB_14015c250;
      (*(code *)param_2[8])(param_2);
      if ((int)param_2[3] != 0) {
        return;
      }
      (*(code *)param_2[7])(param_2);
      pcVar12 = (char *)*param_2;
      pcVar7 = pcVar12;
      if (pcVar12 < pcVar2) {
        iVar11 = 0;
        do {
          if (*pcVar7 == '/') {
            iVar11 = iVar11 + 1;
          }
          else if (*pcVar7 == '>') {
            *(int *)(param_2 + 0x21) = iVar11;
            *param_2 = (longlong)pcVar12;
            pcVar7 = pcVar12;
            break;
          }
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) {
            return;
          }
          (*(code *)param_2[7])(param_2);
          pcVar7 = (char *)*param_2;
        } while (pcVar7 < pcVar2);
      }
    }
    if ((((pcVar7 < pcVar2) && ((int)param_2[0x3b] == 0)) &&
        (iVar6 = (**(code **)*puVar3)(param_2 + 0x2d,(int)param_2[0x21],lVar13), iVar6 == 0)) &&
       ((iVar6 = (**(code **)*puVar3)(param_2 + 0x22,(int)param_2[0x21],lVar13), iVar6 == 0 &&
        (iVar6 = (**(code **)*puVar3)(param_2 + 0x38,4,lVar13), iVar6 == 0)))) {
      (*(code *)param_2[7])(param_2);
      pcVar12 = (char *)*param_2;
      if (pcVar12 < pcVar2) {
        bVar4 = false;
        local_48 = 0;
        iVar11 = 0;
        do {
          if (*pcVar12 == 'e') {
            if (((pcVar12 + 3 < pcVar2) && (pcVar12[1] == 'n')) &&
               ((pcVar12[2] == 'd' && (iVar6 = FUN_14015cae4(pcVar12[3]), iVar6 != 0)))) break;
          }
          else if (*pcVar12 == '>') break;
          (*(code *)param_2[8])(param_2);
          iVar6 = iVar10;
          if (pcVar2 <= (char *)*param_2) goto LAB_14015c250;
          if ((int)param_2[3] != 0) {
            return;
          }
          cVar1 = *pcVar12;
          if ((cVar1 == '/') || (cVar1 == '(')) {
            if (pcVar2 <= pcVar12 + (ulonglong)(cVar1 == '(') + 2) goto LAB_14015c250;
            pcVar12 = pcVar12 + 1;
            uVar5 = ((int)(char *)*param_2 - (int)pcVar12) - (uint)(cVar1 == '(');
            iVar6 = (*(code *)param_2[0x2b])(param_2 + 0x22,iVar11,pcVar12,uVar5 + 1);
            if (iVar6 != 0) goto LAB_14015c250;
            lVar13 = (longlong)iVar11;
            *(undefined1 *)(*(longlong *)(param_2[0x26] + lVar13 * 8) + (ulonglong)uVar5) = 0;
            if ((*pcVar12 == '.') &&
               (iVar6 = strcmp(".notdef",*(char **)(param_2[0x26] + lVar13 * 8)), iVar6 == 0)) {
              bVar4 = true;
              local_48 = iVar11;
            }
            (*(code *)param_2[7])(param_2);
            if (cVar1 == '(') {
              (*(code *)param_2[8])(param_2);
            }
            lVar8 = *param_2;
            (*(code *)param_2[9])(param_2);
            iVar6 = iVar10;
            if (pcVar2 <= (char *)*param_2) goto LAB_14015c250;
            uVar9 = *param_2 - lVar8;
            iVar6 = (*(code *)param_2[0x36])(param_2 + 0x2d,iVar11,lVar8,(int)uVar9 + 1);
            if (iVar6 != 0) goto LAB_14015c250;
            *(undefined1 *)(*(longlong *)(param_2[0x31] + lVar13 * 8) + (uVar9 & 0xffffffff)) = 0;
            iVar11 = iVar11 + 1;
            if ((int)param_2[0x21] <= iVar11) break;
          }
          (*(code *)param_2[7])(param_2);
          pcVar12 = (char *)*param_2;
        } while (pcVar12 < pcVar2);
        *(int *)(param_2 + 0x21) = iVar11;
        iVar6 = iVar10;
        if (bVar4) {
          pcVar2 = *(char **)param_2[0x26];
          iVar6 = strcmp(".notdef",pcVar2);
          if (iVar6 == 0) {
            return;
          }
          iVar6 = (*(code *)param_2[0x41])(param_2 + 0x38,0,pcVar2,*(undefined4 *)param_2[0x27]);
          if ((iVar6 == 0) &&
             (iVar6 = (*(code *)param_2[0x41])
                                (param_2 + 0x38,1,*(undefined8 *)param_2[0x31],
                                 *(undefined4 *)param_2[0x32]), iVar6 == 0)) {
            lVar13 = (longlong)local_48;
            iVar6 = (*(code *)param_2[0x41])
                              (param_2 + 0x38,2,*(undefined8 *)(param_2[0x26] + lVar13 * 8),
                               *(undefined4 *)(param_2[0x27] + lVar13 * 4));
            if ((iVar6 == 0) &&
               ((((iVar6 = (*(code *)param_2[0x41])
                                     (param_2 + 0x38,3,*(undefined8 *)(param_2[0x31] + lVar13 * 8),
                                      *(undefined4 *)(param_2[0x32] + lVar13 * 4)), iVar6 == 0 &&
                  (iVar6 = (*(code *)param_2[0x2b])
                                     (param_2 + 0x22,local_48,*(undefined8 *)param_2[0x3c],
                                      *(undefined4 *)param_2[0x3d]), iVar6 == 0)) &&
                 (iVar6 = (*(code *)param_2[0x36])
                                    (param_2 + 0x2d,local_48,*(undefined8 *)(param_2[0x3c] + 8),
                                     *(undefined4 *)(param_2[0x3d] + 4)), iVar6 == 0)) &&
                ((iVar6 = (*(code *)param_2[0x2b])
                                    (param_2 + 0x22,0,*(undefined8 *)(param_2[0x3c] + 0x10),
                                     *(undefined4 *)(param_2[0x3d] + 8)), iVar6 == 0 &&
                 (iVar6 = (*(code *)param_2[0x36])
                                    (param_2 + 0x2d,0,*(undefined8 *)(param_2[0x3c] + 0x18),
                                     *(undefined4 *)(param_2[0x3d] + 0xc)), iVar6 == 0)))))) {
              return;
            }
          }
        }
      }
      else {
        *(undefined4 *)(param_2 + 0x21) = 0;
        iVar6 = iVar10;
      }
    }
  }
LAB_14015c250:
  *(int *)(param_2 + 3) = iVar6;
  return;
}

