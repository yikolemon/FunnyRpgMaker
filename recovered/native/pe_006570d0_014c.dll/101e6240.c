/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e6240 */

undefined4 FUN_101e6240(int param_1,uint *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte *pbVar11;
  bool bVar12;
  undefined8 uVar13;
  int iVar14;
  
  if ((*(int *)(param_1 + 0x2e0) != 0) && (*(int *)(*(int *)(param_1 + 0x2e0) + 8) != 0)) {
    if ((param_4 != 0xffff || param_3 != 0xffff) &&
       ((param_3 < *param_2 && (param_4 < *(uint *)(param_2[1] + param_3 * 0x14))))) {
      iVar4 = param_2[1] + param_3 * 0x14;
      if (*(int *)(iVar4 + 4) != 0) {
        bVar12 = *(char *)(iVar4 + 0x12) != '\0';
        pbVar11 = (byte *)((*(int *)(iVar4 + 4) + (uint)*(ushort *)(iVar4 + 0x10) << bVar12) *
                           param_4 + *(int *)(iVar4 + 0xc));
        iVar8 = bVar12 + 1;
        uVar10 = 0;
        uVar13 = 0;
        iVar14 = param_1;
        do {
          iVar6 = FUN_101e8455(*(undefined4 *)(*(int *)(param_1 + 0x2e0) + 8),uVar13,iVar8,iVar14,
                               param_2);
          if (iVar6 == 0) {
            pbVar11 = pbVar11 + (iVar8 << (uVar10 < *(ushort *)(iVar4 + 0x10)));
          }
          else {
            bVar5 = *pbVar11;
            if (*(char *)(iVar4 + 0x12) == '\0') {
              if (uVar10 < *(ushort *)(iVar4 + 0x10)) {
                pbVar1 = pbVar11 + 1;
                pbVar11 = pbVar11 + 2;
                uVar9 = (int)(short)((ushort)bVar5 << 8) | (uint)*pbVar1;
              }
              else {
                pbVar11 = pbVar11 + 1;
                uVar9 = (uint)(char)bVar5;
              }
            }
            else {
              pbVar1 = pbVar11 + 1;
              if (uVar10 < *(ushort *)(iVar4 + 0x10)) {
                pbVar2 = pbVar11 + 2;
                pbVar3 = pbVar11 + 3;
                pbVar11 = pbVar11 + 4;
                uVar9 = (uint)*pbVar3 |
                        (uint)*pbVar2 << 8 | (uint)*pbVar1 << 0x10 | (uint)bVar5 << 0x18;
              }
              else {
                pbVar11 = pbVar11 + 2;
                uVar9 = (uint)CONCAT11(bVar5,*pbVar1);
              }
            }
            param_1 = iVar14;
            uVar13 = FUN_101e84e2(uVar9,iVar6);
            iVar14 = param_1;
          }
          uVar10 = uVar10 + 1;
        } while (uVar10 < *(uint *)(iVar4 + 4));
        uVar7 = FUN_101e84f3();
        return uVar7;
      }
    }
  }
  return 0;
}

