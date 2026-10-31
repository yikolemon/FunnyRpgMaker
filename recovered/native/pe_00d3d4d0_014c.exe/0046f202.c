/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0046f202 */

int __fastcall
FUN_0046f202(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            char param_6)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  ushort *puVar4;
  ushort uVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  ushort *local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int *local_34;
  ushort local_2e;
  uint local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_1c;
  uint *local_18;
  uint local_14;
  
  local_14 = DAT_0050e8c0 ^ (uint)&local_44;
  iVar3 = 8;
  if (100 < param_5) goto LAB_0046f28c;
  local_34 = param_1;
  if (param_1[8] != 0) {
    local_38 = param_1[7];
    local_40 = param_1[9];
    local_3c = local_40 + local_38;
    local_44 = (ushort *)param_1[10];
    iVar6 = 0;
LAB_0046f253:
    uVar5 = *(ushort *)(local_38 + local_40 + iVar6 * 8);
    uVar7 = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
    iVar11 = param_2 - uVar7;
    if ((param_2 < uVar7) ||
       (uVar5 = *(ushort *)(local_38 + local_40 + 2 + iVar6 * 8),
       (ushort)(uVar5 << 8 | uVar5 >> 8) < param_2)) goto LAB_0046f275;
    local_20 = (uint)*(byte *)(local_3c + 4 + iVar6 * 8) * 0x1000000;
    local_24 = (uint)*(byte *)(local_3c + 5 + iVar6 * 8) * 0x10000;
    local_28 = (uint)*(byte *)(local_3c + 6 + iVar6 * 8) * 0x100;
    local_1c = (uint)*(byte *)(local_3c + 7 + iVar6 * 8);
    uVar7 = local_24 + local_20 | local_28 | local_1c;
    if ((int)local_44 - local_3c < uVar7) goto LAB_0046f28c;
    puVar4 = (ushort *)(local_3c + uVar7 + 8);
    if (local_44 < puVar4) goto LAB_0046f27a;
    puVar8 = (ushort *)(local_3c + uVar7);
    local_2e = puVar8[1];
    uVar5 = *puVar8 << 8 | *puVar8 >> 8;
    local_3c = *(uint *)(puVar8 + 2);
    switch(uVar5) {
    case 1:
      if (local_44 < puVar4 + iVar11 * 2 + 4) goto LAB_0046f27a;
      uVar7 = *(uint *)(puVar4 + iVar11 * 2);
      uVar10 = *(uint *)((int)(puVar4 + iVar11 * 2) + 4);
      uVar9 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
      uVar7 = uVar10 >> 0x18 | (uVar10 & 0xff0000) >> 8 | (uVar10 & 0xff00) << 8 | uVar10 << 0x18;
      break;
    case 2:
      if (puVar8 + 10 <= local_44) {
        local_18 = (uint *)(puVar8 + 6);
        uVar5 = puVar8[4];
        bVar1 = *(byte *)((int)puVar8 + 9);
        uVar2 = puVar8[5];
        local_40 = (uint)*(byte *)((int)puVar8 + 0xb);
        iVar3 = FUN_0046f79e((int)param_1,(uint *)&local_18,(byte *)local_44,'\x01');
        if (iVar3 == 0) {
          iVar3 = ((uint)(byte)uVar2 << 8 | (uint)bVar1 << 0x10 | (uint)(byte)uVar5 << 0x18) +
                  local_40;
          uVar9 = iVar11 * iVar3;
          uVar7 = iVar3 + uVar9;
          goto LAB_0046f532;
        }
      }
      goto LAB_0046f27a;
    case 3:
      if (local_44 < puVar4 + iVar11 + 2) goto LAB_0046f27a;
      uVar5 = puVar4[iVar11];
      uVar2 = (puVar4 + iVar11)[1];
      uVar9 = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
      uVar7 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
      break;
    case 4:
      if ((puVar8 + 6 <= local_44) && (puVar8 + 8 <= local_44)) {
        uVar9 = (uint)(byte)puVar8[4] * 0x1000000;
        uVar10 = (uint)*(byte *)((int)puVar8 + 9) * 0x10000;
        uVar7 = (uint)(byte)puVar8[5] * 0x100;
        local_2c = (uint)*(byte *)((int)puVar8 + 0xb);
        if ((local_2c + (uVar10 | uVar9 | uVar7)) - 1 <
            ((int)local_44 - (int)(puVar8 + 6) >> 2) - 1U) {
          iVar3 = 0;
          goto LAB_0046f486;
        }
      }
      goto LAB_0046f27a;
    case 5:
      goto switchD_0046f32d_caseD_5;
    default:
      if (uVar5 == 0x13) {
switchD_0046f32d_caseD_5:
        if (puVar8 + 0xc <= local_44) {
          local_18 = (uint *)(puVar8 + 6);
          uVar5 = puVar8[4];
          bVar1 = *(byte *)((int)puVar8 + 9);
          local_40 = (uint)(byte)puVar8[5];
          local_38 = (uint)*(byte *)((int)puVar8 + 0xb);
          iVar3 = FUN_0046f79e((int)param_1,(uint *)&local_18,(byte *)local_44,'\x01');
          if (iVar3 == 0) {
            uVar7 = *local_18;
            uVar7 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
            if (uVar7 - 1 < (uint)((int)local_44 - (int)(local_18 + 1) >> 1)) {
              local_44 = (ushort *)((uint)bVar1 * 0x10000 + (uint)(byte)uVar5 * 0x1000000);
              local_40 = local_40 * 0x100;
              iVar3 = 0;
              uVar9 = 0;
              goto LAB_0046f3e3;
            }
          }
        }
      }
      goto LAB_0046f27a;
    }
    if (uVar9 != uVar7) goto LAB_0046f532;
  }
  goto LAB_0046f27a;
