/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100821a8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __fastcall FUN_100821a8(int param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  char *pcVar9;
  undefined4 local_2c;
  undefined4 uStack_28;
  uint uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_2c;
  FUN_1004d100();
LAB_100821c4:
  uVar3 = FUN_10082c38();
  pcVar9 = "invalid string: control character U+0001 (SOH) must be escaped to \\u0001";
  uVar4 = 4;
  switch(uVar3) {
  case 0:
    pcVar9 = "invalid string: control character U+0000 (NUL) must be escaped to \\u0000";
    break;
  case 1:
    break;
  case 2:
    pcVar9 = "invalid string: control character U+0002 (STX) must be escaped to \\u0002";
    break;
  case 3:
    pcVar9 = "invalid string: control character U+0003 (ETX) must be escaped to \\u0003";
    break;
  case 4:
    pcVar9 = "invalid string: control character U+0004 (EOT) must be escaped to \\u0004";
    break;
  case 5:
    pcVar9 = "invalid string: control character U+0005 (ENQ) must be escaped to \\u0005";
    break;
  case 6:
    pcVar9 = "invalid string: control character U+0006 (ACK) must be escaped to \\u0006";
    break;
  case 7:
    pcVar9 = "invalid string: control character U+0007 (BEL) must be escaped to \\u0007";
    break;
  case 8:
    pcVar9 = "invalid string: control character U+0008 (BS) must be escaped to \\u0008 or \\b";
    break;
  case 9:
    pcVar9 = "invalid string: control character U+0009 (HT) must be escaped to \\u0009 or \\t";
    break;
  case 10:
    pcVar9 = "invalid string: control character U+000A (LF) must be escaped to \\u000A or \\n";
    break;
  case 0xb:
    pcVar9 = "invalid string: control character U+000B (VT) must be escaped to \\u000B";
    break;
  case 0xc:
    pcVar9 = "invalid string: control character U+000C (FF) must be escaped to \\u000C or \\f";
    break;
  case 0xd:
    pcVar9 = "invalid string: control character U+000D (CR) must be escaped to \\u000D or \\r";
    break;
  case 0xe:
    pcVar9 = "invalid string: control character U+000E (SO) must be escaped to \\u000E";
    break;
  case 0xf:
    pcVar9 = "invalid string: control character U+000F (SI) must be escaped to \\u000F";
    break;
  case 0x10:
    pcVar9 = "invalid string: control character U+0010 (DLE) must be escaped to \\u0010";
    break;
  case 0x11:
    pcVar9 = "invalid string: control character U+0011 (DC1) must be escaped to \\u0011";
    break;
  case 0x12:
    pcVar9 = "invalid string: control character U+0012 (DC2) must be escaped to \\u0012";
    break;
  case 0x13:
    pcVar9 = "invalid string: control character U+0013 (DC3) must be escaped to \\u0013";
    break;
  case 0x14:
    pcVar9 = "invalid string: control character U+0014 (DC4) must be escaped to \\u0014";
    break;
  case 0x15:
    pcVar9 = "invalid string: control character U+0015 (NAK) must be escaped to \\u0015";
    break;
  case 0x16:
    pcVar9 = "invalid string: control character U+0016 (SYN) must be escaped to \\u0016";
    break;
  case 0x17:
    pcVar9 = "invalid string: control character U+0017 (ETB) must be escaped to \\u0017";
    break;
  case 0x18:
    pcVar9 = "invalid string: control character U+0018 (CAN) must be escaped to \\u0018";
    break;
  case 0x19:
    pcVar9 = "invalid string: control character U+0019 (EM) must be escaped to \\u0019";
    break;
  case 0x1a:
    pcVar9 = "invalid string: control character U+001A (SUB) must be escaped to \\u001A";
    break;
  case 0x1b:
    pcVar9 = "invalid string: control character U+001B (ESC) must be escaped to \\u001B";
    break;
  case 0x1c:
    pcVar9 = "invalid string: control character U+001C (FS) must be escaped to \\u001C";
    break;
  case 0x1d:
    pcVar9 = "invalid string: control character U+001D (GS) must be escaped to \\u001D";
    break;
  case 0x1e:
    pcVar9 = "invalid string: control character U+001E (RS) must be escaped to \\u001E";
    break;
  case 0x1f:
    pcVar9 = "invalid string: control character U+001F (US) must be escaped to \\u001F";
    break;
  case 0x20:
  case 0x21:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2b:
  case 0x2c:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5d:
  case 0x5e:
  case 0x5f:
  case 0x60:
  case 0x61:
  case 0x62:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
  case 0x75:
  case 0x76:
  case 0x77:
  case 0x78:
  case 0x79:
  case 0x7a:
  case 0x7b:
  case 0x7c:
  case 0x7d:
  case 0x7e:
  case 0x7f:
    uVar6 = (uint)*(byte *)(param_1 + 0xc);
    goto LAB_100821ee;
  case 0x22:
    goto switchD_100821e4_caseD_22;
  case 0x5c:
    iVar5 = FUN_10082c38();
    pcVar9 = "invalid string: forbidden character after backslash";
    if (iVar5 < 0x62) {
      if (iVar5 == 0x22) {
        uVar6 = 0x22;
      }
      else if (iVar5 == 0x2f) {
        uVar6 = 0x2f;
      }
      else {
        if (iVar5 != 0x5c) break;
        uVar6 = 0x5c;
      }
      goto LAB_100821ee;
    }
    switch(iVar5) {
    case 0x6e:
      uVar6 = 10;
      break;
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x73:
      goto switchD_100821e4_caseD_1;
    case 0x72:
      uVar6 = 0xd;
      break;
    case 0x74:
      uVar6 = 9;
      break;
    case 0x75:
      uVar6 = FUN_10082d3e();
      pcVar9 = "invalid string: \'\\u\' must be followed by 4 hex digits";
      if (uVar6 != 0xffffffff) {
        if ((uVar6 & 0xfffffc00) == 0xd800) {
          iVar5 = FUN_10082c38();
          if ((iVar5 == 0x5c) && (iVar5 = FUN_10082c38(), iVar5 == 0x75)) {
            uVar7 = FUN_10082d3e();
            if ((uVar7 != 0xffffffff) &&
               (pcVar9 = 
                "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF",
               (uVar7 & 0xfffffc00) == 0xdc00)) {
              uVar6 = uVar6 * 0x400 + uVar7 + 0xfca02400;
LAB_1008238b:
              FUN_10003d9a((int)(char)((byte)(uVar6 >> 0x12) | 0xf0));
              bVar2 = (byte)(uVar6 >> 0xc) & 0x3f | 0x80;
LAB_100823a6:
              FUN_10003d9a((int)(char)bVar2);
              bVar2 = (byte)(uVar6 >> 6) & 0x3f | 0x80;
LAB_100823ba:
              FUN_10003d9a((int)(char)bVar2);
              uVar6 = (uint)((byte)uVar6 & 0x3f | 0x80);
              break;
            }
          }
          else {
            pcVar9 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
          }
        }
        else {
          if ((uVar6 & 0xfffffc00) != 0xdc00) {
            if (0x7f < (int)uVar6) {
              if (0x7ff < uVar6) {
                if (0xffff < uVar6) goto LAB_1008238b;
                bVar2 = (byte)(uVar6 >> 0xc) | 0xe0;
                goto LAB_100823a6;
              }
              bVar2 = (byte)(uVar6 >> 6) | 0xc0;
              goto LAB_100823ba;
            }
            break;
          }
          pcVar9 = "invalid string: surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF";
        }
      }
      goto switchD_100821e4_caseD_1;
    default:
      if (iVar5 == 0x62) {
        uVar6 = 8;
      }
      else {
        if (iVar5 != 0x66) goto switchD_100821e4_caseD_1;
        uVar6 = 0xc;
      }
    }
LAB_100821ee:
    FUN_10003d9a((int)(char)uVar6);
    goto LAB_100821c4;
  default:
    pcVar9 = "invalid string: ill-formed UTF-8 byte";
    break;
  case 0xc2:
  case 0xc3:
  case 0xc4:
  case 0xc5:
  case 0xc6:
  case 199:
  case 200:
  case 0xc9:
  case 0xca:
  case 0xcb:
  case 0xcc:
  case 0xcd:
  case 0xce:
  case 0xcf:
  case 0xd0:
  case 0xd1:
  case 0xd2:
  case 0xd3:
  case 0xd4:
  case 0xd5:
  case 0xd6:
  case 0xd7:
  case 0xd8:
  case 0xd9:
  case 0xda:
  case 0xdb:
  case 0xdc:
  case 0xdd:
  case 0xde:
  case 0xdf:
    local_2c = 0x80;
    uStack_28 = 0xbf;
    puVar8 = &uStack_24;
    goto LAB_100822b3;
  case 0xe0:
    local_2c = _DAT_1028f710;
    uStack_28 = _UNK_1028f714;
    uStack_24 = _UNK_1028f718;
    uStack_20 = _UNK_1028f71c;
    goto LAB_1008221c;
  case 0xe1:
  case 0xe2:
  case 0xe3:
  case 0xe4:
  case 0xe5:
  case 0xe6:
  case 0xe7:
  case 0xe8:
  case 0xe9:
  case 0xea:
  case 0xeb:
  case 0xec:
  case 0xee:
  case 0xef:
    local_2c = _DAT_1028f700;
    uStack_28 = _UNK_1028f704;
    uStack_24 = _UNK_1028f708;
    uStack_20 = _UNK_1028f70c;
    goto LAB_1008221c;
  case 0xed:
    local_2c = _DAT_1028f6f0;
    uStack_28 = _UNK_1028f6f4;
    uStack_24 = _UNK_1028f6f8;
    uStack_20 = _UNK_1028f6fc;
LAB_1008221c:
    puVar8 = (uint *)&local_1c;
LAB_100822b3:
    cVar1 = FUN_10082dc8(&local_2c,puVar8);
    if (cVar1 == '\0') {
LAB_10082531:
      uVar4 = 0xe;
switchD_100821e4_caseD_22:
      if (DAT_10388d00 == (local_14 ^ (uint)&local_2c)) {
        return uVar4;
      }
                    /* WARNING: Subroutine does not return */
      FUN_102283e0();
    }
    goto LAB_100821c4;
  case 0xf0:
    local_1c = DAT_10293e04;
    local_2c = _DAT_10293df4;
    uStack_28 = _UNK_10293df8;
    uStack_24 = _UNK_10293dfc;
    uStack_20 = _UNK_10293e00;
    goto LAB_100822aa;
  case 0xf1:
  case 0xf2:
  case 0xf3:
    local_1c = DAT_10293e1c;
    local_2c = _DAT_10293e0c;
    uStack_28 = _UNK_10293e10;
    uStack_24 = _UNK_10293e14;
    uStack_20 = _UNK_10293e18;
    goto LAB_100822aa;
  case 0xf4:
    local_1c = DAT_10293e34;
    local_2c = _DAT_10293e24;
    uStack_28 = _UNK_10293e28;
    uStack_24 = _UNK_10293e2c;
    uStack_20 = _UNK_10293e30;
LAB_100822aa:
    puVar8 = &local_14;
    goto LAB_100822b3;
  case 0xffffffff:
    pcVar9 = "invalid string: missing closing quote";
  }
switchD_100821e4_caseD_1:
  *(char **)(param_1 + 0x44) = pcVar9;
  goto LAB_10082531;
}

