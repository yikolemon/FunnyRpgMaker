/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18004d378 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_18004d378(longlong param_1)

{
  longlong lVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong unaff_RBX;
  undefined7 uVar10;
  char *pcVar11;
  undefined1 auStack_f8 [32];
  longlong local_d8 [12];
  undefined8 *local_78;
  undefined4 *local_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  undefined1 local_50 [8];
  ulonglong local_48;
  
  local_48 = DAT_180402640 ^ (ulonglong)auStack_f8;
  FUN_18004de6c();
  lVar1 = param_1 + 0x50;
LAB_18004d3c8:
  uVar3 = FUN_18004db78(param_1);
  uVar10 = (undefined7)(unaff_RBX >> 8);
  switch(uVar3) {
  case 0:
    pcVar11 = "invalid string: control character U+0000 (NUL) must be escaped to \\u0000";
    break;
  case 1:
    pcVar11 = "invalid string: control character U+0001 (SOH) must be escaped to \\u0001";
    break;
  case 2:
    pcVar11 = "invalid string: control character U+0002 (STX) must be escaped to \\u0002";
    break;
  case 3:
    pcVar11 = "invalid string: control character U+0003 (ETX) must be escaped to \\u0003";
    break;
  case 4:
    pcVar11 = "invalid string: control character U+0004 (EOT) must be escaped to \\u0004";
    break;
  case 5:
    pcVar11 = "invalid string: control character U+0005 (ENQ) must be escaped to \\u0005";
    break;
  case 6:
    pcVar11 = "invalid string: control character U+0006 (ACK) must be escaped to \\u0006";
    break;
  case 7:
    pcVar11 = "invalid string: control character U+0007 (BEL) must be escaped to \\u0007";
    break;
  case 8:
    pcVar11 = "invalid string: control character U+0008 (BS) must be escaped to \\u0008 or \\b";
    break;
  case 9:
    pcVar11 = "invalid string: control character U+0009 (HT) must be escaped to \\u0009 or \\t";
    break;
  case 10:
    pcVar11 = "invalid string: control character U+000A (LF) must be escaped to \\u000A or \\n";
    break;
  case 0xb:
    pcVar11 = "invalid string: control character U+000B (VT) must be escaped to \\u000B";
    break;
  case 0xc:
    pcVar11 = "invalid string: control character U+000C (FF) must be escaped to \\u000C or \\f";
    break;
  case 0xd:
    pcVar11 = "invalid string: control character U+000D (CR) must be escaped to \\u000D or \\r";
    break;
  case 0xe:
    pcVar11 = "invalid string: control character U+000E (SO) must be escaped to \\u000E";
    break;
  case 0xf:
    pcVar11 = "invalid string: control character U+000F (SI) must be escaped to \\u000F";
    break;
  case 0x10:
    pcVar11 = "invalid string: control character U+0010 (DLE) must be escaped to \\u0010";
    break;
  case 0x11:
    pcVar11 = "invalid string: control character U+0011 (DC1) must be escaped to \\u0011";
    break;
  case 0x12:
    pcVar11 = "invalid string: control character U+0012 (DC2) must be escaped to \\u0012";
    break;
  case 0x13:
    pcVar11 = "invalid string: control character U+0013 (DC3) must be escaped to \\u0013";
    break;
  case 0x14:
    pcVar11 = "invalid string: control character U+0014 (DC4) must be escaped to \\u0014";
    break;
  case 0x15:
    pcVar11 = "invalid string: control character U+0015 (NAK) must be escaped to \\u0015";
    break;
  case 0x16:
    pcVar11 = "invalid string: control character U+0016 (SYN) must be escaped to \\u0016";
    break;
  case 0x17:
    pcVar11 = "invalid string: control character U+0017 (ETB) must be escaped to \\u0017";
    break;
  case 0x18:
    pcVar11 = "invalid string: control character U+0018 (CAN) must be escaped to \\u0018";
    break;
  case 0x19:
    pcVar11 = "invalid string: control character U+0019 (EM) must be escaped to \\u0019";
    break;
  case 0x1a:
    pcVar11 = "invalid string: control character U+001A (SUB) must be escaped to \\u001A";
    break;
  case 0x1b:
    pcVar11 = "invalid string: control character U+001B (ESC) must be escaped to \\u001B";
    break;
  case 0x1c:
    pcVar11 = "invalid string: control character U+001C (FS) must be escaped to \\u001C";
    break;
  case 0x1d:
    pcVar11 = "invalid string: control character U+001D (GS) must be escaped to \\u001D";
    break;
  case 0x1e:
    pcVar11 = "invalid string: control character U+001E (RS) must be escaped to \\u001E";
    break;
  case 0x1f:
    pcVar11 = "invalid string: control character U+001F (US) must be escaped to \\u001F";
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
    unaff_RBX = CONCAT71(uVar10,*(undefined1 *)(param_1 + 0x14));
    goto LAB_18004d3ea;
  case 0x22:
    uVar7 = 4;
    goto LAB_18004d81a;
  case 0x5c:
    iVar4 = FUN_18004db78(param_1);
    pcVar11 = "invalid string: forbidden character after backslash";
    if (iVar4 < 0x62) {
      if (iVar4 == 0x22) {
        unaff_RBX = CONCAT71(uVar10,0x22);
      }
      else if (iVar4 == 0x2f) {
        unaff_RBX = CONCAT71(uVar10,0x2f);
      }
      else {
        if (iVar4 != 0x5c) break;
        unaff_RBX = CONCAT71(uVar10,0x5c);
      }
      goto LAB_18004d3ea;
    }
    switch(iVar4) {
    case 0x6e:
      unaff_RBX = CONCAT71(uVar10,10);
      break;
    case 0x6f:
    case 0x70:
    case 0x71:
    case 0x73:
      goto switchD_18004d559_caseD_6f;
    case 0x72:
      unaff_RBX = CONCAT71(uVar10,0xd);
      break;
    case 0x74:
      unaff_RBX = CONCAT71(uVar10,9);
      break;
    case 0x75:
      uVar5 = FUN_18004df04(param_1);
      pcVar11 = "invalid string: \'\\u\' must be followed by 4 hex digits";
      if (uVar5 != 0xffffffff) {
        unaff_RBX = (ulonglong)uVar5;
        if ((uVar5 & 0xfffffc00) == 0xd800) {
          iVar4 = FUN_18004db78(param_1);
          if ((iVar4 == 0x5c) && (iVar4 = FUN_18004db78(param_1), iVar4 == 0x75)) {
            uVar6 = FUN_18004df04(param_1);
            if ((uVar6 != 0xffffffff) &&
               (pcVar11 = 
                "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF",
               (uVar6 & 0xfffffc00) == 0xdc00)) {
              unaff_RBX = (ulonglong)(uVar5 * 0x400 + uVar6 + 0xfca02400);
LAB_18004d60c:
              FUN_180003bf2(lVar1,unaff_RBX >> 0x12 | 0xf0);
              uVar9 = unaff_RBX >> 0xc & 0xfff3f | 0x80;
LAB_18004d627:
              FUN_180003bf2(lVar1,uVar9);
              uVar9 = unaff_RBX >> 6 & 0x3ffff3f | 0x80;
LAB_18004d63a:
              FUN_180003bf2(lVar1,uVar9);
              unaff_RBX = unaff_RBX & 0xffffffffffffff3f | 0x80;
              break;
            }
          }
          else {
            pcVar11 = "invalid string: surrogate U+D800..U+DBFF must be followed by U+DC00..U+DFFF";
          }
        }
        else {
          if ((uVar5 & 0xfffffc00) != 0xdc00) {
            if (0x7f < (int)uVar5) {
              if (0x7ff < uVar5) {
                if (0xffff < uVar5) goto LAB_18004d60c;
                uVar9 = (ulonglong)CONCAT31((uint3)(uVar5 >> 0x14),(char)(uVar5 >> 0xc)) | 0xe0;
                goto LAB_18004d627;
              }
              uVar9 = (ulonglong)(uVar5 >> 6) | 0xc0;
              goto LAB_18004d63a;
            }
            break;
          }
          pcVar11 = "invalid string: surrogate U+DC00..U+DFFF must follow U+D800..U+DBFF";
        }
      }
      goto switchD_18004d559_caseD_6f;
    default:
      if (iVar4 == 0x62) {
        unaff_RBX = CONCAT71(uVar10,8);
      }
      else {
        if (iVar4 != 0x66) goto switchD_18004d559_caseD_6f;
        unaff_RBX = CONCAT71(uVar10,0xc);
      }
    }
LAB_18004d3ea:
    FUN_180003bf2(lVar1,unaff_RBX & 0xffffffff);
    goto LAB_18004d3c8;
  default:
    pcVar11 = "invalid string: ill-formed UTF-8 byte";
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
    local_78 = &local_68;
    local_68 = 0xbf00000080;
    local_70 = &uStack_60;
    goto LAB_18004d512;
  case 0xe0:
    local_68 = CONCAT44(_UNK_1802b0da4,_DAT_1802b0da0);
    uStack_60 = _UNK_1802b0da8;
    uStack_5c = _UNK_1802b0dac;
    plVar8 = local_d8 + 10;
    goto LAB_18004d436;
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
    local_68 = CONCAT44(_UNK_1802b0d94,_DAT_1802b0d90);
    uStack_60 = _UNK_1802b0d98;
    uStack_5c = _UNK_1802b0d9c;
    plVar8 = local_d8 + 8;
    goto LAB_18004d436;
  case 0xed:
    uStack_60 = _UNK_1802b0d88;
    uStack_5c = _UNK_1802b0d8c;
    local_68 = CONCAT44(_UNK_1802b0d84,_DAT_1802b0d80);
    plVar8 = local_d8 + 6;
LAB_18004d436:
    *plVar8 = (longlong)&local_68;
    plVar8[1] = (longlong)&local_58;
LAB_18004d512:
    cVar2 = FUN_18004dfa8(param_1);
    if (cVar2 == '\0') {
LAB_18004d815:
      uVar7 = 0xe;
LAB_18004d81a:
      if (DAT_180402640 == (local_48 ^ (ulonglong)auStack_f8)) {
        return uVar7;
      }
                    /* WARNING: Subroutine does not return */
      FUN_1802396d0(local_48 ^ (ulonglong)auStack_f8);
    }
    goto LAB_18004d3c8;
  case 0xf0:
    local_68 = CONCAT44(_UNK_1802b0a34,_DAT_1802b0a30);
    uStack_60 = _UNK_1802b0a38;
    uStack_5c = _UNK_1802b0a3c;
    plVar8 = local_d8 + 4;
    goto LAB_18004d50b;
  case 0xf1:
  case 0xf2:
  case 0xf3:
    local_68 = CONCAT44(_UNK_1802b0a4c,_DAT_1802b0a48);
    uStack_60 = _UNK_1802b0a50;
    uStack_5c = _UNK_1802b0a54;
    plVar8 = local_d8 + 2;
    goto LAB_18004d50b;
  case 0xf4:
    local_68 = CONCAT44(_UNK_1802b0a64,_DAT_1802b0a60);
    uStack_60 = _UNK_1802b0a68;
    uStack_5c = _UNK_1802b0a6c;
    plVar8 = local_d8;
LAB_18004d50b:
    local_58 = 0xbf00000080;
    *plVar8 = (longlong)&local_68;
    plVar8[1] = (longlong)local_50;
    goto LAB_18004d512;
  case 0xffffffff:
    pcVar11 = "invalid string: missing closing quote";
  }
switchD_18004d559_caseD_6f:
  *(char **)(param_1 + 0x70) = pcVar11;
  goto LAB_18004d815;
}

