/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019930b */

undefined4 FUN_1019930b(int param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if ((param_1 == 0xd & (byte)(param_2 >> 0x18) & 1) != 0) {
    return 0x273;
  }
  uVar2 = 0x200;
  switch(param_1) {
  case 8:
    uVar2 = 0x20b;
    break;
  case 9:
    break;
  default:
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
      goto switchD_10199759_caseD_2a;
    }
    uVar2 = 0x25e;
    switch(uVar1) {
    case 0x27:
      uVar2 = 0x259;
      break;
    case 0x28:
      uVar2 = 0x254;
      break;
    case 0x29:
      break;
    case 0x2b:
      uVar2 = 0x25c;
      break;
    case 0x33:
      goto switchD_10199344_caseD_bc;
    case 0x34:
      goto switchD_10199344_caseD_be;
    case 0x35:
      uVar2 = 600;
      break;
    default:
      if (uVar1 == 0x1b) {
        return 0x25d;
      }
      if (uVar1 == 0x56) {
        return 0x277;
      }
    case 0x2a:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x32:
switchD_10199759_caseD_2a:
      uVar2 = 0;
    }
    break;
  case 0xd:
    uVar2 = 0x20d;
    break;
  case 0x13:
    uVar2 = 0x263;
    break;
  case 0x14:
    uVar2 = 0x25f;
    break;
  case 0x1b:
    uVar2 = 0x20e;
    break;
  case 0x20:
    uVar2 = 0x20c;
    break;
  case 0x21:
    uVar2 = 0x205;
    break;
  case 0x22:
    uVar2 = 0x206;
    break;
  case 0x23:
    uVar2 = 0x208;
    break;
  case 0x24:
    uVar2 = 0x207;
    break;
  case 0x25:
    uVar2 = 0x201;
    break;
  case 0x26:
    uVar2 = 0x203;
    break;
  case 0x27:
    uVar2 = 0x202;
    break;
  case 0x28:
    uVar2 = 0x204;
    break;
  case 0x2c:
    uVar2 = 0x262;
    break;
  case 0x2d:
    uVar2 = 0x209;
    break;
  case 0x2e:
    uVar2 = 0x20a;
    break;
  case 0x30:
    uVar2 = 0x218;
    break;
  case 0x31:
    uVar2 = 0x219;
    break;
  case 0x32:
    uVar2 = 0x21a;
    break;
  case 0x33:
    uVar2 = 0x21b;
    break;
  case 0x34:
    uVar2 = 0x21c;
    break;
  case 0x35:
    uVar2 = 0x21d;
    break;
  case 0x36:
    uVar2 = 0x21e;
    break;
  case 0x37:
    uVar2 = 0x21f;
    break;
  case 0x38:
    uVar2 = 0x220;
    break;
  case 0x39:
    uVar2 = 0x221;
    break;
  case 0x41:
    uVar2 = 0x222;
    break;
  case 0x42:
    uVar2 = 0x223;
    break;
  case 0x43:
    uVar2 = 0x224;
    break;
  case 0x44:
    uVar2 = 0x225;
    break;
  case 0x45:
    uVar2 = 0x226;
    break;
  case 0x46:
    uVar2 = 0x227;
    break;
  case 0x47:
    uVar2 = 0x228;
    break;
  case 0x48:
    uVar2 = 0x229;
    break;
  case 0x49:
    uVar2 = 0x22a;
    break;
  case 0x4a:
    uVar2 = 0x22b;
    break;
  case 0x4b:
    uVar2 = 0x22c;
    break;
  case 0x4c:
    uVar2 = 0x22d;
    break;
  case 0x4d:
    uVar2 = 0x22e;
    break;
  case 0x4e:
    uVar2 = 0x22f;
    break;
  case 0x4f:
    uVar2 = 0x230;
    break;
  case 0x50:
    uVar2 = 0x231;
    break;
  case 0x51:
    uVar2 = 0x232;
    break;
  case 0x52:
    uVar2 = 0x233;
    break;
  case 0x53:
    uVar2 = 0x234;
    break;
  case 0x54:
    uVar2 = 0x235;
    break;
  case 0x55:
    uVar2 = 0x236;
    break;
  case 0x56:
    uVar2 = 0x237;
    break;
  case 0x57:
    uVar2 = 0x238;
    break;
  case 0x58:
    uVar2 = 0x239;
    break;
  case 0x59:
    uVar2 = 0x23a;
    break;
  case 0x5a:
    uVar2 = 0x23b;
    break;
  case 0x5b:
    uVar2 = 0x212;
    break;
  case 0x5c:
    uVar2 = 0x216;
    break;
  case 0x5d:
    uVar2 = 0x217;
    break;
  case 0x60:
    uVar2 = 0x264;
    break;
  case 0x61:
    uVar2 = 0x265;
    break;
  case 0x62:
    uVar2 = 0x266;
    break;
  case 99:
    uVar2 = 0x267;
    break;
  case 100:
    uVar2 = 0x268;
    break;
  case 0x65:
    uVar2 = 0x269;
    break;
  case 0x66:
    uVar2 = 0x26a;
    break;
  case 0x67:
    uVar2 = 0x26b;
    break;
  case 0x68:
    uVar2 = 0x26c;
    break;
  case 0x69:
    uVar2 = 0x26d;
    break;
  case 0x6a:
    uVar2 = 0x270;
    break;
  case 0x6b:
    uVar2 = 0x272;
    break;
  case 0x6d:
    uVar2 = 0x271;
    break;
  case 0x6e:
    uVar2 = 0x26e;
    break;
  case 0x6f:
    uVar2 = 0x26f;
    break;
  case 0x70:
    uVar2 = 0x23c;
    break;
  case 0x71:
    uVar2 = 0x23d;
    break;
  case 0x72:
    uVar2 = 0x23e;
    break;
  case 0x73:
    uVar2 = 0x23f;
    break;
  case 0x74:
    uVar2 = 0x240;
    break;
  case 0x75:
    uVar2 = 0x241;
    break;
  case 0x76:
    uVar2 = 0x242;
    break;
  case 0x77:
    uVar2 = 0x243;
    break;
  case 0x78:
    uVar2 = 0x244;
    break;
  case 0x79:
    uVar2 = 0x245;
    break;
  case 0x7a:
    uVar2 = 0x246;
    break;
  case 0x7b:
    uVar2 = 0x247;
    break;
  case 0x7c:
    uVar2 = 0x248;
    break;
  case 0x7d:
    uVar2 = 0x249;
    break;
  case 0x7e:
    uVar2 = 0x24a;
    break;
  case 0x7f:
    uVar2 = 0x24b;
    break;
  case 0x80:
    uVar2 = 0x24c;
    break;
  case 0x81:
    uVar2 = 0x24d;
    break;
  case 0x82:
    uVar2 = 0x24e;
    break;
  case 0x83:
    uVar2 = 0x24f;
    break;
  case 0x84:
    uVar2 = 0x250;
    break;
  case 0x85:
    uVar2 = 0x251;
    break;
  case 0x86:
    uVar2 = 0x252;
    break;
  case 0x87:
    uVar2 = 0x253;
    break;
  case 0x90:
    uVar2 = 0x261;
    break;
  case 0x91:
    uVar2 = 0x260;
    break;
  case 0xa0:
    uVar2 = 0x210;
    break;
  case 0xa1:
    uVar2 = 0x214;
    break;
  case 0xa2:
    uVar2 = 0x20f;
    break;
  case 0xa3:
    uVar2 = 0x213;
    break;
  case 0xa4:
    uVar2 = 0x211;
    break;
  case 0xa5:
    uVar2 = 0x215;
    break;
  case 0xa6:
    uVar2 = 0x275;
    break;
  case 0xa7:
    uVar2 = 0x276;
    break;
  case 0xbc:
switchD_10199344_caseD_bc:
    uVar2 = 0x255;
    break;
  case 0xbe:
switchD_10199344_caseD_be:
    uVar2 = 599;
  }
  return uVar2;
}

