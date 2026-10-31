/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140045530 */

undefined4 FUN_140045530(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined1 auStack_88 [40];
  undefined1 local_60 [2];
  short local_5e;
  longlong local_58;
  ulonglong local_38;
  
  local_38 = DAT_14012ea80 ^ (ulonglong)auStack_88;
  lVar10 = *(longlong *)(param_1 + 0x18);
  local_58 = (ulonglong)param_4 * 8 + *(longlong *)(lVar10 + 0x20);
  local_5e = *(short *)(lVar10 + 0x1a) - (short)param_4;
  uVar1 = *(ushort *)(param_2 + 4);
  uVar2 = uVar1;
  if ((uVar1 & 200) != 0) {
    FUN_14001df2d((longlong)local_60,(int *)(param_2 + 0x10));
    uVar2 = *(ushort *)(param_2 + 4);
  }
  uVar5 = *(uint *)(param_2 + 8);
  uVar9 = *(uint *)(param_2 + 0xc);
  if ((uVar2 & 2) == 0) {
    uVar5 = uVar5 + param_3;
    uVar7 = 0x15;
    if ((param_4 <= uVar5) || (uVar8 = uVar9 + param_4, *(ushort *)(lVar10 + 0x1a) <= uVar8))
    goto LAB_1400456e1;
    lVar10 = *(longlong *)(lVar10 + 0x20);
    uVar9 = *(int *)(lVar10 + 4 + (ulonglong)uVar5 * 8) -
            *(int *)(lVar10 + 4 + (ulonglong)uVar8 * 8);
    uVar5 = *(int *)(lVar10 + (ulonglong)uVar5 * 8) - *(int *)(lVar10 + (ulonglong)uVar8 * 8);
  }
  else {
    uVar7 = 0;
    if (uVar5 == 0 && uVar9 == 0) goto LAB_1400456e1;
    if (((uVar1 & 200) != 0) && ((uVar2 & 0x800) != 0)) {
      iVar3 = FUN_140021879(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
      iVar4 = FUN_140021879(*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x18));
      uVar5 = (uint)((ulonglong)
                     ((longlong)iVar3 * (longlong)(int)uVar5 + 0x8000 +
                     ((longlong)iVar3 * (longlong)(int)uVar5 >> 0x3f)) >> 0x10);
      uVar9 = (uint)((ulonglong)
                     ((longlong)iVar4 * (longlong)(int)uVar9 + 0x8000 +
                     ((longlong)iVar4 * (longlong)(int)uVar9 >> 0x3f)) >> 0x10);
    }
    if ((*(uint *)(param_1 + 0x20) & 1) == 0) {
      lVar10 = *(longlong *)(*(longlong *)(param_1 + 8) + 0x40);
      lVar6 = (longlong)(int)uVar5 * (longlong)*(int *)(lVar10 + 4);
      uVar8 = (uint)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
      lVar10 = (longlong)(int)uVar9 * (longlong)*(int *)(lVar10 + 8);
      uVar9 = (uint)((ulonglong)(lVar10 + 0x8000 + (lVar10 >> 0x3f)) >> 0x10);
      uVar5 = uVar8;
      if (((*(uint *)(param_1 + 0x20) & 2) == 0) && ((*(ushort *)(param_2 + 4) & 4) != 0)) {
        uVar5 = uVar8 + 0x20 & 0xffffffc0;
        if (*(int *)(*(longlong *)(param_1 + 0xd8) + 0x324) != 0) {
          uVar5 = uVar8;
        }
        uVar9 = uVar9 + 0x20 & 0xffffffc0;
      }
    }
  }
  uVar7 = 0;
  if (uVar5 != 0 || uVar9 != 0) {
    FUN_14001df78((longlong)local_60,uVar5,uVar9);
    uVar7 = 0;
  }
LAB_1400456e1:
  if (DAT_14012ea80 == (local_38 ^ (ulonglong)auStack_88)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_38 ^ (ulonglong)auStack_88);
}

