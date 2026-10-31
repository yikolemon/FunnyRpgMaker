/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400545c0 */

ulonglong FUN_1400545c0(longlong param_1,undefined8 *param_2,char *param_3,uint param_4)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined *puVar8;
  
  pcVar1 = param_3 + param_4;
  param_2[2] = pcVar1;
  *(undefined4 *)(param_2 + 3) = 0;
  pcVar7 = param_3 + ((ulonglong)param_4 - 0x12);
  do {
    *param_2 = param_3;
    (*(code *)param_2[7])(param_2);
    pcVar2 = (char *)*param_2;
    pcVar5 = pcVar2 + -0x11;
    if (pcVar1 <= pcVar2) {
      pcVar5 = pcVar7;
    }
    if (param_3 < pcVar5) {
      do {
        if (((*param_3 == '%') && (iVar3 = strncmp(param_3,"%ADOBeginFontDict",0x11), iVar3 == 0))
           && (*(int *)(param_1 + 0x1b0) != 0)) {
          *(int *)(param_2 + 0x17) = *(int *)(param_2 + 0x17) + 1;
        }
        param_3 = param_3 + 1;
      } while (param_3 != pcVar5);
    }
    if (pcVar1 <= pcVar2) {
LAB_140054713:
      if (*(int *)(param_1 + 0x1b0) == 0) {
        uVar6 = 3;
      }
      else {
        uVar6 = (ulonglong)*(uint *)(param_2 + 3);
      }
      return uVar6;
    }
    (*(code *)param_2[8])(param_2);
    param_3 = (char *)*param_2;
    if ((pcVar1 <= param_3) || (*(int *)(param_2 + 3) != 0)) goto LAB_140054713;
    if (pcVar2 + 2 < pcVar1 && *pcVar2 == '/') {
      uVar6 = (longlong)param_3 - (longlong)(pcVar2 + 1);
      iVar3 = (int)uVar6;
      if (iVar3 - 1U < 0x15) {
        iVar4 = 0xb;
        puVar8 = &DAT_1400f7480;
        do {
          if ((iVar4 == iVar3) &&
             (iVar4 = memcmp(pcVar2 + 1,*(void **)(puVar8 + 8),uVar6 & 0xffffffff), iVar4 == 0)) {
            uVar6 = FUN_140054cf7(param_1,(longlong)param_2,(longlong)puVar8);
            *(int *)(param_2 + 3) = (int)uVar6;
            if ((int)uVar6 != 0) {
              return uVar6;
            }
            param_3 = (char *)*param_2;
            break;
          }
          iVar4 = *(int *)(puVar8 + 0x38);
          puVar8 = puVar8 + 0x38;
        } while (iVar4 != 0);
      }
    }
  } while( true );
}

