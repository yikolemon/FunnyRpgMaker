/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00464ad0 */

undefined4 __fastcall FUN_00464ad0(int param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  char *pcVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 4);
  if (iVar8 != 0) {
    uVar4 = *(uint *)(param_1 + 0x14);
    pcVar6 = (char *)(param_1 + 0x54);
    do {
      if (*pcVar6 == '\0') {
        bVar2 = FUN_00464e67(param_3);
        if (bVar2) {
          iVar1 = *(int *)(param_3 + 8);
          if (((int)(*(int *)(pcVar6 + -0x10) - uVar4) <= iVar1) &&
             (iVar1 <= (int)(*(int *)(pcVar6 + -0xc) + uVar4))) {
            if (*(char *)(param_1 + 8) == '\0') {
              iVar8 = *(int *)(param_3 + 0xc);
              uVar4 = iVar8 + 0x8000U & 0xffff0000;
              uVar7 = uVar4;
              if ((*(int *)(param_1 + 0x10) <= iVar1 - *(int *)(pcVar6 + -0x10)) &&
                 (uVar3 = *(int *)(pcVar6 + -4) + 0x10000, (int)uVar4 <= (int)uVar3)) {
                uVar4 = uVar3;
                uVar7 = uVar3;
              }
            }
            else {
              iVar8 = *(int *)(param_3 + 0xc);
              uVar7 = *(uint *)(pcVar6 + -4);
            }
            goto LAB_00464bc6;
          }
        }
      }
      else {
        bVar2 = FUN_00464e86(param_2);
        if (((bVar2) &&
            (iVar1 = *(int *)(param_2 + 8), (int)(*(int *)(pcVar6 + -0x10) - uVar4) <= iVar1)) &&
           (iVar1 <= (int)(*(int *)(pcVar6 + -0xc) + uVar4))) {
          if (*(char *)(param_1 + 8) == '\0') {
            iVar8 = *(int *)(param_2 + 0xc);
            uVar4 = iVar8 + 0x8000U & 0xffff0000;
            uVar7 = uVar4;
            if ((*(int *)(param_1 + 0x10) <= *(int *)(pcVar6 + -0xc) - iVar1) &&
               (uVar3 = *(int *)(pcVar6 + -4) - 0x10000, (int)uVar3 <= (int)uVar4)) {
              uVar4 = uVar3;
              uVar7 = uVar3;
            }
          }
          else {
            iVar8 = *(int *)(param_2 + 0xc);
            uVar7 = *(uint *)(pcVar6 + -4);
          }
LAB_00464bc6:
          bVar2 = FUN_00464e73((int *)param_2);
          if (bVar2) {
            *(uint *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + (uVar7 - iVar8);
            FUN_00464e82(param_2);
          }
          bVar2 = FUN_00464e73((int *)param_3);
          uVar5 = CONCAT31((int3)(uVar4 >> 8),1);
          if (!bVar2) {
            return uVar5;
          }
          *(uint *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + (uVar7 - iVar8);
          FUN_00464e82(param_3);
          return uVar5;
        }
      }
      pcVar6 = pcVar6 + 0x14;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return 0;
}

