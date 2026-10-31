/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004994c7 */

void FUN_004994c7(uint *param_1,byte *param_2,uint param_3,uint *param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  char local_24;
  byte *local_20;
  uint local_1c;
  byte local_15;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  puVar9 = (uint *)&DAT_00521f00;
  if (param_4 != (uint *)0x0) {
    puVar9 = param_4;
  }
  local_1c = 1;
  if (param_2 != (byte *)0x0) {
    local_1c = param_3;
  }
  local_20 = (byte *)0x504c95;
  if (param_2 != (byte *)0x0) {
    local_20 = param_2;
  }
  puVar6 = (uint *)0x0;
  if (param_2 != (byte *)0x0) {
    puVar6 = param_1;
  }
  if (local_1c == 0) goto LAB_00499671;
  if (*(short *)((int)puVar9 + 6) == 0) {
    uVar3 = FUN_00499486(local_20);
    local_15 = *local_20;
    local_20 = local_20 + 1;
    if ((uVar3 == 0) || (uVar3 == 1)) {
      if (puVar6 != (uint *)0x0) {
        *puVar6 = (uint)local_15;
      }
      goto LAB_00499671;
    }
    if ((1 < (int)uVar3) && ((int)uVar3 < 5)) {
      uVar5 = uVar3 & 0xff;
      uVar8 = (1 << (7U - (char)uVar3 & 0x1f)) - 1U & (uint)local_15;
      goto LAB_004995ad;
    }
  }
  else {
    bVar2 = (byte)puVar9[1];
    uVar3 = (uint)bVar2;
    uVar8 = *puVar9;
    bVar1 = *(byte *)((int)puVar9 + 6);
    uVar5 = (uint)bVar1;
    if ((((byte)(bVar2 - 2) < 3) && (bVar1 != 0)) && (bVar1 < bVar2)) {
LAB_004995ad:
      uVar4 = uVar5;
      if (local_1c <= uVar5) {
        uVar4 = local_1c;
      }
      local_1c = (int)local_20 - (int)param_2;
      uVar7 = uVar5;
      while (local_1c < uVar4) {
        bVar2 = *local_20;
        uVar7 = (uint)CONCAT11(bVar2,(char)uVar7);
        local_20 = local_20 + 1;
        local_1c = local_1c + 1;
        if ((bVar2 & 0xc0) != 0x80) goto LAB_00499669;
        uVar8 = uVar8 << 6 | bVar2 & 0x3f;
      }
      if (uVar4 < uVar5) {
        local_24 = (char)uVar4;
        *(ushort *)(puVar9 + 1) = (ushort)uVar3 & 0xff;
        *puVar9 = uVar8;
        *(ushort *)((int)puVar9 + 6) = (ushort)(byte)((char)uVar7 - local_24);
        goto LAB_00499671;
      }
      if (((uVar8 < 0xd800) || (0xdfff < uVar8)) && (uVar8 < 0x110000)) {
        local_14 = 0x80;
        local_10 = 0x800;
        local_c = 0x10000;
        if ((&local_1c)[uVar3 & 0xff] <= uVar8) {
          if (puVar6 != (uint *)0x0) {
            *puVar6 = uVar8;
          }
          if (uVar8 == 0) {
            uVar5 = 0;
          }
          FUN_004a515f(uVar5,puVar9);
          goto LAB_00499671;
        }
      }
    }
  }
LAB_00499669:
  FUN_004a513d(puVar9,param_5);
LAB_00499671:
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_8 ^ (uint)&stack0xfffffffc);
}