LAB_0046f486:
  uVar5 = *(ushort *)
           (local_40 + local_24 + local_28 + local_38 + local_20 + local_1c + 0xc + iVar3 * 4);
  if ((ushort)(uVar5 << 8 | uVar5 >> 8) != param_2) goto code_r0x0046f49a;
  iVar6 = local_38 + local_20 + local_24 + local_28 + local_1c + local_40;
  uVar5 = *(ushort *)(iVar6 + 0xe + iVar3 * 4);
  uVar2 = *(ushort *)(iVar6 + 0x12 + iVar3 * 4);
  uVar9 = (uint)(ushort)(uVar5 << 8 | uVar5 >> 8);
  uVar7 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
LAB_0046f532:
  if (uVar9 <= uVar7) {
    iVar3 = FUN_0046f81b(local_34,(uint)(ushort)(local_2e << 8 | local_2e >> 8),
                         uVar9 + (local_3c >> 0x18 | (local_3c & 0xff0000) >> 8 |
                                  (local_3c & 0xff00) << 8 | local_3c << 0x18),uVar7 - uVar9,param_3
                         ,param_4,param_5,param_6);
    goto LAB_0046f28c;
  }
  goto LAB_0046f27a;
code_r0x0046f49a:
  iVar3 = iVar3 + 1;
  if (uVar7 + local_2c + uVar9 + uVar10 == iVar3) goto LAB_0046f27a;
  goto LAB_0046f486;
LAB_0046f275:
  iVar6 = iVar6 + 1;
  if (param_1[8] == iVar6) goto LAB_0046f27a;
  goto LAB_0046f253;
  while( true ) {
    uVar9 = uVar9 + 1;
    iVar3 = iVar3 - (local_38 + local_40 + (int)local_44);
    if (uVar7 == uVar9) break;
LAB_0046f3e3:
    uVar5 = *(ushort *)((int)(local_18 + 1) + uVar9 * 2);
    if ((ushort)(uVar5 << 8 | uVar5 >> 8) == param_2) {
      uVar7 = (int)local_44 + ((local_38 + local_40) - iVar3);
      uVar9 = -iVar3;
      goto LAB_0046f532;
    }
  }
LAB_0046f27a:
  iVar3 = 0x15;
  if (param_5 == 0) {
    iVar3 = 0x9d;
  }
LAB_0046f28c:
  if (DAT_0050e8c0 != (local_14 ^ (uint)&local_44)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_14 ^ (uint)&local_44);
  }
  return iVar3;
}

