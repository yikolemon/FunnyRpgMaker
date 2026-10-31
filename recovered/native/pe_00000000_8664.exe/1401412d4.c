/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401412d4 */

undefined8 FUN_1401412d4(longlong param_1,uint *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  ulonglong uVar8;
  longlong lVar9;
  byte *pbVar10;
  bool bVar11;
  
  if ((((*(longlong *)(param_1 + 0x408) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x408) + 0x10) != 0)) &&
      (param_4 != 0xffff || param_3 != 0xffff)) && (param_3 < *param_2)) {
    if (param_4 < *(uint *)(*(longlong *)(param_2 + 2) + (ulonglong)param_3 * 0x20)) {
      lVar9 = *(longlong *)(param_2 + 2) + (ulonglong)param_3 * 0x20;
      if (*(int *)(lVar9 + 4) != 0) {
        bVar11 = *(char *)(lVar9 + 0x1a) != '\0';
        pbVar10 = (byte *)((ulonglong)
                           ((*(int *)(lVar9 + 4) + (uint)*(ushort *)(lVar9 + 0x18) << bVar11) *
                           param_4) + *(longlong *)(lVar9 + 0x10));
        uVar6 = 0;
        uVar8 = 0;
        do {
          iVar5 = FUN_14014383b(*(undefined8 *)
                                 (*(longlong *)(param_2 + 6) +
                                 (ulonglong)*(uint *)(*(longlong *)(lVar9 + 8) + uVar8 * 4) * 8),
                                (short)param_2[4],
                                *(undefined8 *)(*(longlong *)(param_1 + 0x408) + 0x10));
          if (iVar5 == 0) {
            pbVar10 = pbVar10 + (bVar11 + 1 << (uVar8 < *(ushort *)(lVar9 + 0x18)));
          }
          else {
            bVar4 = *pbVar10;
            if (*(char *)(lVar9 + 0x1a) == '\0') {
              if (uVar8 < *(ushort *)(lVar9 + 0x18)) {
                pbVar1 = pbVar10 + 1;
                pbVar10 = pbVar10 + 2;
                uVar7 = (int)(short)((ushort)bVar4 << 8) | (uint)*pbVar1;
              }
              else {
                pbVar10 = pbVar10 + 1;
                uVar7 = (uint)(char)bVar4;
              }
            }
            else {
              pbVar1 = pbVar10 + 1;
              if (uVar8 < *(ushort *)(lVar9 + 0x18)) {
                pbVar2 = pbVar10 + 2;
                pbVar3 = pbVar10 + 3;
                pbVar10 = pbVar10 + 4;
                uVar7 = (uint)*pbVar3 |
                        (uint)*pbVar2 << 8 | (uint)*pbVar1 << 0x10 | (uint)bVar4 << 0x18;
              }
              else {
                pbVar10 = pbVar10 + 2;
                uVar7 = (uint)CONCAT11(bVar4,*pbVar1);
              }
            }
            uVar6 = FUN_1401438c4(uVar6,uVar7,iVar5);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(lVar9 + 4));
        uVar6 = FUN_1401438d2(uVar6);
        return uVar6;
      }
    }
  }
  return 0;
}

