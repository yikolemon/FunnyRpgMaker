/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140049daf */

int FUN_140049daf(longlong param_1,longlong param_2,longlong param_3)

{
  ushort *puVar1;
  ushort uVar2;
  longlong lVar3;
  ushort *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ushort *puVar12;
  uint uVar13;
  undefined1 auStackY_88 [32];
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_14012ea80 ^ (ulonglong)auStackY_88;
  local_4c = 0;
  lVar3 = *(longlong *)(param_2 + 0x30);
  lVar9 = *(longlong *)(param_2 + 0x38);
  puVar4 = *(ushort **)(param_2 + 0x40);
  if (puVar4 < (ushort *)(lVar9 + 0x65U)) goto LAB_140049df1;
  lVar10 = lVar9 + (ulonglong)*(byte *)(lVar9 + 100) * 0x100 + 99;
  iVar8 = 0;
  if (((puVar4 < (ushort *)((ulonglong)*(byte *)(lVar9 + 99) + lVar10 + 0x24)) ||
      (lVar10 = lVar10 + (ulonglong)*(byte *)(lVar9 + 99), *(ushort *)(lVar10 + 0x12) < 0x12)) ||
     (uVar11 = (ulonglong)*(uint *)(lVar10 + 0x20), uVar11 == 0)) goto LAB_140049f81;
  puVar12 = (ushort *)(lVar9 + uVar11);
  puVar1 = puVar12 + 1;
  if (puVar4 < puVar1) {
LAB_140049df1:
    local_4c = 2;
  }
  else {
    uVar2 = *puVar12;
    *(uint *)(param_3 + 0x38) = (uint)uVar2;
    if (puVar4 < puVar1 + (ulonglong)uVar2 * 2) goto LAB_140049df1;
    if (uVar2 == 0) goto LAB_140049f81;
    lVar9 = FUN_14001f231(lVar3,0x10,0,(uint)uVar2,0,&local_4c);
    *(longlong *)(param_3 + 0x30) = lVar9;
    if (local_4c == 0) {
      uVar13 = *(int *)(param_3 + 0x38) << 2;
      uVar5 = *(undefined8 *)(param_1 + 0x88);
      if (0 < (longlong)*(int *)(param_1 + 0x38)) {
        lVar10 = 0;
        do {
          lVar6 = *(longlong *)(*(longlong *)(param_1 + 0x40) + lVar10 * 8);
          if (*(short *)(lVar6 + 0xc) == 7) {
            *(longlong *)(param_1 + 0x88) = lVar6;
            break;
          }
          lVar10 = lVar10 + 1;
        } while (*(int *)(param_1 + 0x38) != lVar10);
      }
      if (uVar13 != 0) {
        lVar10 = 0;
        do {
          lVar6 = lVar10 + 4;
          uVar7 = FUN_14001e059(param_1);
          *(uint *)(lVar9 + lVar10 * 4) = uVar7;
          uVar7 = FUN_14001e059(param_1);
          *(uint *)(lVar9 + 4 + lVar10 * 4) = uVar7;
          *(int *)(lVar9 + 8 + lVar10 * 4) = (int)*(short *)((longlong)puVar1 + lVar10 + 2);
          *(undefined4 *)(lVar9 + 0xc + lVar10 * 4) = 0;
          lVar10 = lVar10 + 4;
        } while ((ulonglong)((longlong)puVar1 + lVar6) < (ulonglong)uVar13 + (longlong)puVar1);
      }
      *(undefined8 *)(param_1 + 0x88) = uVar5;
      FUN_14009aaf0(*(undefined1 **)(param_3 + 0x30),(ulonglong)*(uint *)(param_3 + 0x38),0x10,
                    &LAB_140049fb4);
      if (local_4c == 0) {
        iVar8 = 0;
        goto LAB_140049f81;
      }
    }
  }
  FUN_14001c53d(lVar3,*(longlong *)(param_3 + 0x30));
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined4 *)(param_3 + 0x38) = 0;
  iVar8 = local_4c;
LAB_140049f81:
  if (DAT_14012ea80 != (local_48 ^ (ulonglong)auStackY_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140086440(local_48 ^ (ulonglong)auStackY_88);
  }
  return iVar8;
}

