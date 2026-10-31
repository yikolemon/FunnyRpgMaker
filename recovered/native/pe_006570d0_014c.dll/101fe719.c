/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101fe719 */

uint __fastcall FUN_101fe719(undefined4 param_1,uint *param_2,uint param_3,int param_4)

{
  int iVar1;
  char *_Str1;
  uint uVar2;
  uint *puVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char *apcStack_28 [2];
  undefined1 auStack_20 [8];
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)apcStack_28;
  *param_2 = param_3;
  pcVar5 = (char *)(param_3 + param_4);
  param_2[2] = (uint)pcVar5;
  param_2[3] = 0;
  (*(code *)param_2[7])(param_2);
  pcVar4 = (char *)*param_2;
  apcStack_28[0] = pcVar5;
  if (pcVar4 < pcVar5) {
    do {
      pcVar5 = apcStack_28[0];
      if (pcVar4 + 0x19 < apcStack_28[0] && *pcVar4 == 'F') {
        iVar1 = _strncmp(pcVar4,"FontDirectory",0xd);
        if (iVar1 == 0) {
          (*(code *)param_2[8])(param_2);
          (*(code *)param_2[7])(param_2);
          pcVar4 = (char *)*param_2;
          _Str1 = pcVar4;
          if (pcVar4 < pcVar5) {
            do {
              if ((_Str1 + 5 < pcVar5 && *_Str1 == 'k') &&
                 (iVar1 = _strncmp(_Str1,"known",5), iVar1 == 0)) {
                (*(code *)param_2[8])(param_2);
                (*(code *)param_2[0xe])(param_2,auStack_20);
                if (iStack_18 == 3) {
                  pcVar4 = (char *)*param_2;
                }
                break;
              }
              (*(code *)param_2[8])(param_2);
              if (param_2[3] != 0) goto LAB_101fe8c7;
              (*(code *)param_2[7])(param_2);
              _Str1 = (char *)*param_2;
              pcVar5 = apcStack_28[0];
            } while ((char *)*param_2 < apcStack_28[0]);
          }
          *param_2 = (uint)pcVar4;
        }
        else {
LAB_101fe870:
          (*(code *)param_2[8])(param_2);
          if (param_2[3] != 0) break;
        }
      }
      else {
        if (apcStack_28[0] <= pcVar4 + 2 || *pcVar4 != '/') goto LAB_101fe870;
        pcVar4 = pcVar4 + 1;
        *param_2 = (uint)pcVar4;
        (*(code *)param_2[8])(param_2);
        if (param_2[3] != 0) break;
        uVar6 = (int)*param_2 - (int)pcVar4;
        if (((char *)*param_2 < apcStack_28[0] && uVar6 != 0) && uVar6 < 0x16) {
          puVar3 = (uint *)&DAT_103113f4;
          uVar2 = 7;
          do {
            if (puVar3[1] != 0) {
              if ((uVar2 == uVar6) && (iVar1 = FUN_102595e0(pcVar4,puVar3[1],uVar6), iVar1 == 0)) {
                uVar6 = FUN_101fe94d(puVar3);
                param_2[3] = uVar6;
                if (uVar6 != 0) goto LAB_101fe8ca;
                break;
              }
              puVar3 = puVar3 + 10;
            }
            uVar2 = *puVar3;
          } while (uVar2 != 0);
        }
      }
      (*(code *)param_2[7])(param_2);
      pcVar4 = (char *)*param_2;
    } while (pcVar4 < apcStack_28[0]);
  }
LAB_101fe8c7:
  uVar6 = param_2[3];
LAB_101fe8ca:
  if (DAT_10388d00 != (local_14 ^ (uint)apcStack_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar6;
}

