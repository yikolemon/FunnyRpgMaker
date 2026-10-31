/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140143d82 */

uint FUN_140143d82(longlong param_1,uint param_2,int *param_3)

{
  ushort uVar1;
  uint uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = *(uint *)(param_1 + 0x438);
  uVar8 = 0;
  uVar9 = 0;
  if (param_2 < uVar2) {
    lVar3 = *(longlong *)(param_1 + 0x440);
    if (*(short *)(param_1 + 0x132) == 0) {
      uVar6 = (ulonglong)(param_2 * 2);
      uVar7 = *(ushort *)(lVar3 + uVar6) << 8 | *(ushort *)(lVar3 + uVar6) >> 8;
      uVar9 = (uint)uVar7;
      if (uVar6 + 4 <= (ulonglong)(uVar2 * 2)) {
        uVar1 = *(ushort *)(lVar3 + 2 + uVar6);
        uVar9 = (uint)(ushort)(uVar1 << 8 | uVar1 >> 8);
      }
      uVar8 = (uint)uVar7 + (uint)uVar7;
      uVar10 = uVar9 * 2;
    }
    else {
      uVar6 = (ulonglong)(param_2 * 4);
      uVar9 = *(uint *)(lVar3 + uVar6);
      uVar8 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      uVar10 = uVar8;
      if (uVar6 + 8 <= (ulonglong)(uVar2 * 4)) {
        uVar9 = *(uint *)(lVar3 + 4 + uVar6);
        uVar10 = uVar9 >> 0x18 | (uVar9 & 0xff0000) >> 8 | (uVar9 & 0xff00) << 8 | uVar9 << 0x18;
      }
    }
    uVar9 = *(uint *)(param_1 + 0x3f8);
    iVar5 = 0;
    if (uVar9 < uVar8) {
      iVar5 = 0;
      uVar4 = 0;
      goto LAB_140143e47;
    }
    if ((uVar9 < uVar10) && (uVar10 = uVar9, uVar4 = 0, param_2 != uVar2 - 2)) goto LAB_140143e47;
    if (uVar8 <= uVar10) {
      uVar9 = uVar10;
    }
  }
  iVar5 = uVar9 - uVar8;
  uVar4 = uVar8;
LAB_140143e47:
  *param_3 = iVar5;
  return uVar4;
}

