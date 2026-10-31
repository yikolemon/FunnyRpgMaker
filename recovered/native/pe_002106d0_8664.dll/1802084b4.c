/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802084b4 */

int FUN_1802084b4(longlong param_1,longlong param_2,int param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  longlong lVar12;
  undefined1 auStack_78 [32];
  undefined4 local_58;
  undefined8 local_50 [2];
  ulonglong local_40;
  
  local_40 = DAT_180402640 ^ (ulonglong)auStack_78;
  lVar9 = *(longlong *)(param_1 + 8);
  uVar11 = param_3 + -1 + (uint)(param_3 == 0);
  iVar8 = 6;
  if ((lVar9 == 0) || (*(uint *)(lVar9 + 0x218) <= uVar11)) goto LAB_1802086fc;
  if ((param_4 & 9) == 0) {
    iVar7 = FUN_180209cb2(param_1,param_2,uVar11,
                          CONCAT31((uint3)(param_4 >> 0x1e),(char)(param_4 >> 0x16)) & 0xffffff01);
    if (iVar7 != 0) goto LAB_18020852b;
  }
  else {
LAB_18020852b:
    if ((param_4 >> 0xe & 1) != 0) goto LAB_1802086fc;
    lVar10 = *(longlong *)(lVar9 + 0x228);
    lVar12 = (ulonglong)uVar11 * 0x10;
    local_58 = *(undefined4 *)(lVar10 + 8 + lVar12);
    iVar8 = FUN_18020a06f(param_1 + 0xf8,*(undefined8 *)(lVar9 + 0xa0),
                          *(undefined4 *)(lVar9 + 0x110),*(undefined4 *)(lVar10 + 0xc + lVar12));
    if (iVar8 != 0) goto LAB_1802086fc;
    *(undefined4 *)(param_1 + 0x60) = 0x6f75746c;
    lVar3 = *(longlong *)(param_1 + 0x120);
    *(undefined8 *)(param_1 + 0xb8) = *(undefined8 *)(lVar3 + 0x38);
    uVar4 = *(undefined8 *)(lVar3 + 0x18);
    uVar5 = *(undefined8 *)(lVar3 + 0x20);
    uVar6 = *(undefined8 *)(lVar3 + 0x30);
    *(undefined8 *)(param_1 + 0xa8) = *(undefined8 *)(lVar3 + 0x28);
    *(undefined8 *)(param_1 + 0xb0) = uVar6;
    *(undefined8 *)(param_1 + 0x98) = uVar4;
    *(undefined8 *)(param_1 + 0xa0) = uVar5;
    uVar11 = *(uint *)(param_1 + 0xb8) & 0xfffffffa;
    *(uint *)(param_1 + 0xb8) = uVar11 + 4;
    if (*(ushort *)(param_2 + 0x1a) < 0x18) {
      *(uint *)(param_1 + 0xb8) = uVar11 | 0x104;
    }
    *(undefined4 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    iVar8 = *(int *)(lVar10 + lVar12 + 4);
    if (*(int *)(lVar9 + 0x18c) != *(int *)(lVar9 + 0x188)) {
      iVar8 = FUN_1801cb4a4(iVar8);
    }
    if ((*(byte *)(lVar9 + 0x1a0) & 1) == 0) {
      *(int *)(param_1 + 0x40) = iVar8;
      iVar7 = iVar8;
      iVar8 = *(int *)(param_1 + 0x4c);
    }
    else {
      *(int *)(param_1 + 0x4c) = iVar8;
      iVar7 = *(int *)(param_1 + 0x40);
    }
    *(int *)(param_1 + 0x50) = iVar7;
    *(int *)(param_1 + 0x54) = iVar8;
    *(undefined8 *)(param_1 + 0x44) = 0;
    if ((param_4 & 1) == 0) {
      iVar1 = *(int *)(param_2 + 0x1c);
      iVar2 = *(int *)(param_2 + 0x20);
      if (*(short *)(param_1 + 0x9a) != 0) {
        lVar9 = *(longlong *)(param_1 + 0xa0);
        lVar10 = 0;
        do {
          lVar12 = (longlong)*(int *)(lVar9 + lVar10 * 8) * (longlong)iVar1;
          *(int *)(lVar9 + lVar10 * 8) =
               (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
          lVar12 = (longlong)*(int *)(lVar9 + 4 + lVar10 * 8) * (longlong)iVar2;
          *(int *)(lVar9 + 4 + lVar10 * 8) =
               (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10);
          lVar10 = lVar10 + 1;
        } while ((uint)lVar10 < (uint)*(ushort *)(param_1 + 0x9a));
        iVar7 = *(int *)(param_1 + 0x40);
        iVar8 = *(int *)(param_1 + 0x4c);
      }
      lVar9 = (longlong)iVar1 * (longlong)iVar7;
      *(int *)(param_1 + 0x40) = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
      lVar9 = (longlong)iVar2 * (longlong)iVar8;
      *(int *)(param_1 + 0x4c) = (int)((ulonglong)(lVar9 + 0x8000 + (lVar9 >> 0x3f)) >> 0x10);
    }
    FUN_1801caa83((undefined8 *)(param_1 + 0x98),local_50);
    *(ulonglong *)(param_1 + 0x30) =
         CONCAT44((int)((ulonglong)local_50[1] >> 0x20) - (int)((ulonglong)local_50[0] >> 0x20),
                  (int)local_50[1] - (int)local_50[0]);
    *(undefined8 *)(param_1 + 0x38) = local_50[0];
  }
  iVar8 = 0;
LAB_1802086fc:
  if (DAT_180402640 == (local_40 ^ (ulonglong)auStack_78)) {
    return iVar8;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_40 ^ (ulonglong)auStack_78);
}

