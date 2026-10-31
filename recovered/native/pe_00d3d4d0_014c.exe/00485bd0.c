/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00485bd0 */

int __cdecl FUN_00485bd0(uint *param_1,uint *param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  switch(param_3) {
  case 0:
    return 0;
  case 1:
    uVar7 = (uint)(byte)*param_1;
    uVar4 = (uint)(byte)*param_2;
    break;
  case 2:
    iVar6 = 0;
    if ((uint)(byte)*param_1 != (uint)(byte)*param_2) {
      iVar6 = (uint)(0 < (int)((uint)(byte)*param_1 - (uint)(byte)*param_2)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar7 = (uint)*(byte *)((int)param_1 + 1);
    uVar4 = (uint)*(byte *)((int)param_2 + 1);
    break;
  case 3:
    iVar6 = 0;
    if ((uint)(byte)*param_1 != (uint)(byte)*param_2) {
      iVar6 = (uint)(0 < (int)((uint)(byte)*param_1 - (uint)(byte)*param_2)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = 0;
    if ((uint)*(byte *)((int)param_1 + 1) != (uint)*(byte *)((int)param_2 + 1)) {
      iVar6 = (uint)(0 < (int)((uint)*(byte *)((int)param_1 + 1) - (uint)*(byte *)((int)param_2 + 1)
                              )) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar7 = (uint)*(byte *)((int)param_1 + 2);
    uVar4 = (uint)*(byte *)((int)param_2 + 2);
    break;
  case 4:
    iVar6 = 0;
    if ((uint)(byte)*param_1 != (uint)(byte)*param_2) {
      iVar6 = (uint)(0 < (int)((uint)(byte)*param_1 - (uint)(byte)*param_2)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = 0;
    if ((uint)*(byte *)((int)param_1 + 1) != (uint)*(byte *)((int)param_2 + 1)) {
      iVar6 = (uint)(0 < (int)((uint)*(byte *)((int)param_1 + 1) - (uint)*(byte *)((int)param_2 + 1)
                              )) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = 0;
    if ((uint)*(byte *)((int)param_1 + 2) != (uint)*(byte *)((int)param_2 + 2)) {
      iVar6 = (uint)(0 < (int)((uint)*(byte *)((int)param_1 + 2) - (uint)*(byte *)((int)param_2 + 2)
                              )) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar7 = (uint)*(byte *)((int)param_1 + 3);
    uVar4 = (uint)*(byte *)((int)param_2 + 3);
    break;
  default:
switchD_00485be3_default:
    switch(param_3) {
    case 0:
      break;
    case 1:
      goto switchD_00486308_caseD_1;
    case 2:
      goto switchD_00486308_caseD_2;
    case 3:
      goto switchD_00486308_caseD_3;
    case 4:
      goto switchD_00486308_caseD_4;
    case 5:
      goto switchD_00486308_caseD_5;
    case 6:
      goto switchD_00486308_caseD_6;
    case 7:
      goto switchD_00486308_caseD_7;
    case 8:
      goto switchD_00486308_caseD_8;
    case 9:
      goto switchD_00486308_caseD_9;
    case 10:
      goto switchD_00486308_caseD_a;
    case 0xb:
      goto switchD_00486308_caseD_b;
    case 0xc:
      goto switchD_00486308_caseD_c;
    case 0xd:
      goto switchD_00486308_caseD_d;
    case 0xe:
      goto switchD_00486308_caseD_e;
    case 0xf:
      goto switchD_00486308_caseD_f;
    case 0x10:
      goto switchD_00486308_caseD_10;
    case 0x11:
      goto switchD_00486308_caseD_11;
    case 0x12:
      goto switchD_00486308_caseD_12;
    case 0x13:
      goto switchD_00486308_caseD_13;
    case 0x14:
      goto switchD_00486308_caseD_14;
    case 0x15:
      goto switchD_00486308_caseD_15;
    case 0x16:
      goto switchD_00486308_caseD_16;
    case 0x17:
      goto switchD_00486308_caseD_17;
    case 0x1a:
      goto switchD_00486308_caseD_1a;
    case 0x1b:
      goto switchD_00486308_caseD_1b;
    case 0x1c:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0x1c);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0x1c);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
    case 0x18:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0x18);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0x18);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_14:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0x14);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0x14);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_10:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0x10);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0x10);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_c:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0xc);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0xc);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_8:
      uVar4 = *(uint *)((int)param_1 + param_3 + -8);
      uVar7 = *(uint *)((int)param_2 + param_3 + -8);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_4:
      uVar4 = *(uint *)((int)param_1 + param_3 + -4);
      uVar7 = *(uint *)((int)param_2 + param_3 + -4);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
      break;
    case 0x1d:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0x1d);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0x1d);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
    case 0x19:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0x19);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0x19);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_15:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0x15);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0x15);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_11:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0x11);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0x11);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_d:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0xd);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0xd);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_9:
      uVar4 = *(uint *)((int)param_1 + param_3 + -9);
      uVar7 = *(uint *)((int)param_2 + param_3 + -9);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_5:
      uVar4 = *(uint *)((int)param_1 + param_3 + -5);
      uVar7 = *(uint *)((int)param_2 + param_3 + -5);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_1:
      bVar1 = *(byte *)((int)param_2 + param_3 + -1);
