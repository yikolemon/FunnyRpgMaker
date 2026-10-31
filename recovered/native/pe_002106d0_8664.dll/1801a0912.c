/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a0912 */

undefined8 FUN_1801a0912(longlong param_1,uint param_2)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar2 = 0x273;
  if ((param_1 == 0xd & (byte)(param_2 >> 0x18) & 1) == 0) {
    switch(param_1) {
    case 8:
      return 0x20b;
    case 9:
      return 0x200;
    case 0xd:
      return 0x20d;
    case 0x13:
      return 0x263;
    case 0x14:
      return 0x25f;
    case 0x1b:
      return 0x20e;
    case 0x20:
      return 0x20c;
    case 0x21:
      return 0x205;
    case 0x22:
      return 0x206;
    case 0x23:
      return 0x208;
    case 0x24:
      return 0x207;
    case 0x25:
      return 0x201;
    case 0x26:
      return 0x203;
    case 0x27:
      return 0x202;
    case 0x28:
      return 0x204;
    case 0x2c:
      return 0x262;
    case 0x2d:
      return 0x209;
    case 0x2e:
      return 0x20a;
    case 0x30:
      return 0x218;
    case 0x31:
      return 0x219;
    case 0x32:
      return 0x21a;
    case 0x33:
      return 0x21b;
    case 0x34:
      return 0x21c;
    case 0x35:
      return 0x21d;
    case 0x36:
      return 0x21e;
    case 0x37:
      return 0x21f;
    case 0x38:
      return 0x220;
    case 0x39:
      return 0x221;
    case 0x41:
      return 0x222;
    case 0x42:
      return 0x223;
    case 0x43:
      return 0x224;
    case 0x44:
      return 0x225;
    case 0x45:
      return 0x226;
    case 0x46:
      return 0x227;
    case 0x47:
      return 0x228;
    case 0x48:
      return 0x229;
    case 0x49:
      return 0x22a;
    case 0x4a:
      return 0x22b;
    case 0x4b:
      return 0x22c;
    case 0x4c:
      return 0x22d;
    case 0x4d:
      return 0x22e;
    case 0x4e:
      return 0x22f;
    case 0x4f:
      return 0x230;
    case 0x50:
      return 0x231;
    case 0x51:
      return 0x232;
    case 0x52:
      return 0x233;
    case 0x53:
      return 0x234;
    case 0x54:
      return 0x235;
    case 0x55:
      return 0x236;
    case 0x56:
      return 0x237;
    case 0x57:
      return 0x238;
    case 0x58:
      return 0x239;
    case 0x59:
      return 0x23a;
    case 0x5a:
      return 0x23b;
    case 0x5b:
      return 0x212;
    case 0x5c:
      return 0x216;
    case 0x5d:
      return 0x217;
    case 0x60:
      return 0x264;
    case 0x61:
      return 0x265;
    case 0x62:
      return 0x266;
    case 99:
      return 0x267;
    case 100:
      return 0x268;
    case 0x65:
      return 0x269;
    case 0x66:
      return 0x26a;
    case 0x67:
      return 0x26b;
    case 0x68:
      return 0x26c;
    case 0x69:
      return 0x26d;
    case 0x6a:
      return 0x270;
    case 0x6b:
      return 0x272;
    case 0x6d:
      return 0x271;
    case 0x6e:
      return 0x26e;
    case 0x6f:
      return 0x26f;
    case 0x70:
      return 0x23c;
    case 0x71:
      return 0x23d;
    case 0x72:
      return 0x23e;
    case 0x73:
      return 0x23f;
    case 0x74:
      return 0x240;
    case 0x75:
      return 0x241;
    case 0x76:
      return 0x242;
    case 0x77:
      return 0x243;
    case 0x78:
      return 0x244;
    case 0x79:
      return 0x245;
    case 0x7a:
      return 0x246;
    case 0x7b:
      return 0x247;
    case 0x7c:
      return 0x248;
    case 0x7d:
      return 0x249;
    case 0x7e:
      return 0x24a;
    case 0x7f:
      return 0x24b;
    case 0x80:
      return 0x24c;
    case 0x81:
      return 0x24d;
    case 0x82:
      return 0x24e;
    case 0x83:
      return 0x24f;
    case 0x84:
      return 0x250;
    case 0x85:
      return 0x251;
    case 0x86:
      return 0x252;
    case 0x87:
      return 0x253;
    case 0x90:
      return 0x261;
    case 0x91:
      return 0x260;
    case 0xa0:
      return 0x210;
    case 0xa1:
      return 0x214;
    case 0xa2:
      return 0x20f;
    case 0xa3:
      return 0x213;
    case 0xa4:
      return 0x211;
    case 0xa5:
      return 0x215;
    case 0xa6:
      return 0x275;
    case 0xa7:
      return 0x276;
    case 0xbc:
switchD_1801a0952_caseD_bc:
      return 0x255;
    case 0xbe:
switchD_1801a0952_caseD_be:
      return 599;
    }
    uVar1 = param_2 >> 0x10 & 0xff;
    if (uVar1 < 0x1b) {
      if (uVar1 == 0xc) {
        return 0x256;
      }
      if (uVar1 == 0xd) {
        return 0x25a;
      }
      if (uVar1 == 0x1a) {
        return 0x25b;
      }
    }
    else {
      switch(uVar1) {
      case 0x27:
        return 0x259;
      case 0x28:
        return 0x254;
      case 0x29:
        return 0x25e;
      case 0x2a:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x2f:
      case 0x30:
      case 0x31:
      case 0x32:
        break;
      case 0x2b:
        return 0x25c;
      case 0x33:
        goto switchD_1801a0952_caseD_bc;
      case 0x34:
        goto switchD_1801a0952_caseD_be;
      case 0x35:
        return 600;
      default:
        if (uVar1 == 0x1b) {
          return 0x25d;
        }
        if (uVar1 == 0x56) {
          return 0x277;
        }
      }
    }
    uVar2 = 0;
  }
  return uVar2;
}

