/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e3282 */

void __fastcall FUN_101e3282(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  iVar1 = *(int *)(param_1 + 0x100);
  bVar7 = true;
  if ((*(short *)(param_1 + 0xee) != 0) && (*(short *)(param_1 + 0xf0) != 0)) {
    bVar7 = *(short *)(param_1 + 0xf2) == 0;
  }
  if (*(int *)(param_1 + 0x24) < iVar1) {
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x81;
    }
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar1;
    lVar3 = (longlong)*param_2 * (longlong)(int)*(short *)(param_1 + 0xfc);
    iVar5 = (int)(lVar3 >> 0x3f);
    lVar4 = lVar3 + CONCAT44(iVar5,iVar5) + 0x2000;
    lVar3 = (longlong)(int)*(short *)(param_1 + 0xfe) * (longlong)*param_2;
    iVar5 = (int)(lVar3 >> 0x3f);
    lVar3 = lVar3 + CONCAT44(iVar5,iVar5) + 0x2000;
    if (iVar1 != 0) {
      iVar5 = 0;
      do {
        if ((uint)param_2[iVar5 + -1] < (uint)*(ushort *)(param_1 + 0x60)) {
          iVar2 = *(int *)(param_1 + 0x204);
          uVar6 = 0;
          if (iVar2 == 0) {
            uVar6 = (int)((ulonglong)lVar4 >> 0x20) << 0x12 | (uint)lVar4 >> 0xe;
          }
          if (iVar2 != 0 && !bVar7) {
            if ((iVar2 == 7) ||
               (((*(char *)(param_1 + 0x1cd) == '\0' || (*(short *)(param_1 + 0xfe) == 0)) &&
                ((*(byte *)(*(int *)(param_1 + 0x70) + param_2[iVar5 + -1]) & 0x10) == 0))))
            goto LAB_101e33b5;
            uVar6 = 0;
          }
          FUN_101ecdbb(uVar6,(int)((ulonglong)lVar3 >> 0x20) << 0x12 | (uint)lVar3 >> 0xe);
        }
        else if (*(char *)(param_1 + 0x1ce) != '\0') {
          *(undefined4 *)(param_1 + 0x10) = 0x86;
          return;
        }
LAB_101e33b5:
        iVar5 = iVar5 + -1;
      } while (-iVar1 != iVar5);
    }
  }
  *(undefined4 *)(param_1 + 0x100) = 1;
  return;
}

