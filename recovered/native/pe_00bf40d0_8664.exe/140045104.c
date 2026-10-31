/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140045104 */

int FUN_140045104(longlong *param_1)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  longlong lVar14;
  undefined1 auStackY_88 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  local_4c = 0;
  lVar8 = param_1[3];
  uVar3 = *(ushort *)(lVar8 + 0x62);
  lVar4 = *(longlong *)(*param_1 + 0x98);
  lVar5 = (ulonglong)uVar3 * 8;
  *(longlong *)(*(longlong *)(lVar8 + 0x68) + lVar5) = param_1[0xb];
  *(longlong *)(*(longlong *)(lVar8 + 0x68) + 8 + lVar5) = param_1[0xc];
  *(longlong *)(*(longlong *)(lVar8 + 0x68) + 0x10 + lVar5) = param_1[0x1f];
  *(longlong *)(*(longlong *)(lVar8 + 0x68) + 0x18 + lVar5) = param_1[0x20];
  if (((*(ushort *)(*param_1 + 6) & 0x7fff) == 0) && ((*(byte *)(*param_1 + 9) & 0x80) == 0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = FUN_14001f231(lVar4,8,0,(uint)((ulonglong)uVar3 + 4),0,&local_4c);
    if (local_4c != 0) goto LAB_1400454cc;
    uVar6 = FUN_14004468b(param_1,(ushort *)(lVar8 + 0x60),lVar5);
    local_4c = (int)uVar6;
    if (local_4c != 0) goto LAB_1400454cc;
  }
  uVar11 = *(uint *)(param_1 + 4);
  if ((uVar11 & 2) == 0) {
    FUN_140045c82((short *)(param_1 + 0x14),(undefined4 *)(lVar8 + 0x60),0,0);
    FUN_1400b3550((undefined8 *)param_1[0x17],(undefined8 *)param_1[0x16],
                  (ulonglong)*(ushort *)(param_1 + 0x14) << 3);
    uVar11 = *(uint *)(param_1 + 4);
  }
  iVar13 = 0;
  iVar10 = 0;
  if ((uVar11 & 1) == 0) {
    piVar12 = *(int **)(lVar8 + 0x68);
    piVar1 = piVar12 + ((ulonglong)uVar3 + 4) * 2;
    iVar10 = *(int *)(*(longlong *)(param_1[1] + 0x40) + 4);
    iVar13 = *(int *)(*(longlong *)(param_1[1] + 0x40) + 8);
    if (((*(ushort *)(*param_1 + 6) & 0x7fff) == 0) && ((*(byte *)(*param_1 + 9) & 0x80) == 0)) {
      do {
        lVar7 = (longlong)*piVar12 * (longlong)iVar10;
        *piVar12 = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
        lVar7 = (longlong)piVar12[1] * (longlong)iVar13;
        piVar12[1] = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
        piVar12 = piVar12 + 2;
      } while (piVar12 < piVar1);
    }
    else {
      lVar7 = 0;
      do {
        lVar14 = (longlong)*(int *)(lVar5 + lVar7) * (longlong)iVar10;
        piVar2 = (int *)((longlong)piVar12 + lVar7);
        *piVar2 = (int)((ulonglong)(lVar14 + 0x8000 + (lVar14 >> 0x3f)) >> 0x10) + 0x20 >> 6;
        lVar14 = (longlong)*(int *)(lVar5 + 4 + lVar7) * (longlong)iVar13;
        piVar2[1] = (int)((ulonglong)(lVar14 + 0x8000 + (lVar14 >> 0x3f)) >> 0x10) + 0x20 >> 6;
        lVar7 = lVar7 + 8;
      } while (piVar2 + 2 < piVar1);
    }
  }
  uVar11 = *(uint *)(param_1 + 4);
  if (((uVar11 & 2) == 0 & *(byte *)(*param_1 + 0x410) >> 1) == 1) {
    lVar7 = (longlong)(int)param_1[0xb] * (longlong)iVar10;
    *(int *)(param_1 + 0xb) = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
    lVar7 = (longlong)(int)param_1[0xc] * (longlong)iVar10;
    *(int *)(param_1 + 0xc) = (int)((ulonglong)(lVar7 + 0x8000 + (lVar7 >> 0x3f)) >> 0x10);
  }
  else {
    param_1[0xb] = *(longlong *)(*(longlong *)(lVar8 + 0x68) + (ulonglong)((uint)uVar3 * 8));
    param_1[0xc] = *(longlong *)(*(longlong *)(lVar8 + 0x68) + 8 + (ulonglong)((uint)uVar3 * 8));
  }
  if ((*(byte *)(*param_1 + 0x410) & 0x10) == 0) {
    param_1[0x1f] = *(longlong *)(*(longlong *)(lVar8 + 0x68) + 0x10 + (ulonglong)((uint)uVar3 * 8))
    ;
    param_1[0x20] = *(longlong *)(*(longlong *)(lVar8 + 0x68) + 0x18 + (ulonglong)((uint)uVar3 * 8))
    ;
    if ((uVar11 & 2) != 0) goto LAB_1400454cc;
  }
  else {
    if ((uVar11 & 2) != 0) {
      param_1[0x1f] =
           *(longlong *)(*(longlong *)(lVar8 + 0x68) + 0x10 + (ulonglong)((uint)uVar3 * 8));
      param_1[0x20] =
           *(longlong *)(*(longlong *)(lVar8 + 0x68) + 0x18 + (ulonglong)((uint)uVar3 * 8));
      goto LAB_1400454cc;
    }
    lVar8 = (longlong)(int)param_1[0x1f] * (longlong)iVar10;
    *(int *)(param_1 + 0x1f) = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
    lVar8 = (longlong)*(int *)((longlong)param_1 + 0xfc) * (longlong)iVar13;
    *(int *)((longlong)param_1 + 0xfc) =
         (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
    lVar8 = (longlong)(int)param_1[0x20] * (longlong)iVar10;
    *(int *)(param_1 + 0x20) = (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
    lVar8 = (longlong)*(int *)((longlong)param_1 + 0x104) * (longlong)iVar13;
    *(int *)((longlong)param_1 + 0x104) =
         (int)((ulonglong)(lVar8 + 0x8000 + (lVar8 >> 0x3f)) >> 0x10);
  }
  uVar9 = FUN_140045cdd((longlong)param_1,'\0');
  local_4c = (int)uVar9;
LAB_1400454cc:
  FUN_14001c53d(lVar4,lVar5);
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
  }
  return local_4c;
}

