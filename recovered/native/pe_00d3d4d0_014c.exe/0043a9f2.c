/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043a9f2 */

void __fastcall FUN_0043a9f2(int param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  bool bVar8;
  
  iVar1 = *(int *)(param_1 + 0x100);
  bVar8 = true;
  if ((*(short *)(param_1 + 0xee) != 0) && (*(short *)(param_1 + 0xf0) != 0)) {
    bVar8 = *(short *)(param_1 + 0xf2) == 0;
  }
  if (*(int *)(param_1 + 0x24) < iVar1) {
    if (*(char *)(param_1 + 0x1ce) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0x81;
    }
  }
  else {
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - iVar1;
    lVar4 = (longlong)*param_2 * (longlong)(int)*(short *)(param_1 + 0xfc);
    iVar6 = (int)(lVar4 >> 0x3f);
    lVar5 = lVar4 + CONCAT44(iVar6,iVar6) + 0x2000;
    lVar4 = (longlong)(int)*(short *)(param_1 + 0xfe) * (longlong)*param_2;
    iVar6 = (int)(lVar4 >> 0x3f);
    lVar4 = lVar4 + CONCAT44(iVar6,iVar6) + 0x2000;
    if (iVar1 != 0) {
      iVar6 = 0;
      do {
        uVar2 = param_2[iVar6 + -1];
        if (uVar2 < *(ushort *)(param_1 + 0x60)) {
          iVar3 = *(int *)(param_1 + 0x204);
          uVar7 = 0;
          if (iVar3 == 0) {
            uVar7 = (int)((ulonglong)lVar5 >> 0x20) << 0x12 | (uint)lVar5 >> 0xe;
          }
          if (iVar3 != 0 && !bVar8) {
            if ((iVar3 == 7) ||
               (((*(char *)(param_1 + 0x1cd) == '\0' || (*(short *)(param_1 + 0xfe) == 0)) &&
                ((*(byte *)(*(int *)(param_1 + 0x70) + uVar2) & 0x10) == 0)))) goto LAB_0043ab25;
            uVar7 = 0;
          }
          FUN_00444530(param_1,uVar2,uVar7,
                       (int)((ulonglong)lVar4 >> 0x20) << 0x12 | (uint)lVar4 >> 0xe);
        }
        else if (*(char *)(param_1 + 0x1ce) != '\0') {
          *(undefined4 *)(param_1 + 0x10) = 0x86;
          return;
        }
LAB_0043ab25:
        iVar6 = iVar6 + -1;
      } while (-iVar1 != iVar6);
    }
  }
  *(undefined4 *)(param_1 + 0x100) = 1;
  return;
}

