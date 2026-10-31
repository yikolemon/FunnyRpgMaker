/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021ca24 */

ulonglong FUN_18021ca24(longlong param_1,longlong param_2,longlong param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  uVar6 = *(uint *)(param_1 + 4);
  if ((ulonglong)uVar6 != 0) {
    iVar4 = *(int *)(param_1 + 0x14);
    lVar8 = 0;
    do {
      if (*(char *)(param_1 + 0x70 + lVar8) == '\0') {
        cVar3 = FUN_18021cddc(param_3);
        if (cVar3 != '\0') {
          iVar1 = *(int *)(param_1 + 0x60 + lVar8);
          iVar2 = *(int *)(param_3 + 0x10);
          if ((iVar1 - iVar4 <= iVar2) && (iVar2 <= *(int *)(param_1 + 100 + lVar8) + iVar4)) {
            if (*(char *)(param_1 + 8) == '\0') {
              iVar4 = *(int *)(param_3 + 0x14);
              uVar6 = iVar4 + 0x8000U & 0xffff0000;
              if ((*(int *)(param_1 + 0x10) <= iVar2 - iVar1) &&
                 (uVar5 = *(int *)(param_1 + 0x6c + lVar8) + 0x10000, (int)uVar6 <= (int)uVar5)) {
                uVar6 = uVar5;
              }
            }
            else {
              iVar4 = *(int *)(param_3 + 0x14);
              uVar6 = *(uint *)(param_1 + 0x6c + lVar8);
            }
            goto LAB_18021cb35;
          }
        }
      }
      else {
        cVar3 = FUN_18021cdfb(param_2);
        if (((cVar3 != '\0') &&
            (iVar1 = *(int *)(param_2 + 0x10), *(int *)(param_1 + 0x60 + lVar8) - iVar4 <= iVar1))
           && (iVar2 = *(int *)(param_1 + 100 + lVar8), iVar1 <= iVar2 + iVar4)) {
          if (*(char *)(param_1 + 8) == '\0') {
            iVar4 = *(int *)(param_2 + 0x14);
            uVar6 = iVar4 + 0x8000U & 0xffff0000;
            if ((*(int *)(param_1 + 0x10) <= iVar2 - iVar1) &&
               (uVar5 = *(int *)(param_1 + 0x6c + lVar8) - 0x10000, (int)uVar5 <= (int)uVar6)) {
              uVar6 = uVar5;
            }
          }
          else {
            iVar4 = *(int *)(param_2 + 0x14);
            uVar6 = *(uint *)(param_1 + 0x6c + lVar8);
          }
LAB_18021cb35:
          cVar3 = FUN_18021cde8(param_2);
          if (cVar3 != '\0') {
            *(int *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + (uVar6 - iVar4);
            FUN_18021cdf7(param_2);
          }
          cVar3 = FUN_18021cde8(param_3);
          uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
          if (cVar3 != '\0') {
            *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + (uVar6 - iVar4);
            FUN_18021cdf7(param_3);
          }
          goto LAB_18021cab8;
        }
      }
      lVar8 = lVar8 + 0x14;
    } while ((ulonglong)uVar6 * 0x14 != lVar8);
  }
  uVar7 = 0;
LAB_18021cab8:
  return uVar7 & 0xffffffff;
}

