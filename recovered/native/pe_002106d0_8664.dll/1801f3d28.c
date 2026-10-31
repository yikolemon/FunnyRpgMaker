/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801f3d28 */

longlong FUN_1801f3d28(longlong param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = 0;
  if (param_2 < 0x7362786f) {
    if (param_2 < 0x68617363) {
      switch(param_2) {
      case 0x67737030:
        if (1 < *(ushort *)(param_1 + 0x302)) {
          return *(longlong *)(param_1 + 0x308);
        }
        break;
      case 0x67737031:
        if (2 < *(ushort *)(param_1 + 0x302)) {
          return *(longlong *)(param_1 + 0x308) + 4;
        }
        break;
      case 0x67737032:
        if (3 < *(ushort *)(param_1 + 0x302)) {
          return *(longlong *)(param_1 + 0x308) + 8;
        }
        break;
      case 0x67737033:
        if (4 < *(ushort *)(param_1 + 0x302)) {
          return *(longlong *)(param_1 + 0x308) + 0xc;
        }
        break;
      case 0x67737034:
        if (5 < *(ushort *)(param_1 + 0x302)) {
          return *(longlong *)(param_1 + 0x308) + 0x10;
        }
        break;
      case 0x67737035:
        if (6 < *(ushort *)(param_1 + 0x302)) {
          return *(longlong *)(param_1 + 0x308) + 0x14;
        }
        break;
      case 0x67737036:
        if (7 < *(ushort *)(param_1 + 0x302)) {
          return *(longlong *)(param_1 + 0x308) + 0x18;
        }
        break;
      case 0x67737037:
        if (8 < *(ushort *)(param_1 + 0x302)) {
          return *(longlong *)(param_1 + 0x308) + 0x1c;
        }
        break;
      case 0x67737038:
        if (9 < *(ushort *)(param_1 + 0x302)) {
          return *(longlong *)(param_1 + 0x308) + 0x20;
        }
        break;
      case 0x67737039:
        if (10 < *(ushort *)(param_1 + 0x302)) {
          return *(longlong *)(param_1 + 0x308) + 0x24;
        }
        break;
      default:
        if (param_2 != 0x63706874) {
          return 0;
        }
        return param_1 + 0x262;
      }
      return 0;
    }
    if (param_2 < 0x6863726e) {
      if (param_2 < 0x68636c64) {
        if (param_2 == 0x68617363) {
          lVar1 = param_1 + 0x24e;
        }
        else {
          lVar1 = 0;
          if (param_2 == 0x68636c61) {
            lVar1 = param_1 + 0x254;
          }
        }
      }
      else if (param_2 == 0x68636c64) {
        lVar1 = param_1 + 0x256;
      }
      else if (param_2 == 0x68636f66) {
        lVar1 = param_1 + 0x14e;
      }
    }
    else if (param_2 < 0x68647363) {
      if (param_2 == 0x6863726e) {
        lVar1 = param_1 + 0x14c;
      }
      else if (param_2 == 0x68637273) {
        lVar1 = param_1 + 0x14a;
      }
    }
    else if (param_2 == 0x68647363) {
      lVar1 = param_1 + 0x250;
    }
    else if (param_2 == 0x686c6770) {
      lVar1 = param_1 + 0x252;
    }
  }
  else if (param_2 < 0x73747273) {
    if (param_2 < 0x7370786f) {
      if (param_2 < 0x7362796f) {
        if (param_2 == 0x7362786f) {
          lVar1 = param_1 + 0x216;
        }
        else if (param_2 == 0x73627873) {
          lVar1 = param_1 + 0x212;
        }
      }
      else if (param_2 == 0x7362796f) {
        lVar1 = param_1 + 0x218;
      }
      else if (param_2 == 0x73627973) {
        lVar1 = param_1 + 0x214;
      }
    }
    else if (param_2 < 0x7370796f) {
      if (param_2 == 0x7370786f) {
        lVar1 = param_1 + 0x21e;
      }
      else if (param_2 == 0x73707873) {
        lVar1 = param_1 + 0x21a;
      }
    }
    else if (param_2 == 0x7370796f) {
      lVar1 = param_1 + 0x220;
    }
    else if (param_2 == 0x73707973) {
      lVar1 = param_1 + 0x21c;
    }
    else if (param_2 == 0x7374726f) {
      lVar1 = param_1 + 0x224;
    }
  }
  else if (param_2 < 0x7663726e) {
    if (param_2 < 0x756e6473) {
      if (param_2 == 0x73747273) {
        lVar1 = param_1 + 0x222;
      }
      else if (param_2 == 0x756e646f) {
        lVar1 = param_1 + 0x278;
      }
    }
    else if (param_2 == 0x756e6473) {
      lVar1 = param_1 + 0x27a;
    }
    else if (param_2 == 0x76617363) {
      lVar1 = param_1 + 0x19c;
    }
    else if (param_2 == 0x76636f66) {
      lVar1 = param_1 + 0x1ae;
    }
  }
  else if (param_2 < 0x76647363) {
    if (param_2 == 0x7663726e) {
      lVar1 = param_1 + 0x1ac;
    }
    else if (param_2 == 0x76637273) {
      lVar1 = param_1 + 0x1aa;
    }
  }
  else if (param_2 == 0x76647363) {
    lVar1 = param_1 + 0x19e;
  }
  else if (param_2 == 0x766c6770) {
    lVar1 = param_1 + 0x1a0;
  }
  else if (param_2 == 0x78686774) {
    lVar1 = param_1 + 0x260;
  }
  return lVar1;
}

