/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14008b59f */

void FUN_14008b59f(uint *param_1,longlong param_2)

{
  int *piVar1;
  uint *puVar2;
  sbyte sVar3;
  uint uVar4;
  uint uVar5;
  sbyte sVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  lVar7 = 0x400;
  lVar8 = 0;
  do {
    uVar10 = *param_1;
    uVar5 = uVar10 * 0x19660d + 0x3c6ef35f;
    sVar3 = ((byte)uVar10 & 7) + 1;
    if (uVar5 % 3 == 0) {
      uVar10 = uVar5 << sVar3;
LAB_14008b606:
      uVar10 = uVar10 ^ uVar5;
    }
    else {
      if (uVar5 % 3 == 1) {
        uVar10 = uVar5 >> sVar3;
        goto LAB_14008b606;
      }
      uVar10 = (uVar5 << sVar3) + uVar10 * -0x19660d + 0xc3910ca0;
    }
    uVar5 = uVar10 ^ 0x55aa55aa;
    if ((short)uVar10 != 0) {
      uVar5 = uVar10;
    }
    if (uVar10 == 0) {
      uVar5 = 0x173bef;
    }
    *param_1 = uVar5;
    uVar4 = param_1[1] * 0x116ca000 ^ param_1[1] * 0x5d588b65;
    uVar4 = uVar4 >> 0x11 ^ uVar4;
    uVar4 = uVar4 << 5 ^ uVar4;
    uVar11 = uVar4 & 0x3fffffff ^ uVar4 >> 0xb;
    uVar10 = 0x5d588b65;
    if (uVar4 != uVar11) {
      uVar10 = (uVar11 ^ uVar4) * 0x10dcd;
      uVar4 = uVar10 ^ 0x59a6f141;
      if ((short)uVar10 != 0) {
        uVar4 = uVar10;
      }
      uVar10 = uVar4 | 0x100;
      if ((uVar4 & 0xfffff) != 0) {
        uVar10 = uVar4;
      }
    }
    param_1[1] = uVar10;
    *(uint *)(param_2 + lVar8 * 4) = uVar10 ^ uVar5;
    uVar4 = param_1[2];
    uVar10 = uVar4 + 1;
    param_1[2] = uVar10;
    if ((uVar4 & 1) != 0) {
      uVar4 = param_1[1] * 0x116ca000 ^ param_1[1] * 0x5d588b65;
      uVar4 = uVar4 >> 0x11 ^ uVar4;
      uVar4 = uVar4 << 5 ^ uVar4;
      uVar11 = uVar4 & 0x3fffffff ^ uVar4 >> 0xb;
      uVar10 = 0x5d588b65;
      if (uVar4 != uVar11) {
        uVar10 = (uVar11 ^ uVar4) * 0x10dcd;
        uVar4 = uVar10 ^ 0x59a6f141;
        if ((short)uVar10 != 0) {
          uVar4 = uVar10;
        }
        uVar10 = uVar4 | 0x100;
        if ((uVar4 & 0xfffff) != 0) {
          uVar10 = uVar4;
        }
      }
      param_1[1] = uVar10;
      piVar1 = (int *)(param_2 + lVar8 * 4);
      *piVar1 = *piVar1 + uVar10;
      uVar10 = param_1[2];
    }
    if (uVar10 * -0x55555555 < 0x55555556) {
      uVar4 = *param_1;
      uVar9 = (uVar4 << 0xb ^ uVar4) >> 8 ^ uVar4;
      uVar11 = (uVar4 << 0xb ^ uVar9) * 0x19660d + 0x3c6ef35f;
      uVar4 = uVar11 * 4;
      if ((uVar9 & 1) != 0) {
        uVar4 = uVar11 >> 3;
      }
      uVar4 = uVar4 ^ uVar11;
      bVar12 = (uVar4 >> 10 & 1) == 0;
      sVar3 = 0x15;
      if (bVar12) {
        sVar3 = 2;
      }
      sVar6 = 9;
      if (bVar12) {
        sVar6 = 0x16;
      }
      uVar4 = uVar4 << sVar3 ^ uVar4;
      uVar4 = uVar4 >> sVar6 ^ uVar4;
      uVar11 = uVar4 | 0x100;
      if ((uVar4 & 0xfffff) != 0) {
        uVar11 = uVar4;
      }
      *param_1 = uVar11;
      puVar2 = (uint *)(param_2 + lVar8 * 4);
      *puVar2 = *puVar2 ^ uVar11 + 3;
    }
    if (uVar10 * -0x49249249 < 0x24924925) {
      uVar11 = param_1[1] * 0x116ca000 ^ param_1[1] * 0x5d588b65;
      uVar11 = uVar11 >> 0x11 ^ uVar11;
      uVar11 = uVar11 << 5 ^ uVar11;
      uVar9 = uVar11 & 0x3fffffff ^ uVar11 >> 0xb;
      uVar4 = 0x5d588b65;
      if (uVar11 != uVar9) {
        uVar4 = (uVar9 ^ uVar11) * 0x10dcd;
        uVar11 = uVar4 ^ 0x59a6f141;
        if ((short)uVar4 != 0) {
          uVar11 = uVar4;
        }
        uVar4 = uVar11 | 0x100;
        if ((uVar11 & 0xfffff) != 0) {
          uVar4 = uVar11;
        }
      }
      param_1[1] = uVar4;
      *(uint *)(param_2 + lVar8 * 4) = *(int *)(param_2 + lVar8 * 4) + uVar4 + 1;
    }
    if ((uVar10 & 7) == 0) {
      uVar4 = *param_1;
      uVar9 = (uVar4 << 0xb ^ uVar4) >> 8 ^ uVar4;
      uVar11 = (uVar4 << 0xb ^ uVar9) * 0x19660d + 0x3c6ef35f;
      uVar4 = uVar11 * 4;
      if ((uVar9 & 1) != 0) {
        uVar4 = uVar11 >> 3;
      }
      uVar4 = uVar4 ^ uVar11;
      bVar12 = (uVar4 >> 10 & 1) == 0;
      sVar3 = 0x15;
      if (bVar12) {
        sVar3 = 2;
      }
      sVar6 = 9;
      if (bVar12) {
        sVar6 = 0x16;
      }
      uVar4 = uVar4 << sVar3 ^ uVar4;
      uVar4 = uVar4 >> sVar6 ^ uVar4;
      uVar11 = uVar4 | 0x100;
      if ((uVar4 & 0xfffff) != 0) {
        uVar11 = uVar4;
      }
      *param_1 = uVar11;
      *(uint *)(param_2 + lVar8 * 4) = uVar11 * *(int *)(param_2 + lVar8 * 4);
    }
    uVar4 = *param_1;
    if (((uVar4 + (int)lVar8) / 5) * 5 - uVar4 == (int)lVar8) {
      uVar9 = (uVar4 << 0xb ^ uVar4) >> 8 ^ uVar4;
      uVar11 = (uVar4 << 0xb ^ uVar9) * 0x19660d + 0x3c6ef35f;
      uVar4 = uVar11 * 4;
      if ((uVar9 & 1) != 0) {
        uVar4 = uVar11 >> 3;
      }
      uVar4 = uVar4 ^ uVar11;
      bVar12 = (uVar4 >> 10 & 1) == 0;
      sVar3 = 0x15;
      if (bVar12) {
        sVar3 = 2;
      }
      sVar6 = 9;
      if (bVar12) {
        sVar6 = 0x16;
      }
      uVar4 = uVar4 << sVar3 ^ uVar4;
      uVar4 = uVar4 >> sVar6 ^ uVar4;
      uVar11 = uVar4 | 0x100;
      if ((uVar4 & 0xfffff) != 0) {
        uVar11 = uVar4;
      }
      *param_1 = uVar11;
      puVar2 = (uint *)(param_2 + lVar8 * 4);
      *puVar2 = *puVar2 ^ uVar11;
    }
    if (uVar10 * 0x38e38e39 < 0x1c71c71d) {
      uVar11 = *param_1;
      uVar4 = uVar11 * 0x19660d + 0x3c6ef35f;
      sVar3 = ((byte)uVar11 & 7) + 1;
      if (uVar4 % 3 == 0) {
        uVar11 = uVar4 << sVar3;
LAB_14008ba1f:
        uVar11 = uVar11 ^ uVar4;
      }
      else {
        if (uVar4 % 3 == 1) {
          uVar11 = uVar4 >> sVar3;
          goto LAB_14008ba1f;
        }
        uVar11 = (uVar4 << sVar3) + uVar11 * -0x19660d + 0xc3910ca0;
      }
      uVar4 = uVar11 ^ 0x55aa55aa;
      if ((short)uVar11 != 0) {
        uVar4 = uVar11;
      }
      if (uVar11 == 0) {
        uVar4 = 0x173bef;
      }
      *param_1 = uVar4;
      *(uint *)(param_2 + lVar8 * 4) = uVar4 + *(int *)(param_2 + lVar8 * 4) + 4;
    }
    if ((uVar10 * -0x55555555 >> 3 | uVar10 * 0x60000000) < 0xaaaaaab) {
      uVar11 = *param_1;
      uVar4 = uVar11 * 0x19660d + 0x3c6ef35f;
      sVar3 = ((byte)uVar11 & 7) + 1;
      if (uVar4 % 3 == 0) {
        uVar11 = uVar4 << sVar3;
LAB_14008baa8:
        uVar11 = uVar11 ^ uVar4;
      }
      else {
        if (uVar4 % 3 == 1) {
          uVar11 = uVar4 >> sVar3;
          goto LAB_14008baa8;
        }
        uVar11 = (uVar4 << sVar3) + uVar11 * -0x19660d + 0xc3910ca0;
      }
      uVar4 = uVar11 ^ 0x55aa55aa;
      if ((short)uVar11 != 0) {
        uVar4 = uVar11;
      }
      if (uVar11 == 0) {
        uVar4 = 0x173bef;
      }
      *param_1 = uVar4;
      *(uint *)(param_2 + lVar8 * 4) = uVar4 + *(int *)(param_2 + lVar8 * 4) + 7;
    }
    if (uVar10 * -0x42108421 < 0x8421085) {
      uVar11 = param_1[1] * 0x116ca000 ^ param_1[1] * 0x5d588b65;
      uVar11 = uVar11 >> 0x11 ^ uVar11;
      uVar11 = uVar11 << 5 ^ uVar11;
      uVar9 = uVar11 & 0x3fffffff ^ uVar11 >> 0xb;
      uVar4 = 0x5d588b65;
      if (uVar11 != uVar9) {
        uVar4 = (uVar9 ^ uVar11) * 0x10dcd;
        uVar11 = uVar4 ^ 0x59a6f141;
        if ((short)uVar4 != 0) {
          uVar11 = uVar4;
        }
        uVar4 = uVar11 | 0x100;
        if ((uVar11 & 0xfffff) != 0) {
          uVar4 = uVar11;
        }
      }
      param_1[1] = uVar4;
      piVar1 = (int *)(param_2 + lVar8 * 4);
      *piVar1 = *piVar1 + uVar4 * 3;
    }
    if (uVar10 * -0x3ef368eb < 0x4325c54) {
      uVar11 = param_1[1] * 0x116ca000 ^ param_1[1] * 0x5d588b65;
      uVar11 = uVar11 >> 0x11 ^ uVar11;
      uVar11 = uVar11 << 5 ^ uVar11;
      uVar9 = uVar11 & 0x3fffffff ^ uVar11 >> 0xb;
      uVar4 = 0x5d588b65;
      if (uVar11 != uVar9) {
        uVar4 = (uVar9 ^ uVar11) * 0x10dcd;
        uVar11 = uVar4 ^ 0x59a6f141;
        if ((short)uVar4 != 0) {
          uVar11 = uVar4;
        }
        uVar4 = uVar11 | 0x100;
        if ((uVar11 & 0xfffff) != 0) {
          uVar4 = uVar11;
        }
      }
      param_1[1] = uVar4;
      *(uint *)(param_2 + lVar8 * 4) = *(int *)(param_2 + lVar8 * 4) + uVar4 + 1;
    }
    if (uVar10 * -0x32e1c9f < 0x1970e50) {
      uVar4 = *param_1;
      uVar10 = uVar4 * 0x19660d + 0x3c6ef35f;
      sVar3 = ((byte)uVar4 & 7) + 1;
      if (uVar10 % 3 == 0) {
        uVar4 = uVar10 << sVar3;
LAB_14008bc53:
        uVar4 = uVar4 ^ uVar10;
      }
      else {
        if (uVar10 % 3 == 1) {
          uVar4 = uVar10 >> sVar3;
          goto LAB_14008bc53;
        }
        uVar4 = (uVar10 << sVar3) + uVar4 * -0x19660d + 0xc3910ca0;
      }
      uVar10 = uVar4 ^ 0x55aa55aa;
      if ((short)uVar4 != 0) {
        uVar10 = uVar4;
      }
      if (uVar4 == 0) {
        uVar10 = 0x173bef;
      }
      *param_1 = uVar10;
      piVar1 = (int *)(param_2 + lVar8 * 4);
      *piVar1 = *piVar1 + uVar10;
    }
    if ((uVar5 & 0xffff) == 0x100) {
      uVar10 = param_1[1] * 0x116ca000 ^ param_1[1] * 0x5d588b65;
      uVar10 = uVar10 >> 0x11 ^ uVar10;
      uVar10 = uVar10 << 5 ^ uVar10;
      uVar4 = uVar10 & 0x3fffffff ^ uVar10 >> 0xb;
      uVar5 = 0x5d588b65;
      if (uVar10 != uVar4) {
        uVar5 = (uVar4 ^ uVar10) * 0x10dcd;
        uVar10 = uVar5 ^ 0x59a6f141;
        if ((short)uVar5 != 0) {
          uVar10 = uVar5;
        }
        uVar5 = uVar10 | 0x100;
        if ((uVar10 & 0xfffff) != 0) {
          uVar5 = uVar10;
        }
      }
      param_1[1] = uVar5;
      piVar1 = (int *)(param_2 + lVar8 * 4);
      *piVar1 = *piVar1 + uVar5 * 3;
    }
    lVar8 = lVar8 + 1;
    lVar7 = lVar7 + -4;
    if (lVar7 == 0) {
      return;
    }
  } while( true );
}

