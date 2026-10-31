/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14013c4f4 */

int FUN_14013c4f4(longlong *param_1)

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
      goto LAB_14013cc0f;
    }
    *(undefined4 *)(param_1 + 4) = 0;
    bVar1 = *(byte *)(param_1[0x3c] + (longlong)(int)param_1[0x3d]);
    *(byte *)(param_1 + 0x3e) = bVar1;
    *(undefined4 *)((longlong)param_1 + 500) = 1;
    bVar2 = (&DAT_140e9b710)[bVar1];
    uVar4 = *(int *)((longlong)param_1 + 0x24) - (uint)(bVar2 >> 4);
    *(uint *)(param_1 + 7) = uVar4;
    if ((int)uVar4 < 0) {
      if (*(char *)((longlong)param_1 + 0x2c6) != '\0') {
        iVar7 = 0x81;
        goto LAB_14013cc0f;
      }
      if (0xf < bVar2) {
        uVar5 = 0;
        do {
          *(undefined4 *)(param_1[6] + uVar5 * 4) = 0;
          uVar5 = uVar5 + 1;
          bVar1 = *(byte *)(param_1 + 0x3e);
          bVar2 = (&DAT_140e9b710)[bVar1];
        } while (uVar5 < bVar2 >> 4);
      }
      *(undefined4 *)(param_1 + 7) = 0;
      uVar4 = 0;
    }
    iVar3 = (bVar2 & 0xf) + uVar4;
    *(int *)((longlong)param_1 + 0x3c) = iVar3;
    if ((int)param_1[5] < iVar3) {
      iVar7 = 0x82;
      goto LAB_14013cc0f;
    }
    lVar6 = (ulonglong)uVar4 * 4 + param_1[6];
    switch(bVar1) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      FUN_14013cc1c(param_1);
      break;
    case 6:
    case 7:
      FUN_14013cc72(param_1);
      break;
    case 8:
    case 9:
      FUN_14013ccb1(param_1);
      break;
    case 10:
      FUN_14013cce4(param_1);
      break;
    case 0xb:
      FUN_14013cd1a(param_1);
      break;
    case 0xc:
      FUN_14013cd44(param_1);
      break;
    case 0xd:
      FUN_14013cd58(param_1);
      break;
    case 0xe:
      FUN_14013cd6c(param_1);
      break;
    case 0xf:
      FUN_14013cd7d(param_1);
      break;
    case 0x10:
      FUN_14013d01f(param_1);
      break;
    case 0x11:
      FUN_14013d02a(param_1);
      break;
    case 0x12:
      FUN_14013d035(param_1);
      break;
    case 0x13:
      FUN_14013d040(param_1);
      break;
    case 0x14:
      FUN_14013d096(param_1);
      break;
    case 0x15:
      FUN_14013d0f5(param_1);
      break;
    case 0x16:
      FUN_14013d157(param_1);
      break;
    case 0x17:
      FUN_14013d1fa(param_1);
      break;
    case 0x18:
      FUN_14013d219(param_1);
      break;
    case 0x19:
      FUN_14013d232(param_1);
      break;
    case 0x1a:
      FUN_14013d24b(param_1);
      break;
    case 0x1b:
      FUN_14013d254(param_1);
      break;
    case 0x1c:
      FUN_14013d290(param_1);
      break;
    case 0x1d:
      FUN_14013d30b(param_1);
      break;
    case 0x1e:
      FUN_14013d314(param_1);
      break;
    case 0x1f:
      FUN_14013d31d(param_1);
      break;
    case 0x20:
      FUN_14013d346(lVar6);
      break;
    case 0x21:
    case 0x59:
    case 0x7e:
    case 0x7f:
      break;
    case 0x22:
      FUN_14013d34c(param_1);
      break;
    case 0x23:
      FUN_14013d354(lVar6);
      break;
    case 0x24:
      FUN_14013d362(param_1);
      break;
    case 0x25:
      FUN_14013d368(param_1);
      break;
    case 0x26:
      FUN_14013d398(param_1);
      break;
    case 0x27:
      FUN_14013d3f0(param_1);
      break;
    case 0x28:
    case 0x7b:
    case 0x83:
    case 0x84:
    case 0x8f:
    case 0x90:
