/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140055af0 */

int FUN_140055af0(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  longlong lVar11;
  undefined1 auStackY_78 [32];
  undefined8 local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_14012ea80 ^ (ulonglong)auStackY_78;
  lVar8 = *(longlong *)(param_1 + 8);
  uVar10 = param_3 + -1 + (uint)(param_3 == 0);
  iVar6 = 6;
  if ((lVar8 == 0) || (*(uint *)(lVar8 + 0x218) <= uVar10)) goto LAB_140055d38;
  if ((param_4 & 9) == 0) {
    iVar5 = FUN_1400572ee(param_1,param_2,uVar10,(byte)(param_4 >> 0x16) & 1);
    if (iVar5 != 0) goto LAB_140055b67;
  }
  else {
LAB_140055b67:
    if ((param_4 >> 0xe & 1) != 0) goto LAB_140055d38;
    lVar9 = *(longlong *)(lVar8 + 0x228);
    lVar11 = (ulonglong)uVar10 * 0x10;
    iVar6 = FUN_1400576ab(param_1 + 0xf8,*(longlong **)(lVar8 + 0xa0),*(int *)(lVar8 + 0x110),
                          *(int *)(lVar9 + 0xc + lVar11),*(uint *)(lVar9 + 8 + lVar11));
    if (iVar6 != 0) goto LAB_140055d38;
    *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
    lVar1 = *(longlong *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar1 + 0x38);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    uVar4 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar1 + 0x28);
    *(undefined8 *)(param_1 + 0xb0) = uVar4;
    *(undefined8 *)(param_1 + 0x98) = uVar2;
    *(undefined8 *)(param_1 + 0xa0) = uVar3;
    uVar10 = *(uint *)(param_1 + 0xb8) & 0xfffffffa;
    *(uint *)(param_1 + 0xb8) = uVar10 + 4;
    if (*(ushort *)(param_2 + 0x1a) < 0x18) {
      *(uint *)(param_1 + 0xb8) = uVar10 | 0x104;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    uVar10 = *(uint *)(lVar9 + lVar11 + 4);
    if (*(uint *)(lVar8 + 0x18c) != *(uint *)(lVar8 + 0x188)) {
      uVar10 = FUN_14001de7c(uVar10,*(uint *)(lVar8 + 0x188),*(uint *)(lVar8 + 0x18c));
    }
    if ((*(byte *)(lVar8 + 0x1a0) & 1) == 0) {
      *(uint *)(param_1 + 0x40) = uVar10;
      uVar7 = uVar10;
      uVar10 = *(uint *)(param_1 + 0x4c);
    }
    else {
      *(uint *)(param_1 + 0x4c) = uVar10;
      uVar7 = *(uint *)(param_1 + 0x40);
    }
    *(uint *)(param_1 + 0x50) = uVar7;
    *(uint *)(param_1 + 0x54) = uVar10;
    *(undefined8 *)(param_1 + 0x44) = 0;
    if ((param_4 & 1) == 0) {
      iVar6 = *(int *)(param_2 + 0x1c);
      iVar5 = *(int *)(param_2 + 0x20);
      if (*(short *)(param_1 + 0x9a) != 0) {
        lVar8 = *(longlong *)(param_1 + 0xa0);
        lVar9 = 0;
        do {
          lVar11 = (longlong)*(int *)(lVar8 + lVar9 * 8) * (longlong)iVar6;
          *(int *)(lVar8 + lVar9 * 8) =
               (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
          lVar11 = (longlong)*(int *)(lVar8 + 4 + lVar9 * 8) * (longlong)iVar5;
          *(int *)(lVar8 + 4 + lVar9 * 8) =
               (int)((ulonglong)(lVar11 + 0x8000 + (lVar11 >> 0x3f)) >> 0x10);
          lVar9 = lVar9 + 1;
        } while ((uint)lVar9 < (uint)*(ushort *)(param_1 + 0x9a));
        uVar7 = *(uint *)(param_1 + 0x40);
        uVar10 = *(uint *)(param_1 + 0x4c);
      }
      lVar8 = (longlong)iVar6 * (longlong)(int)uVar7;
      *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
      lVar8 = (longlong)iVar5 * (longlong)(int)uVar10;
      *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
    }
    FUN_14001d45b(param_1 + 0x98,(int *)local_50);
    *(ulonglong *)(param_1 + 0x30) =
         CONCAT44((int)((ulonglong)local_50[1] >> 0x20) - (int)((ulonglong)local_50[0] >> 0x20),
                  (int)local_50[1] - (int)local_50[0]);
    *(undefined8 *)(param_1 + 0x38) = local_50[0];
  }
  iVar6 = 0;
LAB_140055d38:
  if (DAT_14012ea80 == (local_40 ^ (ulonglong)auStackY_78)) {
    return iVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_40 ^ (ulonglong)auStackY_78);
}

