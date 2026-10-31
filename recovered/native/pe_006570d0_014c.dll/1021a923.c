/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1021a923 */

void __fastcall FUN_1021a923(int param_1,uint param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint local_18;
  
  uVar6 = param_2 & 0x7ffffff0;
  uVar1 = 0x75bcd15;
  uVar7 = 0;
  uVar9 = 0x75bcd15;
  local_18 = 0x75bcd15;
  uVar8 = 0x75bcd15;
  do {
    uVar12 = uVar8;
    iVar2 = *(int *)(param_1 + 4 + uVar7);
    uVar1 = ((uint)(*(int *)(param_1 + uVar7) * 0x239b961b) >> 0x11 |
            *(int *)(param_1 + uVar7) * -0x34f28000) * -0x54f16877 ^ uVar1;
    iVar3 = *(int *)(param_1 + 8 + uVar7);
    uVar10 = ((uint)(iVar2 * -0x54f16877) >> 0x10 | iVar2 * -0x68770000) * 0x38b34ae5 ^ uVar9;
    iVar2 = *(int *)(param_1 + 0xc + uVar7);
    uVar11 = ((uint)(iVar3 * 0x38b34ae5) >> 0xf | iVar3 * -0x6a360000) * -0x5e1c746d ^ local_18;
    uVar8 = ((uint)(iVar2 * -0x5e1c746d) >> 0xe | iVar2 * 0x2e4c0000) * 0x239b961b ^ uVar12;
    uVar1 = ((uVar1 << 0x13 | uVar1 >> 0xd) + uVar9) * 5 + 0x561ccd1b;
    uVar9 = ((uVar10 << 0x11 | uVar10 >> 0xf) + local_18) * 5 + 0xbcaa747;
    local_18 = ((uVar11 << 0xf | uVar11 >> 0x11) + uVar12) * 5 + 0x96cd1c35;
    uVar7 = uVar7 + 0x10;
    uVar8 = ((uVar8 << 0xd | uVar8 >> 0x13) + uVar1) * 5 + 0x32ac3b17;
  } while (uVar6 != uVar7);
  uVar1 = 0;
  switch(param_2 & 0xf) {
  case 0:
    goto switchD_1021aa2e_caseD_0;
  case 1:
    uVar12 = uVar9;
    goto switchD_1021aa2e_caseD_0;
  case 2:
    uVar12 = uVar9;
    goto switchD_1021aa2e_caseD_0;
  case 3:
    uVar12 = uVar9;
    goto switchD_1021aa2e_caseD_0;
  case 4:
    uVar12 = uVar9;
    goto switchD_1021aa2e_caseD_0;
  case 5:
    goto LAB_1021ab17;
  case 6:
    goto LAB_1021ab09;
  case 7:
    goto LAB_1021aafb;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xf:
  case 0xe:
  case 0xd:
  }
  uVar1 = (uint)*(byte *)(param_1 + 7 + uVar6) << 0x18;
LAB_1021aafb:
  uVar1 = uVar1 | (uint)*(byte *)(param_1 + 6 + uVar6) << 0x10;
LAB_1021ab09:
  uVar1 = uVar1 ^ (uint)*(byte *)(param_1 + 5 + uVar6) << 8;
LAB_1021ab17:
  uVar1 = *(byte *)(param_1 + 4 + uVar6) ^ uVar1;
  uVar12 = uVar9 ^ (uVar1 * -0x54f16877 >> 0x10 | uVar1 * -0x68770000) * 0x38b34ae5;
switchD_1021aa2e_caseD_0:
  iVar2 = FUN_1021ac1d(uVar6,param_1,uVar12);
  iVar3 = FUN_1021ac1d();
  iVar4 = FUN_1021ac1d();
  iVar5 = FUN_1021ac1d();
  iVar2 = iVar2 + iVar3 + iVar4 + iVar5;
  *param_3 = iVar2;
  param_3[1] = iVar3 + iVar2;
  param_3[2] = iVar4 + iVar2;
  param_3[3] = iVar5 + iVar2;
  return;
}

