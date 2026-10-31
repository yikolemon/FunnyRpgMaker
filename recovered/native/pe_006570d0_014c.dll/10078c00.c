/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10078c00 */

void FUN_10078c00(uint *param_1,uint param_2,uint param_3,int *param_4,int param_5)

{
  char *pcVar1;
  sbyte sVar2;
  uint uVar3;
  uint uVar4;
  sbyte sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  uint local_24;
  uint local_20;
  
  local_24 = param_3;
  local_20 = 0x14;
  uVar8 = 0;
  do {
    uVar4 = *param_1;
    uVar3 = (uVar4 << 0xb ^ uVar4) >> 8 ^ uVar4;
    uVar7 = uVar4 << 0xb ^ uVar3;
    uVar4 = uVar7 * 0x19660d + 0x3c6ef35f;
    uVar7 = uVar7 * 0x659834 + 0xf1bbcd7c;
    if ((uVar3 & 1) != 0) {
      uVar7 = uVar4 >> 3;
    }
    uVar7 = uVar7 ^ uVar4;
    bVar9 = (uVar7 >> 10 & 1) == 0;
    sVar5 = 0x15;
    if (bVar9) {
      sVar5 = 2;
    }
    sVar2 = 9;
    if (bVar9) {
      sVar2 = 0x16;
    }
    uVar7 = uVar7 << sVar5 ^ uVar7;
    uVar7 = uVar7 >> sVar2 ^ uVar7;
    uVar4 = uVar7 | 0x100;
    if ((uVar7 & 0xfffff) != 0) {
      uVar4 = uVar7;
    }
    uVar7 = uVar4 * 0x19660d + 0x3c6ef35f;
    sVar5 = ((byte)uVar4 & 7) + 1;
    if (uVar7 == (uVar7 / 3) * 3) {
      uVar3 = uVar7 << sVar5;
LAB_10078cd1:
      uVar3 = uVar3 ^ uVar7;
    }
    else {
      if (uVar7 % 3 == 1) {
        uVar3 = uVar7 >> sVar5;
        goto LAB_10078cd1;
      }
      uVar3 = (uVar7 << sVar5) + uVar4 * -0x19660d + 0xc3910ca0;
    }
    uVar7 = uVar3 ^ 0x55aa55aa;
    if ((short)uVar3 != 0) {
      uVar7 = uVar3;
    }
    uVar6 = 0x173bef;
    if (uVar3 != 0) {
      uVar6 = uVar7;
    }
    *param_1 = uVar6;
    local_24 = param_1[((uVar4 ^ param_2) & 0x1f) * 0x100 + ((local_24 ^ uVar6) & 0xff) + 3];
    switch(~(((param_1[2] + param_2) / 5 & 0xfffffffc) * 5) + param_1[2] + param_2) {
    case 0:
      FUN_10078591(param_1,param_1 + (param_2 + 5 & 0x1f) * 0x100 + 3);
      break;
    case 1:
      uVar3 = (uVar6 << 0xb ^ uVar6) >> 8 ^ uVar6;
      uVar7 = uVar6 << 0xb ^ uVar3;
      uVar4 = uVar7 * 0x19660d + 0x3c6ef35f;
      uVar7 = uVar7 * 0x659834 + 0xf1bbcd7c;
      if ((uVar3 & 1) != 0) {
        uVar7 = uVar4 >> 3;
      }
      uVar7 = uVar7 ^ uVar4;
      bVar9 = (uVar7 >> 10 & 1) == 0;
      sVar5 = 0x15;
      if (bVar9) {
        sVar5 = 2;
      }
      sVar2 = 9;
      if (bVar9) {
        sVar2 = 0x16;
      }
      uVar7 = uVar7 << sVar5 ^ uVar7;
      uVar7 = uVar7 >> sVar2 ^ uVar7;
      uVar4 = uVar7 | 0x100;
      if ((uVar7 & 0xfffff) != 0) {
        uVar4 = uVar7;
      }
      *param_1 = uVar4;
      local_24 = local_24 ^ uVar4;
      break;
    case 4:
      if ((param_2 & 0xfffff) == 0) {
        uVar7 = param_1[1] * 0x116ca000 ^ param_1[1] * 0x5d588b65;
        uVar7 = uVar7 >> 0x11 ^ uVar7;
        uVar7 = uVar7 << 5 ^ uVar7;
        uVar3 = uVar7 & 0x3fffffff ^ uVar7 >> 0xb;
        uVar4 = 0x5d588b65;
        if (uVar7 != uVar3) {
          uVar4 = (uVar3 ^ uVar7) * 0x10dcd;
          uVar7 = uVar4 ^ 0x59a6f141;
          if ((short)uVar4 != 0) {
            uVar7 = uVar4;
          }
          uVar4 = uVar7 | 0x100;
          if ((uVar7 & 0xfffff) != 0) {
            uVar4 = uVar7;
          }
        }
        param_1[1] = uVar4;
        *(byte *)(param_5 + *param_4) = *(byte *)(param_5 + *param_4) ^ (byte)uVar4;
      }
      break;
    case 8:
    case 0xd:
      uVar4 = uVar6 * 0x19660d + 0x3c6ef35f;
      sVar5 = ((byte)uVar6 & 7) + 1;
      if (uVar4 == (uVar4 / 3) * 3) {
        uVar7 = uVar4 << sVar5;
LAB_10078f88:
        uVar7 = uVar7 ^ uVar4;
      }
      else {
        if (uVar4 % 3 == 1) {
          uVar7 = uVar4 >> sVar5;
          goto LAB_10078f88;
        }
        uVar7 = (uVar4 << sVar5) + uVar6 * -0x19660d + 0xc3910ca0;
      }
      uVar4 = uVar7 ^ 0x55aa55aa;
      if ((short)uVar7 != 0) {
        uVar4 = uVar7;
      }
      uVar3 = 0x173bef;
      if (uVar7 != 0) {
        uVar3 = uVar4;
      }
      *param_1 = uVar3;
      pcVar1 = (char *)(param_5 + uVar3 + (uVar3 / 3 & 0xfffffff0) * -3);
      *pcVar1 = *pcVar1 + (char)local_24;
      break;
    case 10:
      uVar3 = (uVar6 << 0xb ^ uVar6) >> 8 ^ uVar6;
      uVar7 = uVar6 << 0xb ^ uVar3;
      uVar4 = uVar7 * 0x19660d + 0x3c6ef35f;
      uVar7 = uVar7 * 0x659834 + 0xf1bbcd7c;
      if ((uVar3 & 1) != 0) {
        uVar7 = uVar4 >> 3;
      }
      uVar7 = uVar7 ^ uVar4;
      bVar9 = (uVar7 >> 10 & 1) == 0;
      sVar5 = 0x15;
      if (bVar9) {
        sVar5 = 2;
      }
      sVar2 = 9;
      if (bVar9) {
        sVar2 = 0x16;
      }
      uVar7 = uVar7 << sVar5 ^ uVar7;
      uVar7 = uVar7 >> sVar2 ^ uVar7;
      uVar4 = uVar7 | 0x100;
      if ((uVar7 & 0xfffff) != 0) {
        uVar4 = uVar7;
      }
      *param_1 = uVar4;
      *(byte *)(param_5 + *param_4) = *(byte *)(param_5 + *param_4) ^ (byte)uVar4;
      break;
    case 0x10:
      if (0x30 < local_20) {
        local_20 = 0x31;
      }
      local_20 = local_20 + 1;
    default:
      break;
    case 0x12:
      if ((short)param_2 == 0) {
        uVar4 = uVar6 * 0x19660d + 0x3c6ef35f;
        sVar5 = ((byte)uVar6 & 7) + 1;
        if (uVar4 == (uVar4 / 3) * 3) {
          uVar7 = uVar4 << sVar5;
LAB_10079048:
          uVar7 = uVar7 ^ uVar4;
        }
        else {
          if (uVar4 % 3 == 1) {
            uVar7 = uVar4 >> sVar5;
            goto LAB_10079048;
          }
          uVar7 = (uVar4 << sVar5) + uVar6 * -0x19660d + 0xc3910ca0;
        }
        uVar4 = uVar7 ^ 0x55aa55aa;
        if ((short)uVar7 != 0) {
          uVar4 = uVar7;
        }
        uVar3 = 0x173bef;
        if (uVar7 != 0) {
          uVar3 = uVar4;
        }
        *param_1 = uVar3;
        *(byte *)(param_5 + *param_4) = *(byte *)(param_5 + *param_4) ^ (byte)uVar3;
      }
    }
    uVar7 = param_1[1] * 0x116ca000 ^ param_1[1] * 0x5d588b65;
    uVar7 = uVar7 >> 0x11 ^ uVar7;
    uVar7 = uVar7 << 5 ^ uVar7;
    uVar3 = uVar7 & 0x3fffffff ^ uVar7 >> 0xb;
    uVar4 = 0x5d588b65;
    if (uVar7 != uVar3) {
      uVar4 = (uVar3 ^ uVar7) * 0x10dcd;
      uVar7 = uVar4 ^ 0x59a6f141;
      if ((short)uVar4 != 0) {
        uVar7 = uVar4;
      }
      uVar4 = uVar7 | 0x100;
      if ((uVar7 & 0xfffff) != 0) {
        uVar4 = uVar7;
      }
    }
    param_1[1] = uVar4;
    param_2 = param_2 + uVar4;
    uVar8 = uVar8 + 1;
    if (local_20 <= uVar8) {
      *(char *)(param_5 + *param_4) = *(char *)(param_5 + *param_4) + (char)local_24;
      return;
    }
  } while( true );
}

