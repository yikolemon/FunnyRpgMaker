/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020d350 */

undefined4 __fastcall FUN_1020d350(int param_1,int param_2,int param_3)

{
  int iVar1;
  char cVar2;
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
        cVar2 = FUN_1020d6e7();
        if (cVar2 != '\0') {
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
            goto LAB_1020d446;
          }
        }
      }
      else {
        cVar2 = FUN_1020d706();
        if (((cVar2 != '\0') &&
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
LAB_1020d446:
          cVar2 = FUN_1020d6f3();
          if (cVar2 != '\0') {
            *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) + (uVar7 - iVar8);
            FUN_1020d702();
          }
          cVar2 = FUN_1020d6f3();
          uVar5 = CONCAT31((int3)(uVar4 >> 8),1);
          if (cVar2 == '\0') {
            return uVar5;
          }
          *(int *)(param_3 + 0xc) = *(int *)(param_3 + 0xc) + (uVar7 - iVar8);
          FUN_1020d702();
          return uVar5;
        }
      }
      pcVar6 = pcVar6 + 0x14;
      iVar8 = iVar8 + -1;
    } while (iVar8 != 0);
  }
  return 0;
}

