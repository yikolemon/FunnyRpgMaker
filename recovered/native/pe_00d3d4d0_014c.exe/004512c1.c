/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004512c1 */

int __fastcall FUN_004512c1(int param_1,undefined4 *param_2,char *param_3,int param_4)

{
  char *pcVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  char *pcVar7;
  undefined *puVar8;
  
  pcVar1 = param_3 + param_4;
  param_2[2] = pcVar1;
  param_2[3] = 0;
  pcVar3 = param_3 + param_4 + -0x12;
  do {
    *param_2 = param_3;
    (*(code *)param_2[7])(param_2);
    pcVar2 = (char *)*param_2;
    pcVar7 = pcVar2 + -0x11;
    if (pcVar1 <= pcVar2) {
      pcVar7 = pcVar3;
    }
    if (param_3 < pcVar7) {
      do {
        if (((*param_3 == '%') &&
            (uVar4 = FUN_00493180((int)param_3,(uint *)"%ADOBeginFontDict",0x11), uVar4 == 0)) &&
           (*(int *)(param_1 + 300) != 0)) {
          param_2[0x18] = param_2[0x18] + 1;
        }
        param_3 = param_3 + 1;
      } while (param_3 != pcVar7);
    }
    if (pcVar1 <= pcVar2) {
LAB_004513e5:
      if (*(int *)(param_1 + 300) == 0) {
        iVar6 = 3;
      }
      else {
        iVar6 = param_2[3];
      }
      return iVar6;
    }
    (*(code *)param_2[8])(param_2);
    param_3 = (char *)*param_2;
    if ((pcVar1 <= param_3) || (param_2[3] != 0)) goto LAB_004513e5;
    if (pcVar2 + 2 < pcVar1 && *pcVar2 == '/') {
      uVar4 = (int)param_3 - (int)(pcVar2 + 1);
      if (uVar4 < 0x16 && uVar4 != 0) {
        puVar8 = &DAT_004e4e74;
        uVar5 = 0xb;
        do {
          if ((uVar5 == uVar4) &&
             (iVar6 = FUN_00485bd0((uint *)(pcVar2 + 1),*(uint **)(puVar8 + 4),uVar4), iVar6 == 0))
          {
            iVar6 = FUN_0045196d(param_1,(int)param_2,(int)puVar8);
            param_2[3] = iVar6;
            if (iVar6 != 0) {
              return iVar6;
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

