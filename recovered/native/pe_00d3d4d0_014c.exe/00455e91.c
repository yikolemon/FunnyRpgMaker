/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00455e91 */

int __fastcall FUN_00455e91(int param_1,int *param_2,int param_3,int param_4)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcStack_28;
  int local_24;
  undefined1 auStack_20 [8];
  int iStack_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&pcStack_28;
  *param_2 = param_3;
  pcVar8 = (char *)(param_3 + param_4);
  param_2[2] = (int)pcVar8;
  param_2[3] = 0;
  local_24 = param_1;
  (*(code *)param_2[7])(param_2);
  pcVar7 = (char *)*param_2;
  pcStack_28 = pcVar8;
  if (pcVar7 < pcVar8) {
    do {
      pcVar8 = pcStack_28;
      if (pcVar7 + 0x19 < pcStack_28 && *pcVar7 == 'F') {
        uVar1 = FUN_00493180((int)pcVar7,(uint *)"FontDirectory",0xd);
        if (uVar1 == 0) {
          (*(code *)param_2[8])(param_2);
          (*(code *)param_2[7])(param_2);
          pcVar7 = (char *)*param_2;
          pcVar2 = pcVar7;
          if (pcVar7 < pcVar8) {
            do {
              if ((pcVar2 + 5 < pcVar8 && *pcVar2 == 'k') &&
                 (uVar1 = FUN_00493180((int)pcVar2,(uint *)"known",5), uVar1 == 0)) {
                (*(code *)param_2[8])(param_2);
                (*(code *)param_2[0xe])(param_2,auStack_20);
                if (iStack_18 == 3) {
                  pcVar7 = (char *)*param_2;
                }
                break;
              }
              (*(code *)param_2[8])(param_2);
              if (param_2[3] != 0) goto LAB_0045603f;
              (*(code *)param_2[7])(param_2);
              pcVar2 = (char *)*param_2;
              pcVar8 = pcStack_28;
            } while ((char *)*param_2 < pcStack_28);
          }
          *param_2 = (int)pcVar7;
        }
        else {
LAB_00455fe8:
          (*(code *)param_2[8])(param_2);
          if (param_2[3] != 0) break;
        }
      }
      else {
        if (pcStack_28 <= pcVar7 + 2 || *pcVar7 != '/') goto LAB_00455fe8;
        puVar6 = (uint *)(pcVar7 + 1);
        *param_2 = (int)puVar6;
        (*(code *)param_2[8])(param_2);
        if (param_2[3] != 0) break;
        uVar1 = *param_2 - (int)puVar6;
        if (((char *)*param_2 < pcStack_28 && uVar1 != 0) && uVar1 < 0x16) {
          puVar5 = (uint *)&DAT_004e5994;
          uVar3 = 7;
          do {
            if ((uint *)puVar5[1] != (uint *)0x0) {
              if ((uVar3 == uVar1) &&
                 (iVar4 = FUN_00485bd0(puVar6,(uint *)puVar5[1],uVar1), iVar4 == 0)) {
                iVar4 = FUN_004560c5(local_24,(int)param_2,(int)puVar5);
                param_2[3] = iVar4;
                if (iVar4 != 0) goto LAB_00456042;
                break;
              }
              puVar5 = puVar5 + 10;
            }
            uVar3 = *puVar5;
          } while (uVar3 != 0);
        }
      }
      (*(code *)param_2[7])(param_2);
      pcVar7 = (char *)*param_2;
    } while (pcVar7 < pcStack_28);
  }
LAB_0045603f:
  iVar4 = param_2[3];
LAB_00456042:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&pcStack_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&pcStack_28);
  }
  return iVar4;
}

