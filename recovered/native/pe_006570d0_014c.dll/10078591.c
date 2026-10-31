/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10078591 */

void FUN_10078591(uint *param_1,int param_2)

{
  int *piVar1;
  uint *puVar2;
  sbyte sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  sbyte sVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  bool bVar12;
  short local_14;
  
  iVar11 = 0;
  iVar4 = 0x400;
  do {
    uVar5 = *param_1;
    uVar10 = uVar5 * 0x19660d + 0x3c6ef35f;
    sVar8 = ((byte)uVar5 & 7) + 1;
    if (uVar10 == (uVar10 / 3) * 3) {
      uVar5 = uVar10 << sVar8;
LAB_100785df:
      uVar5 = uVar5 ^ uVar10;
    }
    else {
      if (uVar10 % 3 == 1) {
        uVar5 = uVar10 >> sVar8;
        goto LAB_100785df;
      }
      uVar5 = (uVar10 << sVar8) + uVar5 * -0x19660d + 0xc3910ca0;
    }
    uVar10 = uVar5 ^ 0x55aa55aa;
    if ((short)uVar5 != 0) {
      uVar10 = uVar5;
    }
    if (uVar5 == 0) {
      uVar10 = 0x173bef;
    }
    *param_1 = uVar10;
    uVar6 = param_1[1] * 0x116ca000 ^ param_1[1] * 0x5d588b65;
    uVar6 = uVar6 >> 0x11 ^ uVar6;
    uVar6 = uVar6 << 5 ^ uVar6;
    uVar9 = uVar6 & 0x3fffffff ^ uVar6 >> 0xb;
    uVar5 = 0x5d588b65;
    if (uVar6 != uVar9) {
      uVar5 = (uVar9 ^ uVar6) * 0x10dcd;
      uVar6 = uVar5 ^ 0x59a6f141;
      if ((short)uVar5 != 0) {
        uVar6 = uVar5;
      }
      uVar5 = uVar6 | 0x100;
      if ((uVar6 & 0xfffff) != 0) {
        uVar5 = uVar6;
      }
    }
    param_1[1] = uVar5;
    *(uint *)(param_2 + iVar11 * 4) = uVar5 ^ uVar10;
    uVar6 = param_1[2];
    uVar5 = uVar6 + 1;
    param_1[2] = uVar5;
    if ((uVar6 & 1) != 0) {
      uVar6 = param_1[1] * 0x116ca000 ^ param_1[1] * 0x5d588b65;
      uVar6 = uVar6 >> 0x11 ^ uVar6;
      uVar6 = uVar6 << 5 ^ uVar6;
      uVar9 = uVar6 & 0x3fffffff ^ uVar6 >> 0xb;
      uVar5 = 0x5d588b65;
      if (uVar6 != uVar9) {
        uVar5 = (uVar9 ^ uVar6) * 0x10dcd;
        uVar6 = uVar5 ^ 0x59a6f141;
        if ((short)uVar5 != 0) {
          uVar6 = uVar5;
        }
        uVar5 = uVar6 | 0x100;
        if ((uVar6 & 0xfffff) != 0) {
          uVar5 = uVar6;
        }
      }
      param_1[1] = uVar5;
      piVar1 = (int *)(param_2 + iVar11 * 4);
      *piVar1 = *piVar1 + uVar5;
      uVar5 = param_1[2];
    }
    if (uVar5 * -0x55555555 < 0x55555556) {
      uVar6 = *param_1;
      uVar7 = (uVar6 << 0xb ^ uVar6) >> 8 ^ uVar6;
      uVar9 = uVar6 << 0xb ^ uVar7;
      uVar6 = uVar9 * 0x19660d + 0x3c6ef35f;
      uVar9 = uVar9 * 0x659834 + 0xf1bbcd7c;
      if ((uVar7 & 1) != 0) {
        uVar9 = uVar6 >> 3;
      }
      uVar9 = uVar9 ^ uVar6;
      bVar12 = (uVar9 >> 10 & 1) == 0;
      sVar8 = 0x15;
      if (bVar12) {
        sVar8 = 2;
      }
      sVar3 = 9;
      if (bVar12) {
        sVar3 = 0x16;
      }
      uVar9 = uVar9 << sVar8 ^ uVar9;
      uVar9 = uVar9 >> sVar3 ^ uVar9;
      uVar6 = uVar9 | 0x100;
      if ((uVar9 & 0xfffff) != 0) {
        uVar6 = uVar9;
      }
      *param_1 = uVar6;
      puVar2 = (uint *)(param_2 + iVar11 * 4);
      *puVar2 = *puVar2 ^ uVar6 + 3;
    }
    if (uVar5 * -0x49249249 < 0x24924925) {
      uVar9 = param_1[1] * 0x116ca000 ^ param_1[1] * 0x5d588b65;
      uVar9 = uVar9 >> 0x11 ^ uVar9;
      uVar9 = uVar9 << 5 ^ uVar9;
      uVar7 = uVar9 & 0x3fffffff ^ uVar9 >> 0xb;
      uVar6 = 0x5d588b65;
      if (uVar9 != uVar7) {
        uVar6 = (uVar7 ^ uVar9) * 0x10dcd;
        uVar9 = uVar6 ^ 0x59a6f141;
        if ((short)uVar6 != 0) {
          uVar9 = uVar6;
        }
        uVar6 = uVar9 | 0x100;
        if ((uVar9 & 0xfffff) != 0) {
          uVar6 = uVar9;
        }
      }
      param_1[1] = uVar6;
      *(uint *)(param_2 + iVar11 * 4) = *(int *)(param_2 + iVar11 * 4) + uVar6 + 1;
    }
    if ((uVar5 & 7) == 0) {
      uVar6 = *param_1;
      uVar7 = (uVar6 << 0xb ^ uVar6) >> 8 ^ uVar6;
      uVar9 = uVar6 << 0xb ^ uVar7;
      uVar6 = uVar9 * 0x19660d + 0x3c6ef35f;
      uVar9 = uVar9 * 0x659834 + 0xf1bbcd7c;
      if ((uVar7 & 1) != 0) {
        uVar9 = uVar6 >> 3;
      }
      uVar9 = uVar9 ^ uVar6;
      bVar12 = (uVar9 >> 10 & 1) == 0;
      sVar8 = 0x15;
      if (bVar12) {
        sVar8 = 2;
      }
      sVar3 = 9;
      if (bVar12) {
        sVar3 = 0x16;
      }
      uVar9 = uVar9 << sVar8 ^ uVar9;
      uVar9 = uVar9 >> sVar3 ^ uVar9;
      uVar6 = uVar9 | 0x100;
      if ((uVar9 & 0xfffff) != 0) {
        uVar6 = uVar9;
      }
      *param_1 = uVar6;
      *(uint *)(param_2 + iVar11 * 4) = uVar6 * *(int *)(param_2 + iVar11 * 4);
    }
    uVar6 = *param_1;
    if (((uVar6 + iVar11) / 5) * 5 - uVar6 == iVar11) {
      uVar7 = (uVar6 << 0xb ^ uVar6) >> 8 ^ uVar6;
      uVar9 = uVar6 << 0xb ^ uVar7;
      uVar6 = uVar9 * 0x19660d + 0x3c6ef35f;
      uVar9 = uVar9 * 0x659834 + 0xf1bbcd7c;
      if ((uVar7 & 1) != 0) {
        uVar9 = uVar6 >> 3;
      }
      uVar9 = uVar9 ^ uVar6;
      bVar12 = (uVar9 >> 10 & 1) == 0;
      sVar8 = 0x15;
      if (bVar12) {
        sVar8 = 2;
      }
      sVar3 = 9;
      if (bVar12) {
        sVar3 = 0x16;
      }
      uVar9 = uVar9 << sVar8 ^ uVar9;
      uVar9 = uVar9 >> sVar3 ^ uVar9;
      uVar6 = uVar9 | 0x100;
      if ((uVar9 & 0xfffff) != 0) {
        uVar6 = uVar9;
      }
      *param_1 = uVar6;
      puVar2 = (uint *)(param_2 + iVar11 * 4);
      *puVar2 = *puVar2 ^ uVar6;
    }
    if (uVar5 * 0x38e38e39 < 0x1c71c71d) {
      uVar9 = *param_1;
      uVar6 = uVar9 * 0x19660d + 0x3c6ef35f;
      sVar8 = ((byte)uVar9 & 7) + 1;
      if (uVar6 == (uVar6 / 3) * 3) {
        uVar9 = uVar6 << sVar8;
LAB_10078951:
        uVar9 = uVar9 ^ uVar6;
      }
      else {
        if (uVar6 % 3 == 1) {
          uVar9 = uVar6 >> sVar8;
          goto LAB_10078951;
        }
        uVar9 = (uVar6 << sVar8) + uVar9 * -0x19660d + 0xc3910ca0;
      }
      uVar6 = uVar9 ^ 0x55aa55aa;
      if ((short)uVar9 != 0) {
        uVar6 = uVar9;
      }
      if (uVar9 == 0) {
        uVar6 = 0x173bef;
      }
      *param_1 = uVar6;
      *(uint *)(param_2 + iVar11 * 4) = *(int *)(param_2 + iVar11 * 4) + uVar6 + 4;
    }
    if ((uVar5 * -0x55555555 >> 3 | uVar5 * 0x60000000) < 0xaaaaaab) {
      uVar9 = *param_1;
      uVar6 = uVar9 * 0x19660d + 0x3c6ef35f;
      sVar8 = ((byte)uVar9 & 7) + 1;
      if (uVar6 == (uVar6 / 3) * 3) {
        uVar9 = uVar6 << sVar8;
LAB_100789d3:
        uVar9 = uVar9 ^ uVar6;
      }
      else {
        if (uVar6 % 3 == 1) {
          uVar9 = uVar6 >> sVar8;
          goto LAB_100789d3;
        }
        uVar9 = (uVar6 << sVar8) + uVar9 * -0x19660d + 0xc3910ca0;
      }
      uVar6 = uVar9 ^ 0x55aa55aa;
      if ((short)uVar9 != 0) {
        uVar6 = uVar9;
      }
      if (uVar9 == 0) {
        uVar6 = 0x173bef;
      }
      *param_1 = uVar6;
      *(uint *)(param_2 + iVar11 * 4) = *(int *)(param_2 + iVar11 * 4) + uVar6 + 7;
    }
    if (uVar5 * -0x42108421 < 0x8421085) {
      uVar9 = param_1[1] * 0x116ca000 ^ param_1[1] * 0x5d588b65;
      uVar9 = uVar9 >> 0x11 ^ uVar9;
      uVar9 = uVar9 << 5 ^ uVar9;
      uVar7 = uVar9 & 0x3fffffff ^ uVar9 >> 0xb;
      uVar6 = 0x5d588b65;
      if (uVar9 != uVar7) {
        uVar6 = (uVar7 ^ uVar9) * 0x10dcd;
        uVar9 = uVar6 ^ 0x59a6f141;
        if ((short)uVar6 != 0) {
          uVar9 = uVar6;
        }
        uVar6 = uVar9 | 0x100;
        if ((uVar9 & 0xfffff) != 0) {
          uVar6 = uVar9;
        }
      }
      param_1[1] = uVar6;
      piVar1 = (int *)(param_2 + iVar11 * 4);
      *piVar1 = *piVar1 + uVar6 * 3;
    }
    if (uVar5 * -0x3ef368eb < 0x4325c54) {
      uVar9 = param_1[1] * 0x116ca000 ^ param_1[1] * 0x5d588b65;
      uVar9 = uVar9 >> 0x11 ^ uVar9;
      uVar9 = uVar9 << 5 ^ uVar9;
      uVar7 = uVar9 & 0x3fffffff ^ uVar9 >> 0xb;
      uVar6 = 0x5d588b65;
      if (uVar9 != uVar7) {
        uVar6 = (uVar7 ^ uVar9) * 0x10dcd;
        uVar9 = uVar6 ^ 0x59a6f141;
        if ((short)uVar6 != 0) {
          uVar9 = uVar6;
        }
        uVar6 = uVar9 | 0x100;
        if ((uVar9 & 0xfffff) != 0) {
          uVar6 = uVar9;
        }
      }
      param_1[1] = uVar6;
      *(uint *)(param_2 + iVar11 * 4) = *(int *)(param_2 + iVar11 * 4) + uVar6 + 1;
    }
    if (uVar5 * -0x32e1c9f < 0x1970e50) {
      uVar6 = *param_1;
      uVar5 = uVar6 * 0x19660d + 0x3c6ef35f;
      sVar8 = ((byte)uVar6 & 7) + 1;
      if (uVar5 == (uVar5 / 3) * 3) {
        uVar6 = uVar5 << sVar8;
LAB_10078b42:
        uVar6 = uVar6 ^ uVar5;
      }
      else {
        if (uVar5 % 3 == 1) {
          uVar6 = uVar5 >> sVar8;
          goto LAB_10078b42;
        }
        uVar6 = (uVar5 << sVar8) + uVar6 * -0x19660d + 0xc3910ca0;
      }
      uVar5 = uVar6 ^ 0x55aa55aa;
      if ((short)uVar6 != 0) {
        uVar5 = uVar6;
      }
      if (uVar6 == 0) {
        uVar5 = 0x173bef;
      }
      *param_1 = uVar5;
      piVar1 = (int *)(param_2 + iVar11 * 4);
      *piVar1 = *piVar1 + uVar5;
    }
    local_14 = (short)uVar10;
    if (local_14 == 0x100) {
      uVar5 = param_1[1] * 0x116ca000 ^ param_1[1] * 0x5d588b65;
      uVar5 = uVar5 >> 0x11 ^ uVar5;
      uVar5 = uVar5 << 5 ^ uVar5;
      uVar6 = uVar5 & 0x3fffffff ^ uVar5 >> 0xb;
      uVar10 = 0x5d588b65;
      if (uVar5 != uVar6) {
        uVar10 = (uVar6 ^ uVar5) * 0x10dcd;
        uVar5 = uVar10 ^ 0x59a6f141;
        if ((short)uVar10 != 0) {
          uVar5 = uVar10;
        }
        uVar10 = uVar5 | 0x100;
        if ((uVar5 & 0xfffff) != 0) {
          uVar10 = uVar5;
        }
      }
      param_1[1] = uVar10;
      piVar1 = (int *)(param_2 + iVar11 * 4);
      *piVar1 = *piVar1 + uVar10 * 3;
    }
    iVar11 = iVar11 + 1;
    iVar4 = iVar4 + -4;
    if (iVar4 == 0) {
      return;
    }
  } while( true );
}

