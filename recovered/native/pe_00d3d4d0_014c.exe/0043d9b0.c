/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0043d9b0 */

int __cdecl FUN_0043d9b0(int param_1,uint *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  bool bVar10;
  undefined8 local_24;
  
  if ((*(int *)(param_1 + 0x2e0) != 0) && (*(int *)(*(int *)(param_1 + 0x2e0) + 8) != 0)) {
    if ((param_4 != 0xffff || param_3 != 0xffff) &&
       ((param_3 < *param_2 && (param_4 < *(uint *)(param_2[1] + param_3 * 0x14))))) {
      iVar6 = param_2[1] + param_3 * 0x14;
      if (*(int *)(iVar6 + 4) != 0) {
        bVar10 = *(char *)(iVar6 + 0x12) != '\0';
        pbVar9 = (byte *)((*(int *)(iVar6 + 4) + (uint)*(ushort *)(iVar6 + 0x10) << bVar10) *
                          param_4 + *(int *)(iVar6 + 0xc));
        uVar8 = 0;
        local_24 = 0;
        do {
          uVar5 = FUN_0043fbc5(*(int *)(param_2[4] + *(int *)(*(int *)(iVar6 + 8) + uVar8 * 4) * 4),
                               (uint)(ushort)param_2[2],*(int *)(*(int *)(param_1 + 0x2e0) + 8));
          if (uVar5 == 0) {
            pbVar9 = pbVar9 + (bVar10 + 1 << (uVar8 < *(ushort *)(iVar6 + 0x10)));
          }
          else {
            bVar4 = *pbVar9;
            if (*(char *)(iVar6 + 0x12) == '\0') {
              if (uVar8 < *(ushort *)(iVar6 + 0x10)) {
                pbVar1 = pbVar9 + 1;
                pbVar9 = pbVar9 + 2;
                uVar7 = (int)(short)((ushort)bVar4 << 8) | (uint)*pbVar1;
              }
              else {
                pbVar9 = pbVar9 + 1;
                uVar7 = (uint)(char)bVar4;
              }
            }
            else {
              pbVar1 = pbVar9 + 1;
              if (uVar8 < *(ushort *)(iVar6 + 0x10)) {
                pbVar2 = pbVar9 + 2;
                pbVar3 = pbVar9 + 3;
                pbVar9 = pbVar9 + 4;
                uVar7 = (uint)*pbVar3 |
                        (uint)*pbVar2 << 8 | (uint)*pbVar1 << 0x10 | (uint)bVar4 << 0x18;
              }
              else {
                pbVar9 = pbVar9 + 2;
                uVar7 = (uint)CONCAT11(bVar4,*pbVar1);
              }
            }
            local_24 = FUN_0043fc52((int)local_24,local_24._4_4_,uVar7,uVar5);
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 < *(uint *)(iVar6 + 4));
        iVar6 = FUN_0043fc63((int)local_24);
        return iVar6;
      }
    }
  }
  return 0;
}

