/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14006a064 */

ulonglong FUN_14006a064(longlong param_1,byte *param_2,byte *param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
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
        bVar3 = FUN_14006a41c(param_3);
        if (bVar3) {
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
            goto LAB_14006a175;
          }
        }
      }
      else {
        bVar3 = FUN_14006a43b(param_2);
        if (((bVar3) &&
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
LAB_14006a175:
          bVar3 = FUN_14006a428((int *)param_2);
          if (bVar3) {
            *(uint *)(param_2 + 0x14) = *(int *)(param_2 + 0x14) + (uVar6 - iVar4);
            FUN_14006a437(param_2);
          }
          bVar3 = FUN_14006a428((int *)param_3);
          uVar7 = CONCAT71((int7)((ulonglong)param_2 >> 8),1);
          if (bVar3) {
            *(uint *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + (uVar6 - iVar4);
            FUN_14006a437(param_3);
          }
          goto LAB_14006a0f8;
        }
      }
      lVar8 = lVar8 + 0x14;
    } while ((ulonglong)uVar6 * 0x14 != lVar8);
  }
  uVar7 = 0;
LAB_14006a0f8:
  return uVar7 & 0xffffffff;
}

