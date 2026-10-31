/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14017b0b8 */

undefined8 FUN_14017b0b8(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  byte bVar2;
  ushort *puVar3;
  ushort uVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  ushort *puVar8;
  longlong lVar9;
  uint uVar10;
  undefined1 auStack_58 [36];
  uint local_34;
  ulonglong local_30;
  
  local_30 = DAT_140f17b40 ^ (ulonglong)auStack_58;
  *(undefined8 *)(param_1 + 0x4b0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined8 *)(param_1 + 0x4a0) = 0;
  *(undefined8 *)(param_1 + 0x4a8) = 0;
  *(undefined8 *)(param_1 + 0x4c0) = 0;
  iVar5 = FUN_140171dda(0,0x42444620,param_2,&local_34);
  uVar6 = 8;
  if (7 < local_34 && iVar5 == 0) {
    puVar1 = (undefined8 *)(param_1 + 0x4a0);
    iVar5 = FUN_14012dc0a(param_2,(ulonglong)local_34,puVar1);
    if (iVar5 == 0) {
      puVar3 = *(ushort **)(param_1 + 0x4a0);
      *(ulonglong *)(param_1 + 0x4a8) = (longlong)puVar3 + (ulonglong)local_34;
      if ((ushort)(*puVar3 << 8 | *puVar3 >> 8) == 1) {
        uVar7 = *(uint *)(puVar3 + 2);
        uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        if (7 < uVar7) {
          uVar4 = puVar3[1];
          bVar2 = *(byte *)((longlong)puVar3 + 3);
          uVar10 = (uint)(byte)uVar4 * 0x100 + (uint)bVar2;
          if (uVar7 < local_34 && uVar10 <= uVar7 - 8 >> 2) {
            *(uint *)(param_1 + 0x4bc) = uVar10;
            *(ushort **)(param_1 + 0x4b0) = (ushort *)((ulonglong)uVar7 + (longlong)puVar3);
            *(uint *)(param_1 + 0x4b8) = local_34 - uVar7;
            puVar8 = puVar3 + (ulonglong)uVar10 * 2 + 4;
            if (uVar10 != 0) {
              lVar9 = 0;
              do {
                puVar8 = puVar8 + (ulonglong)
                                  (ushort)(puVar3[lVar9 * 2 + 5] << 8 | puVar3[lVar9 * 2 + 5] >> 8)
                                  * 5;
                lVar9 = lVar9 + 1;
              } while ((uint)CONCAT11((byte)uVar4,bVar2) != (uint)lVar9);
            }
            if (puVar8 <= (ushort *)((ulonglong)uVar7 + (longlong)puVar3)) {
              *(undefined1 *)(param_1 + 0x4c0) = 1;
              uVar6 = 0;
              goto LAB_14017b21b;
            }
          }
        }
      }
      FUN_14012dd2b(param_2,puVar1);
      *(undefined8 *)(param_1 + 0x4b0) = 0;
      *(undefined8 *)(param_1 + 0x4b8) = 0;
      *puVar1 = 0;
      *(undefined8 *)(param_1 + 0x4a8) = 0;
      *(undefined8 *)(param_1 + 0x4c0) = 0;
    }
  }
LAB_14017b21b:
  if (DAT_140f17b40 == (local_30 ^ (ulonglong)auStack_58)) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_30 ^ (ulonglong)auStack_58);
}

