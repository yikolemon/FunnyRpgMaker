/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004720a3 */

void __fastcall FUN_004720a3(int param_1,uint param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint local_1c;
  uint local_18;
  
  uVar3 = param_2 & 0x7ffffff0;
  uVar2 = 0x75bcd15;
  uVar4 = 0;
  local_1c = 0x75bcd15;
  local_18 = 0x75bcd15;
  uVar8 = 0x75bcd15;
  do {
    iVar6 = *(int *)(param_1 + 4 + uVar4);
    uVar2 = ((uint)(*(int *)(param_1 + uVar4) * 0x239b961b) >> 0x11 |
            *(int *)(param_1 + uVar4) * -0x34f28000) * -0x54f16877 ^ uVar2;
    iVar1 = *(int *)(param_1 + 8 + uVar4);
    uVar7 = ((uint)(iVar6 * -0x54f16877) >> 0x10 | iVar6 * -0x68770000) * 0x38b34ae5 ^ local_1c;
    iVar6 = *(int *)(param_1 + 0xc + uVar4);
    uVar9 = ((uint)(iVar1 * 0x38b34ae5) >> 0xf | iVar1 * -0x6a360000) * -0x5e1c746d ^ local_18;
    uVar5 = ((uint)(iVar6 * -0x5e1c746d) >> 0xe | iVar6 * 0x2e4c0000) * 0x239b961b ^ uVar8;
    uVar2 = ((uVar2 << 0x13 | uVar2 >> 0xd) + local_1c) * 5 + 0x561ccd1b;
    local_1c = ((uVar7 << 0x11 | uVar7 >> 0xf) + local_18) * 5 + 0xbcaa747;
    local_18 = ((uVar9 << 0xf | uVar9 >> 0x11) + uVar8) * 5 + 0x96cd1c35;
    uVar8 = ((uVar5 << 0xd | uVar5 >> 0x13) + uVar2) * 5 + 0x32ac3b17;
    uVar4 = uVar4 + 0x10;
  } while (uVar3 != uVar4);
  uVar4 = 0;
  switch(param_2 & 0xf) {
  case 0:
    goto switchD_004721ae_caseD_0;
  case 1:
    goto LAB_004722e7;
  case 2:
    goto LAB_004722d5;
  case 3:
    goto LAB_004722c7;
  case 4:
    goto LAB_004722bb;
  case 5:
    goto LAB_00472297;
  case 6:
    goto LAB_00472289;
  case 7:
    goto LAB_0047227b;
  case 8:
    goto LAB_0047226f;
  case 9:
    goto LAB_00472249;
  case 10:
    goto LAB_0047223b;
  case 0xb:
    goto LAB_0047222d;
  case 0xc:
    break;
  case 0xf:
    uVar4 = (uint)*(byte *)(param_1 + 0xe + uVar3) << 0x10;
  case 0xe:
    uVar4 = (uint)*(byte *)(param_1 + 0xd + uVar3) << 8 | uVar4;
  case 0xd:
    uVar4 = *(byte *)(param_1 + 0xc + uVar3) ^ uVar4;
    uVar8 = uVar8 ^ (uVar4 * -0x5e1c746d >> 0xe | uVar4 * 0x2e4c0000) * 0x239b961b;
  }
  uVar4 = (uint)*(byte *)(param_1 + 0xb + uVar3) << 0x18;
LAB_0047222d:
  uVar4 = uVar4 | (uint)*(byte *)(param_1 + 10 + uVar3) << 0x10;
LAB_0047223b:
  uVar4 = uVar4 ^ (uint)*(byte *)(param_1 + 9 + uVar3) << 8;
LAB_00472249:
  uVar4 = *(byte *)(param_1 + 8 + uVar3) ^ uVar4;
  local_18 = local_18 ^ (uVar4 * 0x38b34ae5 >> 0xf | uVar4 * -0x6a360000) * -0x5e1c746d;
LAB_0047226f:
  uVar4 = (uint)*(byte *)(param_1 + 7 + uVar3) << 0x18;
LAB_0047227b:
  uVar4 = uVar4 | (uint)*(byte *)(param_1 + 6 + uVar3) << 0x10;
LAB_00472289:
  uVar4 = uVar4 ^ (uint)*(byte *)(param_1 + 5 + uVar3) << 8;
LAB_00472297:
  uVar4 = *(byte *)(param_1 + 4 + uVar3) ^ uVar4;
  local_1c = local_1c ^ (uVar4 * -0x54f16877 >> 0x10 | uVar4 * -0x68770000) * 0x38b34ae5;
LAB_004722bb:
  uVar4 = (uint)*(byte *)(param_1 + 3 + uVar3) << 0x18;
LAB_004722c7:
  uVar4 = uVar4 | (uint)*(byte *)(param_1 + 2 + uVar3) << 0x10;
LAB_004722d5:
  uVar4 = uVar4 ^ (uint)*(byte *)(param_1 + 1 + uVar3) << 8;
LAB_004722e7:
  uVar4 = *(byte *)(param_1 + uVar3) ^ uVar4;
  uVar2 = uVar2 ^ (uVar4 * 0x239b961b >> 0x11 | uVar4 * -0x34f28000) * -0x54f16877;
switchD_004721ae_caseD_0:
  uVar2 = (uVar2 ^ param_2) + (local_18 ^ param_2) + (local_1c ^ param_2) + (uVar8 ^ param_2);
  uVar3 = FUN_0047239d(uVar2);
  uVar4 = FUN_0047239d((local_1c ^ param_2) + uVar2);
  uVar5 = FUN_0047239d((local_18 ^ param_2) + uVar2);
  uVar2 = FUN_0047239d((uVar8 ^ param_2) + uVar2);
  iVar6 = uVar3 + uVar4 + uVar5 + uVar2;
  *param_3 = iVar6;
  param_3[1] = uVar4 + iVar6;
  param_3[2] = uVar5 + iVar6;
  param_3[3] = uVar2 + iVar6;
  return;
}

