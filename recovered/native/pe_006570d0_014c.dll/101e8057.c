/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101e8057 */

int __fastcall FUN_101e8057(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (param_2 < 0x7362786f) {
    if (param_2 < 0x68617363) {
      switch(param_2) {
      case 0x67737030:
        if (1 < *(ushort *)(param_1 + 0x236)) {
          iVar1 = *(int *)(param_1 + 0x238);
        }
        break;
      case 0x67737031:
        if (2 < *(ushort *)(param_1 + 0x236)) {
          iVar1 = *(int *)(param_1 + 0x238) + 4;
        }
        break;
      case 0x67737032:
        if (3 < *(ushort *)(param_1 + 0x236)) {
          iVar1 = *(int *)(param_1 + 0x238) + 8;
        }
        break;
      case 0x67737033:
        if (4 < *(ushort *)(param_1 + 0x236)) {
          iVar1 = *(int *)(param_1 + 0x238) + 0xc;
        }
        break;
      case 0x67737034:
        if (5 < *(ushort *)(param_1 + 0x236)) {
          iVar1 = *(int *)(param_1 + 0x238) + 0x10;
        }
        break;
      case 0x67737035:
        if (6 < *(ushort *)(param_1 + 0x236)) {
          iVar1 = *(int *)(param_1 + 0x238) + 0x14;
        }
        break;
      case 0x67737036:
        if (7 < *(ushort *)(param_1 + 0x236)) {
          iVar1 = *(int *)(param_1 + 0x238) + 0x18;
        }
        break;
      case 0x67737037:
        if (8 < *(ushort *)(param_1 + 0x236)) {
          iVar1 = *(int *)(param_1 + 0x238) + 0x1c;
        }
        break;
      case 0x67737038:
        if (9 < *(ushort *)(param_1 + 0x236)) {
          iVar1 = *(int *)(param_1 + 0x238) + 0x20;
        }
        break;
      case 0x67737039:
        if (10 < *(ushort *)(param_1 + 0x236)) {
          iVar1 = *(int *)(param_1 + 0x238) + 0x24;
        }
        break;
      default:
        if (param_2 == 0x63706874) {
          iVar1 = param_1 + 0x1ce;
        }
      }
      return iVar1;
    }
    if (param_2 < 0x6863726e) {
      if (param_2 < 0x68636c64) {
        if (param_2 == 0x68617363) {
          iVar1 = param_1 + 0x1ba;
        }
        else if (param_2 == 0x68636c61) {
          iVar1 = param_1 + 0x1c0;
        }
      }
      else if (param_2 == 0x68636c64) {
        iVar1 = param_1 + 0x1c2;
      }
      else if (param_2 == 0x68636f66) {
        iVar1 = param_1 + 0xee;
      }
    }
    else if (param_2 < 0x68647363) {
      if (param_2 == 0x6863726e) {
        iVar1 = param_1 + 0xec;
      }
      else if (param_2 == 0x68637273) {
        iVar1 = param_1 + 0xea;
      }
    }
    else if (param_2 == 0x68647363) {
      iVar1 = param_1 + 0x1bc;
    }
    else if (param_2 == 0x686c6770) {
      iVar1 = param_1 + 0x1be;
    }
  }
  else if (param_2 < 0x73747273) {
    if (param_2 < 0x7370786f) {
      if (param_2 < 0x7362796f) {
        if (param_2 == 0x7362786f) {
          iVar1 = param_1 + 0x182;
        }
        else if (param_2 == 0x73627873) {
          iVar1 = param_1 + 0x17e;
        }
      }
      else if (param_2 == 0x7362796f) {
        iVar1 = param_1 + 0x184;
      }
      else if (param_2 == 0x73627973) {
        iVar1 = param_1 + 0x180;
      }
    }
    else if (param_2 < 0x7370796f) {
      if (param_2 == 0x7370786f) {
        iVar1 = param_1 + 0x18a;
      }
      else if (param_2 == 0x73707873) {
        iVar1 = param_1 + 0x186;
      }
    }
    else if (param_2 == 0x7370796f) {
      iVar1 = param_1 + 0x18c;
    }
    else if (param_2 == 0x73707973) {
      iVar1 = param_1 + 0x188;
    }
    else if (param_2 == 0x7374726f) {
      iVar1 = param_1 + 400;
    }
  }
  else if (param_2 < 0x7663726e) {
    if (param_2 < 0x756e6473) {
      if (param_2 == 0x73747273) {
        iVar1 = param_1 + 0x18e;
      }
      else if (param_2 == 0x756e646f) {
        iVar1 = param_1 + 0x1e4;
      }
    }
    else if (param_2 == 0x756e6473) {
      iVar1 = param_1 + 0x1e6;
    }
    else if (param_2 == 0x76617363) {
      iVar1 = param_1 + 300;
    }
    else if (param_2 == 0x76636f66) {
      iVar1 = param_1 + 0x13e;
    }
  }
  else if (param_2 < 0x76647363) {
    if (param_2 == 0x7663726e) {
      iVar1 = param_1 + 0x13c;
    }
    else if (param_2 == 0x76637273) {
      iVar1 = param_1 + 0x13a;
    }
  }
  else if (param_2 == 0x76647363) {
    iVar1 = param_1 + 0x12e;
  }
  else if (param_2 == 0x766c6770) {
    iVar1 = param_1 + 0x130;
  }
  else if (param_2 == 0x78686774) {
    iVar1 = param_1 + 0x1cc;
  }
  return iVar1;
}

