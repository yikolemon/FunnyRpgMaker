/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1014fa09 */

undefined4 FUN_1014fa09(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_44;
  puVar3 = (undefined4 *)FUN_1014f645(param_1,*(undefined4 *)(param_1 + 0x74));
  if ((puVar3 != (undefined4 *)0x0) && ((puVar3[1] & 0x20) == 0)) {
    iVar5 = *(int *)(param_1 + 0xc);
    iVar6 = (int)*(short *)(param_1 + 0x78);
    iVar8 = ((int)puVar3 - iVar5 >> 4) * -0x55555555 + iVar6;
    if ((-1 < iVar8) && (iVar8 < *(int *)(param_1 + 4))) {
      uVar1 = *(uint *)(iVar5 + 4 + iVar8 * 0x30);
      if (((uVar1 & 0x20) == 0) && (((uVar1 ^ puVar3[1]) & 0xc0) == 0)) {
        puVar9 = (undefined4 *)(iVar5 + iVar8 * 0x30);
        local_24 = puVar3[8];
        uStack_20 = puVar3[9];
        uStack_1c = puVar3[10];
        uStack_18 = puVar3[0xb];
        local_44 = *puVar3;
        uStack_40 = puVar3[1];
        uStack_3c = puVar3[2];
        uStack_38 = puVar3[3];
        local_34 = puVar3[4];
        uStack_30 = puVar3[5];
        uStack_2c = puVar3[6];
        uStack_28 = puVar3[7];
        puVar7 = puVar9 + 0xc;
        puVar2 = puVar9;
        if (0 < *(short *)(param_1 + 0x78)) {
          puVar7 = puVar3;
          puVar2 = puVar3 + 0xc;
        }
        iVar5 = -iVar6;
        if (-iVar6 < 0) {
          iVar5 = iVar6;
        }
        FUN_1025b2d0(puVar7,puVar2,iVar5 * 0x30);
        puVar9[8] = local_24;
        puVar9[9] = uStack_20;
        puVar9[10] = uStack_1c;
        puVar9[0xb] = uStack_18;
        puVar9[4] = local_34;
        puVar9[5] = uStack_30;
        puVar9[6] = uStack_2c;
        puVar9[7] = uStack_28;
        *puVar9 = local_44;
        puVar9[1] = uStack_40;
        puVar9[2] = uStack_3c;
        puVar9[3] = uStack_38;
        if ((*(byte *)(param_1 + 0x12) & 0x40) != 0) {
          FUN_10118556();
        }
        uVar4 = 1;
        goto LAB_1014fa6c;
      }
    }
  }
  uVar4 = 0;
LAB_1014fa6c:
  if (DAT_10388d00 == (local_14 ^ (uint)&local_44)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

