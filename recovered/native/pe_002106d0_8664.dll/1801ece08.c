/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801ece08 */

int FUN_1801ece08(longlong *param_1)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong lVar6;
  int iVar7;
  
  iVar7 = 0;
  do {
    if (iVar7 == 1000000) {
      iVar7 = 0x8b;
      goto LAB_1801ed523;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    bVar1 = *(byte *)(param_1[0x3c] + (longlong)(int)param_1[0x3d]);
    *(byte *)(param_1 + 0x3e) = bVar1;
    *(undefined4 *)((longlong)param_1 + 500) = 1;
    bVar2 = (&DAT_1803373b0)[bVar1];
    uVar4 = *(int *)((longlong)param_1 + 0x24) - (uint)(bVar2 >> 4);
    *(uint *)(param_1 + 7) = uVar4;
    if ((int)uVar4 < 0) {
      if (*(char *)((longlong)param_1 + 0x2c6) != '\0') {
        iVar7 = 0x81;
        goto LAB_1801ed523;
      }
      if (0xf < bVar2) {
        uVar5 = 0;
        do {
          *(undefined4 *)(param_1[6] + uVar5 * 4) = 0;
          uVar5 = uVar5 + 1;
          bVar1 = *(byte *)(param_1 + 0x3e);
          bVar2 = (&DAT_1803373b0)[bVar1];
        } while (uVar5 < bVar2 >> 4);
      }
      *(undefined4 *)(param_1 + 7) = 0;
      uVar4 = 0;
    }
    iVar3 = (bVar2 & 0xf) + uVar4;
    *(int *)((longlong)param_1 + 0x3c) = iVar3;
    if ((int)param_1[5] < iVar3) {
      iVar7 = 0x82;
      goto LAB_1801ed523;
    }
    lVar6 = (ulonglong)uVar4 * 4 + param_1[6];
    switch(bVar1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      FUN_1801ed530(param_1);
      break;
    case 6:
    case 7:
      FUN_1801ed586(param_1);
      break;
    case 8:
    case 9:
      FUN_1801ed5c5(param_1);
      break;
    case 10:
      FUN_1801ed5f8(param_1);
      break;
    case 0xb:
      FUN_1801ed62e(param_1);
      break;
    case 0xc:
      FUN_1801ed658(param_1);
      break;
    case 0xd:
      FUN_1801ed66c(param_1);
      break;
    case 0xe:
      FUN_1801ed680(param_1);
      break;
    case 0xf:
      FUN_1801ed691(param_1);
      break;
    case 0x10:
      FUN_1801ed933(param_1);
      break;
    case 0x11:
      FUN_1801ed93e(param_1);
      break;
    case 0x12:
      FUN_1801ed949(param_1);
      break;
    case 0x13:
      FUN_1801ed954(param_1);
      break;
    case 0x14:
      FUN_1801ed9aa(param_1);
      break;
    case 0x15:
      FUN_1801eda09(param_1);
      break;
    case 0x16:
      FUN_1801eda6b(param_1);
      break;
    case 0x17:
      FUN_1801edb0e(param_1);
      break;
    case 0x18:
      FUN_1801edb2d(param_1);
      break;
    case 0x19:
      FUN_1801edb46(param_1);
      break;
    case 0x1a:
      FUN_1801edb5f(param_1);
      break;
    case 0x1b:
      FUN_1801edb68(param_1);
      break;
    case 0x1c:
      FUN_1801edba4(param_1);
      break;
    case 0x1d:
      FUN_1801edc1f(param_1);
      break;
    case 0x1e:
      FUN_1801edc28(param_1);
      break;
    case 0x1f:
      FUN_1801edc31(param_1);
      break;
    case 0x20:
      FUN_1801edc5a(lVar6);
      break;
    case 0x21:
    case 0x59:
    case 0x7e:
    case 0x7f:
      break;
    case 0x22:
      FUN_1801edc60(param_1);
      break;
    case 0x23:
      FUN_1801edc68(lVar6);
      break;
    case 0x24:
      FUN_1801edc76(param_1);
      break;
    case 0x25:
      FUN_1801edc7c(param_1);
      break;
    case 0x26:
      FUN_1801edcac(param_1);
      break;
    case 0x27:
      FUN_1801edd04(param_1);
      break;
    case 0x28:
    case 0x7b:
    case 0x83:
    case 0x84:
    case 0x8f:
    case 0x90:
switchD_1801ecee1_caseD_28:
      FUN_1801eddc6(param_1);
      break;
    case 0x29:
      FUN_1801ede69(param_1);
      break;
    case 0x2a:
      FUN_1801edeb2(param_1);
      break;
    case 0x2b:
      FUN_1801edfaf(param_1);
      break;
    case 0x2c:
      FUN_1801ee084(param_1);
      break;
    case 0x2d:
      FUN_1801ee168(param_1);
      break;
    case 0x2e:
    case 0x2f:
      FUN_1801ee1ca(param_1);
      break;
    case 0x30:
    case 0x31:
      FUN_1801ee255(param_1);
      break;
    case 0x32:
    case 0x33:
      FUN_1801ee443(param_1);
      break;
    case 0x34:
    case 0x35:
      FUN_1801ee530(param_1);
      break;
    case 0x36:
    case 0x37:
      FUN_1801ee655(param_1);
      break;
    case 0x38:
      FUN_1801ee767(param_1);
      break;
    case 0x39:
      FUN_1801ee8a5(param_1);
      break;
    case 0x3a:
    case 0x3b:
      FUN_1801eebe0(param_1);
      break;
    case 0x3c:
      FUN_1801eecfb(param_1);
      break;
    case 0x3d:
      FUN_1801eedd0(param_1);
      break;
    case 0x3e:
    case 0x3f:
      FUN_1801eede9(param_1);
      break;
    case 0x40:
      FUN_1801eef28(param_1);
      break;
    case 0x41:
      FUN_1801eefa8(param_1);
      break;
    case 0x42:
      FUN_1801ef042(param_1);
      break;
    case 0x43:
      FUN_1801ef13a(param_1);
      break;
    case 0x44:
      FUN_1801ef16b(param_1);
      break;
    case 0x45:
      FUN_1801ef197(param_1);
      break;
    case 0x46:
    case 0x47:
      FUN_1801ef1cd(param_1);
      break;
    case 0x48:
      FUN_1801ef235(param_1);
      break;
    case 0x49:
    case 0x4a:
      FUN_1801ef2c6(param_1);
      break;
    case 0x4b:
      FUN_1801ef448(param_1);
      break;
    case 0x4c:
      FUN_1801ef45e(param_1);
      break;
    case 0x4d:
      FUN_1801ef48c(param_1);
      break;
    case 0x4e:
      FUN_1801ef494(param_1);
      break;
    case 0x4f:
      FUN_1801ef49c(param_1);
      break;
    case 0x50:
      FUN_1801ef4a4(lVar6);
      break;
    case 0x51:
      FUN_1801ef4b1(lVar6);
      break;
    case 0x52:
      FUN_1801ef4be(lVar6);
      break;
    case 0x53:
      FUN_1801ef4cb(lVar6);
      break;
    case 0x54:
      FUN_1801ef4d8(lVar6);
      break;
    case 0x55:
      FUN_1801ef4e5(lVar6);
      break;
    case 0x56:
      FUN_1801ef4f2(param_1);
      break;
    case 0x57:
      FUN_1801ef513(param_1);
      break;
    case 0x58:
      FUN_1801ef535(param_1);
      break;
    case 0x5a:
      FUN_1801ef595(lVar6);
      break;
    case 0x5b:
      FUN_1801ef5aa(lVar6);
      break;
    case 0x5c:
      FUN_1801ef5c0(lVar6);
      break;
    case 0x5d:
    case 0x71:
    case 0x72:
      FUN_1801ef5cb(param_1);
      break;
    case 0x5e:
      FUN_1801ef715(param_1);
      break;
    case 0x5f:
      FUN_1801ef720(param_1);
      break;
    case 0x60:
      FUN_1801ef737(lVar6);
      break;
    case 0x61:
      FUN_1801ef73d(lVar6);
      break;
    case 0x62:
      FUN_1801ef743(param_1);
      break;
    case 99:
      FUN_1801ef771(lVar6);
      break;
    case 100:
      FUN_1801ef791(lVar6);
      break;
    case 0x65:
      FUN_1801ef79d(lVar6);
      break;
    case 0x66:
      FUN_1801ef7a0(lVar6);
      break;
    case 0x67:
      FUN_1801ef7a4(lVar6);
      break;
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
      FUN_1801ef7af(param_1);
      break;
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
      FUN_1801ef7d9(param_1);
      break;
    case 0x70:
      FUN_1801ef802(param_1);
      break;
    case 0x73:
    case 0x74:
    case 0x75:
      FUN_1801ef86e(param_1);
      break;
    case 0x76:
      FUN_1801ef96f(param_1);
      break;
    case 0x77:
      FUN_1801ef9a1(param_1);
      break;
    case 0x78:
      FUN_1801ef9d3(param_1);
      break;
    case 0x79:
      FUN_1801ef9de(param_1);
      break;
    case 0x7a:
      FUN_1801ef9e9(param_1);
      break;
    case 0x7c:
      FUN_1801efa02(param_1);
      break;
    case 0x7d:
      FUN_1801efa1b(param_1);
      break;
    case 0x80:
      FUN_1801efa34(param_1);
      break;
    case 0x81:
      FUN_1801efaaf(param_1);
      break;
    case 0x82:
      FUN_1801efb0f(param_1);
      break;
    case 0x85:
      FUN_1801efb6f(param_1);
      break;
    case 0x86:
    case 0x87:
      FUN_1801efc22(param_1);
      break;
    case 0x88:
      FUN_1801efd3d(param_1);
      break;
    case 0x89:
      FUN_1801efe3a(param_1);
      break;
    case 0x8a:
      FUN_1801eff22(lVar6);
      break;
    case 0x8b:
      FUN_1801eff2f(lVar6);
      break;
    case 0x8c:
      FUN_1801eff39(lVar6);
      break;
    case 0x8d:
      FUN_1801eff43(param_1);
      break;
    case 0x8e:
      FUN_1801eff53(param_1);
      break;
    case 0x91:
      if (*(longlong *)(*param_1 + 0x408) == 0) goto switchD_1801ecee1_caseD_28;
      FUN_1801effd3(param_1);
      break;
    case 0x92:
      if (*(longlong *)(*param_1 + 0x408) == 0) goto switchD_1801ecee1_caseD_28;
      FUN_1801f0044(lVar6);
      break;
    default:
      if (bVar1 < 0xe0) {
        if (bVar1 < 0xc0) {
          if (bVar1 < 0xb8) {
            if (bVar1 < 0xb0) goto switchD_1801ecee1_caseD_28;
            FUN_1801f0594(param_1);
          }
          else {
            FUN_1801f04f9(param_1);
          }
        }
        else {
          FUN_1801f02be(param_1);
        }
      }
      else {
        FUN_1801f004b(param_1);
      }
    }
    if ((int)param_1[4] != 0) {
      return (int)param_1[4];
    }
    *(undefined4 *)((longlong)param_1 + 0x24) = *(undefined4 *)((longlong)param_1 + 0x3c);
    iVar3 = (int)param_1[0x3d] + *(int *)((longlong)param_1 + 500);
    *(int *)(param_1 + 0x3d) = iVar3;
    if (*(int *)((longlong)param_1 + 0x1ec) <= iVar3) {
      iVar7 = 0x83;
      if ((int)param_1[0x4a] < 1) {
        return 0;
      }
LAB_1801ed523:
      *(int *)(param_1 + 4) = iVar7;
      return iVar7;
    }
    iVar7 = iVar7 + 1;
    if (*(char *)((longlong)param_1 + 0x2c4) != '\0') {
      return 0;
    }
  } while( true );
}

