/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00438192 */

undefined4 __fastcall FUN_00438192(int param_1,ushort *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  int iVar5;
  byte *pbVar6;
  ushort *puVar7;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_18;
  uVar1 = FUN_00438240((ushort *)
                       ((uint)*(byte *)(param_1 + 3) + param_1 +
                       (uint)*(byte *)(param_1 + 2) * 0x100),param_2,&local_18);
  if ((char)uVar1 != '\0') {
    uVar2 = (uint)(ushort)(*(ushort *)(param_1 + 4) << 8 | *(ushort *)(param_1 + 4) >> 8);
    puVar4 = (ushort *)(param_1 + uVar2 * 2 + 6);
    uVar1 = 0;
    if ((param_2 < puVar4) || (uVar2 != local_18)) goto LAB_00438219;
    puVar3 = (ushort *)(param_1 + 6);
    do {
      if (puVar4 <= puVar3) {
        uVar1 = CONCAT31((int3)((uint)puVar3 >> 8),1);
        goto LAB_00438219;
      }
      iVar5 = (uint)(byte)*puVar3 * 0x100 + param_1;
      puVar7 = (ushort *)(iVar5 + (uint)*(byte *)((int)puVar3 + 1) + 2);
    } while ((puVar7 <= param_2) &&
            (pbVar6 = (byte *)(iVar5 + (uint)*(byte *)((int)puVar3 + 1)), puVar3 = puVar3 + 1,
            puVar7 + (uint)*pbVar6 * 0x100 + (uint)pbVar6[1] <= param_2));
  }
  uVar1 = 0;
LAB_00438219:
  if (DAT_0050e8c0 == (local_14 ^ (uint)&local_18)) {
    return uVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&local_18);
}

