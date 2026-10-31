/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015bd1b */

void FUN_14015bd1b(longlong param_1,ulonglong *param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined8 *puVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  undefined8 uVar8;
  char *pcVar9;
  int iVar10;
  ulonglong uVar11;
  char *_Str1;
  bool bVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int *local_60;
  int local_54;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  pcVar3 = (char *)param_2[2];
  puVar4 = *(undefined8 **)(param_1 + 0x2a0);
  (*(code *)param_2[7])(param_2);
  _Str1 = (char *)*param_2;
  if (_Str1 < pcVar3) {
    cVar1 = *_Str1;
    if (cVar1 != '[' && 9 < (byte)(cVar1 - 0x30U)) {
      if ((_Str1 + 0x11 < pcVar3) && (iVar6 = strncmp(_Str1,"StandardEncoding",0x10), iVar6 == 0)) {
        *(undefined4 *)(param_1 + 0x1e0) = 2;
      }
      else if ((_Str1 + 0xf < pcVar3) && (iVar6 = strncmp(_Str1,"ExpertEncoding",0xe), iVar6 == 0))
      {
        *(undefined4 *)(param_1 + 0x1e0) = 4;
      }
      else if ((_Str1 + 0x12 < pcVar3) &&
              (iVar6 = strncmp(_Str1,"ISOLatin1Encoding",0x11), iVar6 == 0)) {
        *(undefined4 *)(param_1 + 0x1e0) = 3;
      }
      else {
        *(undefined4 *)(param_2 + 3) = 0xa2;
      }
      goto LAB_14015be24;
    }
    uVar11 = param_2[4];
    if (cVar1 == '[') {
      *param_2 = (ulonglong)(_Str1 + 1);
      iVar6 = 0x100;
    }
    else {
      iVar6 = (*(code *)param_2[9])(param_2);
      if (0x100 < iVar6) goto LAB_14015be1d;
    }
    (*(code *)param_2[7])(param_2);
    if ((char *)*param_2 < pcVar3) {
      if (*(longlong *)(param_1 + 0x1f8) != 0) {
        FUN_140128b39(uVar11);
        *(undefined8 *)(param_1 + 0x1f8) = 0;
        FUN_140128b39(uVar11,*(undefined8 *)(param_1 + 0x200));
        *(undefined8 *)(param_1 + 0x200) = 0;
        if ((code *)param_2[0x20] != (code *)0x0) {
          (*(code *)param_2[0x20])(param_2 + 0x16);
        }
      }
      *(int *)(param_1 + 0x1e8) = iVar6;
      *(int *)(param_2 + 0x15) = iVar6;
      local_68 = 0;
      local_60 = &local_4c;
      local_50 = iVar6;
      uVar8 = FUN_14012b8aa(uVar11,2,0);
      *(undefined8 *)(param_1 + 0x1f8) = uVar8;
      if (local_4c == 0) {
        local_68 = 0;
        local_60 = &local_4c;
        uVar8 = FUN_14012b8aa(uVar11,8,0,local_50);
        *(undefined8 *)(param_1 + 0x200) = uVar8;
        if ((local_4c == 0) &&
           (local_4c = (**(code **)*puVar4)(param_2 + 0x16,local_50,uVar11), iVar6 = local_50,
           local_4c == 0)) {
          if (0 < local_50) {
            iVar10 = 0;
            do {
              (*(code *)param_2[0x1f])(param_2 + 0x16,iVar10,".notdef",8);
              iVar10 = iVar10 + 1;
            } while (iVar6 != iVar10);
          }
          (*(code *)param_2[7])(param_2);
          if ((char *)*param_2 < pcVar3) {
            local_54 = 0;
            pcVar5 = (char *)*param_2;
            do {
              pcVar9 = pcVar5;
              cVar2 = *pcVar9;
              if (cVar2 == 'd') {
                _Str1 = pcVar9 + 3;
                if ((((_Str1 < pcVar3) && (pcVar9[1] == 'e')) && (pcVar9[2] == 'f')) &&
                   (iVar10 = FUN_14015cae4(*_Str1), iVar10 != 0)) break;
              }
              else if (cVar2 == ']') {
                _Str1 = pcVar9 + 1;
                break;
              }
              if (cVar1 == '[' || (byte)(cVar2 - 0x30U) < 10) {
                iVar10 = local_54;
                if (cVar1 != '[') {
                  iVar10 = (*(code *)param_2[9])(param_2);
                  (*(code *)param_2[7])(param_2);
                  bVar12 = pcVar9 != (char *)*param_2;
                  pcVar9 = (char *)*param_2;
                  if (bVar12) goto LAB_14015c041;
LAB_14015c0dd:
                  *(undefined4 *)(param_2 + 3) = 2;
                  goto LAB_14015be24;
                }
LAB_14015c041:
                if ((pcVar9 + 2 < pcVar3) && (local_54 < iVar6 && *pcVar9 == '/')) {
                  pcVar9 = pcVar9 + 1;
                  *param_2 = (ulonglong)pcVar9;
                  (*(code *)param_2[8])(param_2);
                  if ((pcVar3 <= (char *)*param_2) || ((int)param_2[3] != 0)) goto LAB_14015be24;
                  uVar11 = (longlong)*param_2 - (longlong)pcVar9;
                  iVar7 = (*(code *)param_2[0x1f])(param_2 + 0x16,iVar10,pcVar9,(int)uVar11 + 1);
                  *(int *)(param_2 + 3) = iVar7;
                  if (iVar7 != 0) goto LAB_14015be24;
                  *(undefined1 *)
                   (*(longlong *)(param_2[0x1a] + (longlong)iVar10 * 8) + (uVar11 & 0xffffffff)) = 0
                  ;
                  local_54 = local_54 + 1;
                }
                else if (cVar1 == '[') goto LAB_14015c0dd;
              }
              else {
                (*(code *)param_2[8])(param_2);
                if ((int)param_2[3] != 0) goto LAB_14015be24;
              }
              (*(code *)param_2[7])(param_2);
              pcVar5 = (char *)*param_2;
              _Str1 = pcVar9;
            } while ((char *)*param_2 < pcVar3);
          }
          *(undefined4 *)(param_1 + 0x1e0) = 1;
          *param_2 = (ulonglong)_Str1;
          goto LAB_14015be24;
        }
      }
      *(int *)(param_2 + 3) = local_4c;
    }
  }
  else {
LAB_14015be1d:
    *(undefined4 *)(param_2 + 3) = 3;
  }
LAB_14015be24:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
  }
  return;
}

