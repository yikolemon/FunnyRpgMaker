/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00434ad8 */

int __fastcall FUN_00434ad8(uint *param_1,int param_2,int param_3)

{
  ushort uVar1;
  undefined4 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  int local_38;
  int local_34;
  byte *local_30;
  uint *local_2c;
  ushort local_26;
  int local_24 [4];
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_38;
  local_2c = param_1;
  FUN_00434bc7(local_24,(ushort *)
                        ((uint)*(byte *)(param_2 + 3) + param_2 +
                        (uint)*(byte *)(param_2 + 2) * 0x100));
  uVar2 = FUN_00434bf6(local_24,&local_26);
  iVar4 = 0;
  if ((char)uVar2 != '\0') {
    pbVar8 = (byte *)(param_2 + 6);
    local_38 = param_2 + 3;
    local_34 = param_2;
    do {
      uVar3 = *(ushort *)((uint)pbVar8[1] + local_34 + (uint)*pbVar8 * 0x100);
      uVar3 = uVar3 << 8 | uVar3 >> 8;
      local_30 = pbVar8;
      if (uVar3 != 0) {
        iVar5 = (uint)CONCAT11(*pbVar8,pbVar8[1]) + local_38;
        uVar7 = 0;
        uVar6 = (uint)local_26;
        do {
          uVar1 = *(ushort *)(iVar5 + -1 + uVar7 * 2);
          iVar4 = FUN_00434c5a(uVar6,(uint)(ushort)(uVar1 << 8 | uVar1 >> 8),local_2c,param_3);
          if (iVar4 != 0) goto LAB_00434ba2;
          uVar7 = uVar7 + 1;
        } while (uVar3 != uVar7);
      }
      pbVar8 = local_30 + 2;
      uVar2 = FUN_00434bf6(local_24,&local_26);
    } while ((char)uVar2 != '\0');
    iVar4 = 0;
  }
LAB_00434ba2:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_38)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_38);
  }
  return iVar4;
}

