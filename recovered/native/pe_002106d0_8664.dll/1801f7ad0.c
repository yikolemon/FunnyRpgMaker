/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f7ad0 */

int FUN_1801f7ad0(longlong *param_1)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  longlong lVar12;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int *local_60;
  int local_50;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_88;
  local_4c = 0;
  lVar7 = param_1[3];
  uVar3 = *(ushort *)(lVar7 + 0x62);
  uVar4 = *(undefined8 *)(*param_1 + 0x98);
  lVar5 = (ulonglong)uVar3 * 8;
  *(longlong *)(*(longlong *)(lVar7 + 0x68) + lVar5) = param_1[0xb];
  *(longlong *)(*(longlong *)(lVar7 + 0x68) + 8 + lVar5) = param_1[0xc];
  *(longlong *)(*(longlong *)(lVar7 + 0x68) + 0x10 + lVar5) = param_1[0x1f];
  *(longlong *)(*(longlong *)(lVar7 + 0x68) + 0x18 + lVar5) = param_1[0x20];
  if (((*(ushort *)(*param_1 + 6) & 0x7fff) == 0) && ((*(byte *)(*param_1 + 9) & 0x80) == 0)) {
    lVar5 = 0;
  }
  else {
    local_60 = &local_4c;
    local_68 = 0;
    lVar5 = FUN_1801cc8d6(uVar4,8,0,(ulonglong)uVar3 + 4);
    if ((local_4c != 0) || (local_4c = FUN_1801f7057(param_1,lVar7 + 0x60,lVar5), local_4c != 0))
    goto LAB_1801f7e98;
  }
  uVar9 = *(uint *)(param_1 + 4);
  if ((uVar9 & 2) == 0) {
    FUN_1801f864e(param_1 + 0x14,lVar7 + 0x60,0,0);
    FUN_1802a82f0(param_1[0x17],param_1[0x16],(ulonglong)*(ushort *)(param_1 + 0x14) << 3);
    uVar9 = *(uint *)(param_1 + 4);
  }
  iVar11 = 0;
  iVar8 = 0;
  if ((uVar9 & 1) == 0) {
    piVar10 = *(int **)(lVar7 + 0x68);
    piVar1 = piVar10 + ((ulonglong)uVar3 + 4) * 2;
    iVar8 = *(int *)(*(longlong *)(param_1[1] + 0x40) + 4);
    iVar11 = *(int *)(*(longlong *)(param_1[1] + 0x40) + 8);
    if (((*(ushort *)(*param_1 + 6) & 0x7fff) == 0) && ((*(byte *)(*param_1 + 9) & 0x80) == 0)) {
      do {
        lVar6 = (longlong)*piVar10 * (longlong)iVar8;
        *piVar10 = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
        lVar6 = (longlong)piVar10[1] * (longlong)iVar11;
        piVar10[1] = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
        piVar10 = piVar10 + 2;
      } while (piVar10 < piVar1);
    }
    else {
      lVar6 = 0;
      do {
        lVar12 = (longlong)*(int *)(lVar5 + lVar6) * (longlong)iVar8;
        piVar2 = (int *)((longlong)piVar10 + lVar6);
        *piVar2 = (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10) + 0x20 >> 6;
        lVar12 = (longlong)*(int *)(lVar5 + 4 + lVar6) * (longlong)iVar11;
        piVar2[1] = (int)((ulonglong)(lVar12 + 0x8000 + (lVar12 >> 0x3f)) >> 0x10) + 0x20 >> 6;
        lVar6 = lVar6 + 8;
        local_50 = iVar11;
      } while (piVar2 + 2 < piVar1);
    }
  }
  uVar9 = *(uint *)(param_1 + 4);
  if (((uVar9 & 2) == 0 & *(byte *)(*param_1 + 0x410) >> 1) == 1) {
    lVar6 = (longlong)(int)param_1[0xb] * (longlong)iVar8;
    *(int *)(param_1 + 0xb) = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
    lVar6 = (longlong)(int)param_1[0xc] * (longlong)iVar8;
    *(int *)(param_1 + 0xc) = (int)((ulonglong)(lVar6 + 0x8000 + (lVar6 >> 0x3f)) >> 0x10);
  }
  else {
    param_1[0xb] = *(longlong *)(*(longlong *)(lVar7 + 0x68) + (ulonglong)((uint)uVar3 * 8));
    param_1[0xc] = *(longlong *)(*(longlong *)(lVar7 + 0x68) + 8 + (ulonglong)((uint)uVar3 * 8));
  }
  if ((*(byte *)(*param_1 + 0x410) & 0x10) == 0) {
    param_1[0x1f] = *(longlong *)(*(longlong *)(lVar7 + 0x68) + 0x10 + (ulonglong)((uint)uVar3 * 8))
    ;
    param_1[0x20] = *(longlong *)(*(longlong *)(lVar7 + 0x68) + 0x18 + (ulonglong)((uint)uVar3 * 8))
    ;
    if ((uVar9 & 2) != 0) goto LAB_1801f7e98;
  }
  else {
    if ((uVar9 & 2) != 0) {
      param_1[0x1f] =
           *(longlong *)(*(longlong *)(lVar7 + 0x68) + 0x10 + (ulonglong)((uint)uVar3 * 8));
      param_1[0x20] =
           *(longlong *)(*(longlong *)(lVar7 + 0x68) + 0x18 + (ulonglong)((uint)uVar3 * 8));
      goto LAB_1801f7e98;
    }
    lVar7 = (longlong)(int)param_1[0x1f] * (longlong)iVar8;
    *(int *)(param_1 + 0x1f) = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
    lVar7 = (longlong)*(int *)((longlong)param_1 + 0xfc) * (longlong)iVar11;
    *(int *)((longlong)param_1 + 0xfc) =
         (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
    lVar7 = (longlong)(int)param_1[0x20] * (longlong)iVar8;
    *(int *)(param_1 + 0x20) = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
    lVar7 = (longlong)*(int *)((longlong)param_1 + 0x104) * (longlong)iVar11;
    *(int *)((longlong)param_1 + 0x104) =
         (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
  }
  local_4c = FUN_1801f86a9(param_1,0);
LAB_1801f7e98:
  FUN_1801c9b65(uVar4,lVar5);
  if (DAT_180402640 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_1802396d0(local_48 ^ (ulonglong)auStack_88);
  }
  return local_4c;
}

