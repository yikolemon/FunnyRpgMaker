/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14003f21c */

int FUN_14003f21c(longlong param_1,uint *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  longlong lVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  byte *pbVar11;
  bool bVar12;
  
  if ((((*(longlong *)(param_1 + 0x408) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x408) + 0x10) != 0)) &&
      (param_4 != 0xffff || param_3 != 0xffff)) && (param_3 < *param_2)) {
    if (param_4 < *(uint *)(*(longlong *)(param_2 + 2) + (ulonglong)param_3 * 0x20)) {
      lVar10 = *(longlong *)(param_2 + 2) + (ulonglong)param_3 * 0x20;
      if (*(int *)(lVar10 + 4) != 0) {
        bVar12 = *(char *)(lVar10 + 0x1a) != '\0';
        pbVar11 = (byte *)((ulonglong)
                           ((*(int *)(lVar10 + 4) + (uint)*(ushort *)(lVar10 + 0x18) << bVar12) *
                           param_4) + *(longlong *)(lVar10 + 0x10));
        lVar7 = 0;
        uVar9 = 0;
        do {
          uVar5 = FUN_140041783(*(longlong *)
                                 (*(longlong *)(param_2 + 6) +
                                 (ulonglong)*(uint *)(*(longlong *)(lVar10 + 8) + uVar9 * 4) * 8),
                                (uint)(ushort)param_2[4],
                                *(longlong *)(*(longlong *)(param_1 + 0x408) + 0x10));
          if (uVar5 == 0) {
            pbVar11 = pbVar11 + (bVar12 + 1 << (uVar9 < *(ushort *)(lVar10 + 0x18)));
          }
          else {
            bVar4 = *pbVar11;
            if (*(char *)(lVar10 + 0x1a) == '\0') {
              if (uVar9 < *(ushort *)(lVar10 + 0x18)) {
                pbVar1 = pbVar11 + 1;
                pbVar11 = pbVar11 + 2;
                uVar8 = (int)(short)((ushort)bVar4 << 8) | (uint)*pbVar1;
              }
              else {
                pbVar11 = pbVar11 + 1;
                uVar8 = (uint)(char)bVar4;
              }
            }
            else {
              pbVar1 = pbVar11 + 1;
              if (uVar9 < *(ushort *)(lVar10 + 0x18)) {
                pbVar2 = pbVar11 + 2;
                pbVar3 = pbVar11 + 3;
                pbVar11 = pbVar11 + 4;
                uVar8 = (uint)*pbVar3 |
                        (uint)*pbVar2 << 8 | (uint)*pbVar1 << 0x10 | (uint)bVar4 << 0x18;
              }
              else {
                pbVar11 = pbVar11 + 2;
                uVar8 = (uint)CONCAT11(bVar4,*pbVar1);
              }
            }
            lVar7 = FUN_14004180c(lVar7,uVar8,uVar5);
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < *(uint *)(lVar10 + 4));
        iVar6 = FUN_14004181a((int)lVar7);
        return iVar6;
      }
    }
  }
  return 0;
}

