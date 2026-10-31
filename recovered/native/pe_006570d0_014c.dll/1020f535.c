/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1020f535 */

void __fastcall FUN_1020f535(int param_1,int param_2)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_1 + 4 + param_2 * 0xcc);
  if (iVar8 != 0) {
    param_1 = param_1 + param_2 * 0xcc;
    iVar1 = *(int *)(param_1 + 200);
    lVar2 = (longlong)iVar1 * (longlong)*(int *)(param_1 + 8);
    iVar4 = (int)(lVar2 >> 0x3f);
    lVar2 = lVar2 + CONCAT44(iVar4,iVar4) + 0x8000;
    uVar5 = (int)((ulonglong)lVar2 >> 0x20) << 0x10 | (uint)lVar2 >> 0x10;
    *(uint *)(param_1 + 0xc) = uVar5;
    *(uint *)(param_1 + 0x10) = uVar5 + 0x20 & 0xffffffc0;
    iVar8 = iVar8 + -1;
    if (iVar8 != 0) {
      piVar6 = (int *)(param_1 + 0x14);
      do {
        lVar2 = (longlong)iVar1 * (longlong)*piVar6;
        iVar4 = (int)(lVar2 >> 0x3f);
        lVar2 = lVar2 + CONCAT44(iVar4,iVar4) + 0x8000;
        uVar7 = (int)((ulonglong)lVar2 >> 0x20) << 0x10 | (uint)lVar2 >> 0x10;
        uVar5 = *(uint *)(param_1 + 0xc);
        uVar3 = uVar5 - uVar7;
        if ((int)uVar5 < (int)uVar7) {
          uVar3 = uVar7 - uVar5;
        }
        if (0x7f < uVar3) {
          uVar5 = uVar7;
        }
        piVar6[1] = uVar5;
        piVar6[2] = uVar5 + 0x20 & 0xffffffc0;
        piVar6 = piVar6 + 3;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return;
}