switchD_14013c5cd_caseD_28:
      FUN_14013d4b2(param_1);
      break;
    case 0x29:
      FUN_14013d555(param_1);
      break;
    case 0x2a:
      FUN_14013d59e(param_1);
      break;
    case 0x2b:
      FUN_14013d69b(param_1);
      break;
    case 0x2c:
      FUN_14013d770(param_1);
      break;
    case 0x2d:
      FUN_14013d854(param_1);
      break;
    case 0x2e:
    case 0x2f:
      FUN_14013d8b6(param_1);
      break;
    case 0x30:
    case 0x31:
      FUN_14013d941(param_1);
      break;
    case 0x32:
    case 0x33:
      FUN_14013db2f(param_1);
      break;
    case 0x34:
    case 0x35:
      FUN_14013dc1c(param_1);
      break;
    case 0x36:
    case 0x37:
      FUN_14013dd41(param_1);
      break;
    case 0x38:
      FUN_14013de53(param_1);
      break;
    case 0x39:
      FUN_14013df91(param_1);
      break;
    case 0x3a:
    case 0x3b:
      FUN_14013e2cc(param_1);
      break;
    case 0x3c:
      FUN_14013e3e7(param_1);
      break;
    case 0x3d:
      FUN_14013e4bc(param_1);
      break;
    case 0x3e:
    case 0x3f:
      FUN_14013e4d5(param_1);
      break;
    case 0x40:
      FUN_14013e614(param_1);
      break;
    case 0x41:
      FUN_14013e694(param_1);
      break;
    case 0x42:
      FUN_14013e72e(param_1);
      break;
    case 0x43:
      FUN_14013e826(param_1);
      break;
    case 0x44:
      FUN_14013e857(param_1);
      break;
    case 0x45:
      FUN_14013e883(param_1);
      break;
    case 0x46:
    case 0x47:
      FUN_14013e8b9(param_1);
      break;
    case 0x48:
      FUN_14013e921(param_1);
      break;
    case 0x49:
    case 0x4a:
      FUN_14013e9b2(param_1);
      break;
    case 0x4b:
      FUN_14013eb34(param_1);
      break;
    case 0x4c:
      FUN_14013eb4a(param_1);
      break;
    case 0x4d:
      FUN_14013eb78(param_1);
      break;
    case 0x4e:
      FUN_14013eb80(param_1);
      break;
    case 0x4f:
      FUN_14013eb88(param_1);
      break;
    case 0x50:
      FUN_14013eb90(lVar6);
      break;
    case 0x51:
      FUN_14013eb9d(lVar6);
      break;
    case 0x52:
      FUN_14013ebaa(lVar6);
      break;
    case 0x53:
      FUN_14013ebb7(lVar6);
      break;
    case 0x54:
      FUN_14013ebc4(lVar6);
      break;
    case 0x55:
      FUN_14013ebd1(lVar6);
      break;
    case 0x56:
      FUN_14013ebde(param_1);
      break;
    case 0x57:
      FUN_14013ebff(param_1);
      break;
    case 0x58:
      FUN_14013ec21(param_1);
      break;
    case 0x5a:
      FUN_14013ec81(lVar6);
      break;
    case 0x5b:
      FUN_14013ec96(lVar6);
      break;
    case 0x5c:
      FUN_14013ecac(lVar6);
      break;
    case 0x5d:
    case 0x71:
    case 0x72:
      FUN_14013ecb7(param_1);
      break;
    case 0x5e:
      FUN_14013ee01(param_1);
      break;
    case 0x5f:
      FUN_14013ee0c(param_1);
      break;
    case 0x60:
      FUN_14013ee23(lVar6);
      break;
    case 0x61:
      FUN_14013ee29(lVar6);
      break;
    case 0x62:
      FUN_14013ee2f(param_1);
      break;
    case 99:
      FUN_14013ee5d(lVar6);
      break;
    case 100:
      FUN_14013ee7d(lVar6);
      break;
    case 0x65:
      FUN_14013ee89(lVar6);
      break;
    case 0x66:
      FUN_14013ee8c(lVar6);
      break;
    case 0x67:
      FUN_14013ee90(lVar6);
      break;
    case 0x68:
    case 0x69:
    case 0x6a:
    case 0x6b:
      FUN_14013ee9b(param_1);
      break;
    case 0x6c:
    case 0x6d:
    case 0x6e:
    case 0x6f:
      FUN_14013eec5(param_1);
      break;
    case 0x70:
      FUN_14013eeee(param_1);
      break;
    case 0x73:
    case 0x74:
    case 0x75:
      FUN_14013ef5a(param_1);
      break;
    case 0x76:
      FUN_14013f05b(param_1);
      break;
    case 0x77:
      FUN_14013f08d(param_1);
      break;
    case 0x78:
      FUN_14013f0bf(param_1);
      break;
    case 0x79:
      FUN_14013f0ca(param_1);
      break;
    case 0x7a:
      FUN_14013f0d5(param_1);
      break;
    case 0x7c:
      FUN_14013f0ee(param_1);
      break;
    case 0x7d:
      FUN_14013f107(param_1);
      break;
    case 0x80:
      FUN_14013f120(param_1);
      break;
    case 0x81:
      FUN_14013f19b(param_1);
      break;
    case 0x82:
      FUN_14013f1fb(param_1);
      break;
    case 0x85:
      FUN_14013f25b(param_1);
      break;
    case 0x86:
    case 0x87:
      FUN_14013f30e(param_1);
      break;
    case 0x88:
      FUN_14013f429(param_1);
      break;
    case 0x89:
      FUN_14013f526(param_1);
      break;
    case 0x8a:
      FUN_14013f60e(lVar6);
      break;
    case 0x8b:
      FUN_14013f61b(lVar6);
      break;
    case 0x8c:
      FUN_14013f625(lVar6);
      break;
    case 0x8d:
      FUN_14013f62f(param_1);
      break;
    case 0x8e:
      FUN_14013f63f(param_1);
      break;
    case 0x91:
      if (*(longlong *)(*param_1 + 0x408) == 0) goto switchD_14013c5cd_caseD_28;
      FUN_14013f6bf(param_1);
      break;
    case 0x92:
      if (*(longlong *)(*param_1 + 0x408) == 0) goto switchD_14013c5cd_caseD_28;
      FUN_14013f730(lVar6);
      break;
    default:
      if (bVar1 < 0xe0) {
        if (bVar1 < 0xc0) {
          if (bVar1 < 0xb8) {
            if (bVar1 < 0xb0) goto switchD_14013c5cd_caseD_28;
            FUN_14013fc80(param_1);
          }
          else {
            FUN_14013fbe5(param_1);
          }
        }
        else {
          FUN_14013f9aa(param_1);
        }
      }
      else {
        FUN_14013f737(param_1);
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
LAB_14013cc0f:
      *(int *)(param_1 + 4) = iVar7;
      return iVar7;
    }
    iVar7 = iVar7 + 1;
    if (*(char *)((longlong)param_1 + 0x2c4) != '\0') {
      return 0;
    }
  } while( true );
}

