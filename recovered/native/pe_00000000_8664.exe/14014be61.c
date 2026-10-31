/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14014be61 */

int FUN_14014be61(longlong param_1,longlong param_2,longlong param_3)

{
  ushort *puVar1;
  undefined1 *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  ushort *puVar5;
  longlong lVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  ushort *puVar12;
  uint uVar13;
  undefined1 auStack_88 [32];
  undefined8 local_68;
  int *local_60;
  undefined8 local_58;
  int local_4c;
  ulonglong local_48;
  
  local_48 = DAT_140f17b40 ^ (ulonglong)auStack_88;
  local_4c = 0;
  uVar4 = *(undefined8 *)(param_2 + 0x30);
  lVar9 = *(longlong *)(param_2 + 0x38);
  puVar5 = *(ushort **)(param_2 + 0x40);
  if (puVar5 < (ushort *)(lVar9 + 0x65U)) goto LAB_14014bea3;
  lVar10 = lVar9 + (ulonglong)*(byte *)(lVar9 + 100) * 0x100 + 99;
  iVar8 = 0;
  if (((puVar5 < (ushort *)((ulonglong)*(byte *)(lVar9 + 99) + lVar10 + 0x24)) ||
      (lVar10 = lVar10 + (ulonglong)*(byte *)(lVar9 + 99), *(ushort *)(lVar10 + 0x12) < 0x12)) ||
     (uVar11 = (ulonglong)*(uint *)(lVar10 + 0x20), iVar8 = 0, uVar11 == 0)) goto LAB_14014c033;
  puVar12 = (ushort *)(lVar9 + uVar11);
  puVar1 = puVar12 + 1;
  if (puVar5 < puVar1) {
LAB_14014bea3:
    local_4c = 2;
  }
  else {
    uVar3 = *puVar12;
    *(uint *)(param_3 + 0x38) = (uint)uVar3;
    if (puVar5 < puVar1 + (ulonglong)uVar3 * 2) goto LAB_14014bea3;
    if (uVar3 == 0) goto LAB_14014c033;
    local_60 = &local_4c;
    local_68 = 0;
    lVar9 = FUN_14012b8aa(uVar4,0x10,0);
    *(longlong *)(param_3 + 0x30) = lVar9;
    if (local_4c == 0) {
      uVar13 = *(int *)(param_3 + 0x38) << 2;
      local_58 = *(undefined8 *)(param_1 + 0x88);
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
          puVar2 = (undefined1 *)((longlong)puVar1 + lVar10);
          uVar7 = FUN_14012a655(param_1,*puVar2);
          *(undefined4 *)(lVar9 + lVar10 * 4) = uVar7;
          uVar7 = FUN_14012a655(param_1,puVar2[1]);
          *(undefined4 *)(lVar9 + 4 + lVar10 * 4) = uVar7;
          *(int *)(lVar9 + 8 + lVar10 * 4) = (int)*(short *)(puVar2 + 2);
          *(undefined4 *)(lVar9 + 0xc + lVar10 * 4) = 0;
          lVar10 = lVar10 + 4;
        } while (puVar2 + 4 < (undefined1 *)((ulonglong)uVar13 + (longlong)puVar1));
      }
      *(undefined8 *)(param_1 + 0x88) = local_58;
      FUN_1401a7460(*(undefined8 *)(param_3 + 0x30),*(undefined4 *)(param_3 + 0x38),0x10,
                    &LAB_14014c066);
      if (local_4c == 0) {
        iVar8 = 0;
        goto LAB_14014c033;
      }
    }
  }
  FUN_140128b39(uVar4,*(undefined8 *)(param_3 + 0x30));
  *(undefined8 *)(param_3 + 0x30) = 0;
  *(undefined4 *)(param_3 + 0x38) = 0;
  iVar8 = local_4c;
LAB_14014c033:
  if (DAT_140f17b40 != (local_48 ^ (ulonglong)auStack_88)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_48 ^ (ulonglong)auStack_88);
  }
  return iVar8;
}