LAB_00486d2b:
      uVar7 = (uint)bVar1;
      uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -1);
LAB_00486d32:
      if (uVar4 == uVar7) {
        return 0;
      }
      return (uint)(0 < (int)(uVar4 - uVar7)) * 2 + -1;
    case 0x1e:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0x1e);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0x1e);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_1a:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0x1a);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0x1a);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_16:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0x16);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0x16);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_12:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0x12);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0x12);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_e:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0xe);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0xe);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_a:
      uVar4 = *(uint *)((int)param_1 + param_3 + -10);
      uVar7 = *(uint *)((int)param_2 + param_3 + -10);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_6:
      uVar4 = *(uint *)((int)param_1 + param_3 + -6);
      uVar7 = *(uint *)((int)param_2 + param_3 + -6);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_2:
      uVar2 = *(ushort *)((int)param_1 + param_3 + -2);
      uVar3 = *(ushort *)((int)param_2 + param_3 + -2);
      if (uVar2 != uVar3) {
        iVar6 = 0;
        if ((uVar2 & 0xff) != (uint)(byte)uVar3) {
          iVar6 = (uint)(0 < (int)((uVar2 & 0xff) - (uint)(byte)uVar3)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar7 = (uint)(uVar3 >> 8);
        uVar4 = (uint)(uVar2 >> 8);
        goto LAB_00486d32;
      }
      break;
    case 0x1f:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0x1f);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0x1f);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_1b:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0x1b);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0x1b);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_17:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0x17);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0x17);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_13:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0x13);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0x13);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_f:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0xf);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0xf);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_b:
      uVar4 = *(uint *)((int)param_1 + param_3 + -0xb);
      uVar7 = *(uint *)((int)param_2 + param_3 + -0xb);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_7:
      uVar4 = *(uint *)((int)param_1 + param_3 + -7);
      uVar7 = *(uint *)((int)param_2 + param_3 + -7);
      if (uVar4 != uVar7) {
        iVar6 = 0;
        if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
          iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 8 & 0xff;
        uVar5 = uVar4 >> 8 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        uVar8 = uVar7 >> 0x10 & 0xff;
        uVar5 = uVar4 >> 0x10 & 0xff;
        iVar6 = 0;
        if (uVar5 != uVar8) {
          iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
        iVar6 = 0;
        if (uVar4 >> 0x18 != uVar7 >> 0x18) {
          iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
        }
        if (iVar6 != 0) {
          return iVar6;
        }
      }
switchD_00486308_caseD_3:
      uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -3);
      uVar7 = (uint)*(byte *)((int)param_2 + param_3 + -3);
      iVar6 = 0;
      if (uVar4 != uVar7) {
        iVar6 = (uint)(0 < (int)(uVar4 - uVar7)) * 2 + -1;
      }
      if (iVar6 != 0) {
        return iVar6;
      }
      uVar7 = (uint)*(byte *)((int)param_2 + param_3 + -2);
      uVar4 = (uint)*(byte *)((int)param_1 + param_3 + -2);
      iVar6 = 0;
      if (uVar4 != uVar7) {
        iVar6 = (uint)(0 < (int)(uVar4 - uVar7)) * 2 + -1;
      }
      if (iVar6 != 0) {
        return iVar6;
      }
      bVar1 = *(byte *)((int)param_2 + param_3 + -1);
      goto LAB_00486d2b;
    default:
      goto switchD_00486308_default;
    }
    return 0;
  }
  iVar6 = 0;
  if (uVar7 != uVar4) {
    iVar6 = (uint)(0 < (int)(uVar7 - uVar4)) * 2 + -1;
  }
  return iVar6;
