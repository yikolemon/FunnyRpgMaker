/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14015b8ae */

ulonglong FUN_14015b8ae(undefined8 param_1,ulonglong *param_2,ulonglong param_3,int param_4)

{
  char *_Str1;
  int iVar1;
  int iVar2;
  ulonglong uVar3;
  char *pcVar4;
  int *piVar5;
  char *pcVar6;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  undefined1 local_60 [16];
  int local_50;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  *param_2 = param_3;
  pcVar6 = (char *)((longlong)param_4 + param_3);
  param_2[2] = (ulonglong)pcVar6;
  *(undefined4 *)(param_2 + 3) = 0;
  local_68 = param_1;
  (*(code *)param_2[7])(param_2);
  pcVar4 = (char *)*param_2;
  while (pcVar4 < pcVar6) {
    if (pcVar4 + 0x19 < pcVar6 && *pcVar4 == 'F') {
      iVar1 = strncmp(pcVar4,"FontDirectory",0xd);
      if (iVar1 == 0) {
        (*(code *)param_2[8])(param_2);
        (*(code *)param_2[7])(param_2);
        pcVar4 = (char *)*param_2;
        _Str1 = pcVar4;
        while (_Str1 < pcVar6) {
          if ((_Str1 + 5 < pcVar6 && *_Str1 == 'k') &&
             (iVar1 = strncmp(_Str1,"known",5), iVar1 == 0)) {
            (*(code *)param_2[8])(param_2);
            (*(code *)param_2[0xe])(param_2,local_60);
            if (local_50 == 3) {
              pcVar4 = (char *)*param_2;
            }
            break;
          }
          (*(code *)param_2[8])(param_2);
          if ((int)param_2[3] != 0) goto LAB_14015ba86;
          (*(code *)param_2[7])(param_2);
          _Str1 = (char *)*param_2;
        }
        *param_2 = (ulonglong)pcVar4;
      }
      else {
LAB_14015ba2f:
        (*(code *)param_2[8])(param_2);
        if ((int)param_2[3] != 0) break;
      }
    }
    else {
      if (pcVar6 <= pcVar4 + 2 || *pcVar4 != '/') goto LAB_14015ba2f;
      pcVar4 = pcVar4 + 1;
      *param_2 = (ulonglong)pcVar4;
      (*(code *)param_2[8])(param_2);
      if ((int)param_2[3] != 0) break;
      uVar3 = (longlong)*param_2 - (longlong)pcVar4;
      iVar1 = (int)uVar3;
      if ((char *)*param_2 < pcVar6 && iVar1 - 1U < 0x15) {
        iVar2 = 7;
        piVar5 = (int *)&DAT_140e9f6f0;
        do {
          if (*(void **)(piVar5 + 2) != (void *)0x0) {
            if ((iVar2 == iVar1) &&
               (iVar2 = memcmp(pcVar4,*(void **)(piVar5 + 2),uVar3 & 0xffffffff), iVar2 == 0)) {
              uVar3 = FUN_14015bb25(local_68,param_2,piVar5);
              *(int *)(param_2 + 3) = (int)uVar3;
              if ((int)uVar3 != 0) goto LAB_14015ba89;
              break;
            }
            piVar5 = piVar5 + 0xe;
          }
          iVar2 = *piVar5;
        } while (iVar2 != 0);
      }
    }
    (*(code *)param_2[7])(param_2);
    pcVar4 = (char *)*param_2;
  }
LAB_14015ba86:
  uVar3 = (ulonglong)(uint)param_2[3];
LAB_14015ba89:
  if (DAT_140f17b40 == (local_48 ^ (ulonglong)auStack_88)) {
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
}

