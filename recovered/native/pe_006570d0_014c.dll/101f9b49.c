/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101f9b49 */

int __fastcall FUN_101f9b49(int param_1,undefined4 *param_2,char *param_3,int param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;
  undefined *puVar8;
  
  pcVar1 = param_3 + param_4;
  param_2[2] = pcVar1;
  param_2[3] = 0;
  pcVar3 = param_3 + param_4 + -0x12;
  do {
    *param_2 = param_3;
    (*(code *)param_2[7])(param_2);
    pcVar2 = (char *)*param_2;
    pcVar6 = pcVar2 + -0x11;
    if (pcVar1 <= pcVar2) {
      pcVar6 = pcVar3;
    }
    if (param_3 < pcVar6) {
      do {
        if (((*param_3 == '%') && (iVar4 = _strncmp(param_3,"%ADOBeginFontDict",0x11), iVar4 == 0))
           && (*(int *)(param_1 + 300) != 0)) {
          param_2[0x18] = param_2[0x18] + 1;
        }
        param_3 = param_3 + 1;
      } while (param_3 != pcVar6);
    }
    if (pcVar1 <= pcVar2) {
LAB_101f9c6d:
      if (*(int *)(param_1 + 300) == 0) {
        iVar4 = 3;
      }
      else {
        iVar4 = param_2[3];
      }
      return iVar4;
    }
    (*(code *)param_2[8])(param_2);
    param_3 = (char *)*param_2;
    if ((pcVar1 <= param_3) || (param_2[3] != 0)) goto LAB_101f9c6d;
    if (pcVar2 + 2 < pcVar1 && *pcVar2 == '/') {
      uVar7 = (int)param_3 - (int)(pcVar2 + 1);
      if (uVar7 < 0x16 && uVar7 != 0) {
        puVar8 = &DAT_103108d4;
        uVar5 = 0xb;
        do {
          if ((uVar5 == uVar7) &&
             (iVar4 = FUN_102595e0(pcVar2 + 1,*(undefined4 *)(puVar8 + 4),uVar7), iVar4 == 0)) {
            iVar4 = FUN_101fa1f5(puVar8);
            param_2[3] = iVar4;
            if (iVar4 != 0) {
              return iVar4;
            }
            param_3 = (char *)*param_2;
            break;
          }
          uVar5 = *(uint *)(puVar8 + 0x28);
          puVar8 = puVar8 + 0x28;
        } while (uVar5 != 0);
      }
    }
  } while( true );
}