switchD_00486308_default:
  uVar4 = *param_1;
  uVar7 = *param_2;
  if (uVar4 != uVar7) {
    iVar6 = 0;
    if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
      iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar8 = uVar7 >> 8 & 0xff;
    uVar5 = uVar4 >> 8 & 0xff;
    iVar6 = 0;
    if (uVar5 != uVar8) {
      iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar8 = uVar7 >> 0x10 & 0xff;
    uVar5 = uVar4 >> 0x10 & 0xff;
    iVar6 = 0;
    if (uVar5 != uVar8) {
      iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = 0;
    if (uVar4 >> 0x18 != uVar7 >> 0x18) {
      iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  uVar4 = param_1[1];
  uVar7 = param_2[1];
  if (uVar4 != uVar7) {
    iVar6 = 0;
    if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
      iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar8 = uVar7 >> 8 & 0xff;
    uVar5 = uVar4 >> 8 & 0xff;
    iVar6 = 0;
    if (uVar5 != uVar8) {
      iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar8 = uVar7 >> 0x10 & 0xff;
    uVar5 = uVar4 >> 0x10 & 0xff;
    iVar6 = 0;
    if (uVar5 != uVar8) {
      iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = 0;
    if (uVar4 >> 0x18 != uVar7 >> 0x18) {
      iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  uVar4 = param_1[2];
  uVar7 = param_2[2];
  if (uVar4 != uVar7) {
    iVar6 = 0;
    if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
      iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar8 = uVar7 >> 8 & 0xff;
    uVar5 = uVar4 >> 8 & 0xff;
    iVar6 = 0;
    if (uVar5 != uVar8) {
      iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar8 = uVar7 >> 0x10 & 0xff;
    uVar5 = uVar4 >> 0x10 & 0xff;
    iVar6 = 0;
    if (uVar5 != uVar8) {
      iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = 0;
    if (uVar4 >> 0x18 != uVar7 >> 0x18) {
      iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  uVar4 = param_1[3];
  uVar7 = param_2[3];
  if (uVar4 != uVar7) {
    iVar6 = 0;
    if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
      iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar8 = uVar7 >> 8 & 0xff;
    uVar5 = uVar4 >> 8 & 0xff;
    iVar6 = 0;
    if (uVar5 != uVar8) {
      iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar8 = uVar7 >> 0x10 & 0xff;
    uVar5 = uVar4 >> 0x10 & 0xff;
    iVar6 = 0;
    if (uVar5 != uVar8) {
      iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = 0;
    if (uVar4 >> 0x18 != uVar7 >> 0x18) {
      iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  uVar4 = param_1[4];
  uVar7 = param_2[4];
  if (uVar4 != uVar7) {
    iVar6 = 0;
    if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
      iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar8 = uVar7 >> 8 & 0xff;
    uVar5 = uVar4 >> 8 & 0xff;
    iVar6 = 0;
    if (uVar5 != uVar8) {
      iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar8 = uVar7 >> 0x10 & 0xff;
    uVar5 = uVar4 >> 0x10 & 0xff;
    iVar6 = 0;
    if (uVar5 != uVar8) {
      iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = 0;
    if (uVar4 >> 0x18 != uVar7 >> 0x18) {
      iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  uVar4 = param_1[5];
  uVar7 = param_2[5];
  if (uVar4 != uVar7) {
    iVar6 = 0;
    if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
      iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar8 = uVar7 >> 8 & 0xff;
    uVar5 = uVar4 >> 8 & 0xff;
    iVar6 = 0;
    if (uVar5 != uVar8) {
      iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar8 = uVar7 >> 0x10 & 0xff;
    uVar5 = uVar4 >> 0x10 & 0xff;
    iVar6 = 0;
    if (uVar5 != uVar8) {
      iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = 0;
    if (uVar4 >> 0x18 != uVar7 >> 0x18) {
      iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  uVar4 = param_1[6];
  uVar7 = param_2[6];
  if (uVar4 != uVar7) {
    iVar6 = 0;
    if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
      iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar8 = uVar7 >> 8 & 0xff;
    uVar5 = uVar4 >> 8 & 0xff;
    iVar6 = 0;
    if (uVar5 != uVar8) {
      iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar8 = uVar7 >> 0x10 & 0xff;
    uVar5 = uVar4 >> 0x10 & 0xff;
    iVar6 = 0;
    if (uVar5 != uVar8) {
      iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = 0;
    if (uVar4 >> 0x18 != uVar7 >> 0x18) {
      iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  uVar4 = param_1[7];
  uVar7 = param_2[7];
  if (uVar4 != uVar7) {
    iVar6 = 0;
    if ((uVar4 & 0xff) != (uVar7 & 0xff)) {
      iVar6 = (uint)(0 < (int)((uVar4 & 0xff) - (uVar7 & 0xff))) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar8 = uVar7 >> 8 & 0xff;
    uVar5 = uVar4 >> 8 & 0xff;
    iVar6 = 0;
    if (uVar5 != uVar8) {
      iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    uVar8 = uVar7 >> 0x10 & 0xff;
    uVar5 = uVar4 >> 0x10 & 0xff;
    iVar6 = 0;
    if (uVar5 != uVar8) {
      iVar6 = (uint)(0 < (int)(uVar5 - uVar8)) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
    iVar6 = 0;
    if (uVar4 >> 0x18 != uVar7 >> 0x18) {
      iVar6 = (uint)(0 < (int)((uVar4 >> 0x18) - (uVar7 >> 0x18))) * 2 + -1;
    }
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  param_3 = param_3 + -0x20;
  param_1 = param_1 + 8;
  param_2 = param_2 + 8;
  goto switchD_00485be3_default;
}

