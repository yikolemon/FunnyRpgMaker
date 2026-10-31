/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14007900c */

undefined8 FUN_14007900c(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  byte bVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint uVar8;
  ushort *puVar9;
  longlong lVar10;
  uint uVar11;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_14012ea80 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  uVar6 = FUN_14006fd2e(param_1,0x42444620,(longlong)param_2,(int *)&local_34);
  uVar7 = 8;
  if (7 < local_34 && (int)uVar6 == 0) {
    plVar1 = (longlong *)(param_1 + 0x4a0);
    iVar5 = FUN_140021039(param_2,local_34,plVar1);
    if (iVar5 == 0) {
      puVar3 = *(ushort **)(param_1 + 0x4a0);
      *(ulonglong *)(param_1 + 0x4a8) = (longlong)puVar3 + (ulonglong)local_34;
      if ((ushort)(*puVar3 << 8 | *puVar3 >> 8) == 1) {
        uVar8 = *(uint *)(puVar3 + 2);
        uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        if (7 < uVar8) {
          uVar4 = puVar3[1];
          bVar2 = *(byte *)((longlong)puVar3 + 3);
          uVar11 = (uint)(byte)uVar4 * 0x100 + (uint)bVar2;
          if (uVar8 < local_34 && uVar11 <= uVar8 - 8 >> 2) {
            *(uint *)(param_1 + 0x4bc) = uVar11;
            *(ushort **)(param_1 + 0x4b0) = (ushort *)((ulonglong)uVar8 + (longlong)puVar3);
            *(uint *)(param_1 + 0x4b8) = local_34 - uVar8;
            puVar9 = puVar3 + (ulonglong)uVar11 * 2 + 4;
            if (uVar11 != 0) {
              lVar10 = 0;
              do {
                puVar9 = puVar9 + (ulonglong)
                                  (ushort)(puVar3[lVar10 * 2 + 5] << 8 | puVar3[lVar10 * 2 + 5] >> 8
                                          ) * 5;
                lVar10 = lVar10 + 1;
              } while ((uint)CONCAT11((byte)uVar4,bVar2) != (uint)lVar10);
            }
            if (puVar9 <= (ushort *)((ulonglong)uVar8 + (longlong)puVar3)) {
              *(undefined1 *)(param_1 + 0x4c0) = 1;
              uVar7 = 0;
              goto LAB_14007916f;
            }
          }
        }
      }
      FUN_14002115a((longlong)param_2,plVar1);
      *(undefined8 *)(param_1 + 0x4b0) = 0;
      *(undefined8 *)(param_1 + 0x4b8) = 0;
      *plVar1 = 0;
      *(undefined8 *)(param_1 + 0x4a8) = 0;
      *(undefined8 *)(param_1 + 0x4c0) = 0;
    }
  }
LAB_14007916f:
  if (DAT_14012ea80 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar7;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086440(local_30 ^ (ulonglong)auStack_58);
}

