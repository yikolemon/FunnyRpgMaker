/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800798b8 */

void FUN_1800798b8(uint *param_1,uint param_2,uint param_3,uint *param_4,longlong param_5)

{
  char *pcVar1;
  sbyte sVar2;
  uint uVar3;
  ulonglong uVar4;
  sbyte sVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar9 = 0x14;
  uVar10 = 0;
  do {
    uVar8 = *param_1;
    uVar7 = (uVar8 << 0xb ^ uVar8) >> 8 ^ uVar8;
    uVar3 = (uVar8 << 0xb ^ uVar7) * 0x19660d + 0x3c6ef35f;
    uVar8 = uVar3 * 4;
    if ((uVar7 & 1) != 0) {
      uVar8 = uVar3 >> 3;
    }
    uVar8 = uVar8 ^ uVar3;
    bVar11 = (uVar8 >> 10 & 1) == 0;
    sVar5 = 0x15;
    if (bVar11) {
      sVar5 = 2;
    }
    sVar2 = 9;
    if (bVar11) {
      sVar2 = 0x16;
    }
    uVar8 = uVar8 << sVar5 ^ uVar8;
    uVar8 = uVar8 >> sVar2 ^ uVar8;
    uVar3 = uVar8 | 0x100;
    if ((uVar8 & 0xfffff) != 0) {
      uVar3 = uVar8;
    }
    uVar8 = uVar3 * 0x19660d + 0x3c6ef35f;
    sVar5 = ((byte)uVar3 & 7) + 1;
    if (uVar8 % 3 == 0) {
      uVar7 = uVar8 << sVar5;
LAB_1800799a5:
      uVar7 = uVar7 ^ uVar8;
    }
    else {
      if (uVar8 % 3 == 1) {
        uVar7 = uVar8 >> sVar5;
        goto LAB_1800799a5;
      }
      uVar7 = (uVar8 << sVar5) + uVar3 * -0x19660d + 0xc3910ca0;
    }
    uVar8 = uVar7 ^ 0x55aa55aa;
    if ((short)uVar7 != 0) {
      uVar8 = uVar7;
    }
    uVar6 = 0x173bef;
    if (uVar7 != 0) {
      uVar6 = uVar8;
    }
    *param_1 = uVar6;
    param_3 = *(uint *)((longlong)param_1 +
                       (ulonglong)((param_3 ^ uVar6) & 0xff) * 4 +
                       (ulonglong)(((uVar3 ^ param_2) & 0x1f) << 10) + 0xc);
    switch(~(((param_1[2] + param_2) / 0x14) * 0x14) + param_1[2] + param_2) {
    case 0:
      FUN_180079135(param_1,(longlong)param_1 + (ulonglong)((param_2 + 5 & 0x1f) << 10) + 0xc);
      break;
    case 1:
      uVar7 = (uVar6 << 0xb ^ uVar6) >> 8 ^ uVar6;
      uVar3 = (uVar6 << 0xb ^ uVar7) * 0x19660d + 0x3c6ef35f;
      uVar8 = uVar3 * 4;
      if ((uVar7 & 1) != 0) {
        uVar8 = uVar3 >> 3;
      }
      uVar8 = uVar8 ^ uVar3;
      bVar11 = (uVar8 >> 10 & 1) == 0;
      sVar5 = 0x15;
      if (bVar11) {
        sVar5 = 2;
      }
      sVar2 = 9;
      if (bVar11) {
        sVar2 = 0x16;
      }
      uVar8 = uVar8 << sVar5 ^ uVar8;
      uVar8 = uVar8 >> sVar2 ^ uVar8;
      uVar3 = uVar8 | 0x100;
      if ((uVar8 & 0xfffff) != 0) {
        uVar3 = uVar8;
      }
      *param_1 = uVar3;
      param_3 = param_3 ^ uVar3;
      break;
    case 4:
      if ((param_2 & 0xfffff) == 0) {
        uVar8 = param_1[1] * 0x116ca000 ^ param_1[1] * 0x5d588b65;
        uVar8 = uVar8 >> 0x11 ^ uVar8;
        uVar8 = uVar8 << 5 ^ uVar8;
        uVar3 = uVar8 & 0x3fffffff ^ uVar8 >> 0xb;
        uVar7 = 0x5d588b65;
        if (uVar8 != uVar3) {
          uVar3 = (uVar3 ^ uVar8) * 0x10dcd;
          uVar8 = uVar3 ^ 0x59a6f141;
          if ((short)uVar3 != 0) {
            uVar8 = uVar3;
          }
          uVar7 = uVar8 | 0x100;
          if ((uVar8 & 0xfffff) != 0) {
            uVar7 = uVar8;
          }
        }
        param_1[1] = uVar7;
LAB_180079ce7:
        *(byte *)(param_5 + (ulonglong)*param_4) =
             *(byte *)(param_5 + (ulonglong)*param_4) ^ (byte)uVar7;
      }
      break;
    case 8:
    case 0xd:
      uVar8 = uVar6 * 0x19660d + 0x3c6ef35f;
      sVar5 = ((byte)uVar6 & 7) + 1;
      if (uVar8 % 3 == 0) {
        uVar3 = uVar8 << sVar5;
LAB_180079c74:
        uVar3 = uVar3 ^ uVar8;
      }
      else {
        if (uVar8 % 3 == 1) {
          uVar3 = uVar8 >> sVar5;
          goto LAB_180079c74;
        }
        uVar3 = (uVar8 << sVar5) + uVar6 * -0x19660d + 0xc3910ca0;
      }
      uVar8 = uVar3 ^ 0x55aa55aa;
      if ((short)uVar3 != 0) {
        uVar8 = uVar3;
      }
      uVar4 = (ulonglong)uVar8;
      if (uVar3 == 0) {
        uVar4 = 0x173bef;
      }
      *param_1 = (uint)uVar4;
      pcVar1 = (char *)(param_5 + (ulonglong)((uint)uVar4 + (int)(uVar4 / 0x30) * -0x30));
      *pcVar1 = *pcVar1 + (char)param_3;
      break;
    case 10:
      uVar7 = (uVar6 << 0xb ^ uVar6) >> 8 ^ uVar6;
      uVar3 = (uVar6 << 0xb ^ uVar7) * 0x19660d + 0x3c6ef35f;
      uVar8 = uVar3 * 4;
      if ((uVar7 & 1) != 0) {
        uVar8 = uVar3 >> 3;
      }
      uVar8 = uVar8 ^ uVar3;
      bVar11 = (uVar8 >> 10 & 1) == 0;
      sVar5 = 0x15;
      if (bVar11) {
        sVar5 = 2;
      }
      sVar2 = 9;
      if (bVar11) {
        sVar2 = 0x16;
      }
      uVar8 = uVar8 << sVar5 ^ uVar8;
      uVar8 = uVar8 >> sVar2 ^ uVar8;
      uVar3 = uVar8 | 0x100;
      if ((uVar8 & 0xfffff) != 0) {
        uVar3 = uVar8;
      }
      *param_1 = uVar3;
      *(byte *)(param_5 + (ulonglong)*param_4) =
           *(byte *)(param_5 + (ulonglong)*param_4) ^ (byte)uVar3;
      break;
    case 0x10:
      if (0x30 < uVar9) {
        uVar9 = 0x31;
      }
      uVar9 = uVar9 + 1;
      break;
    case 0x12:
      if ((short)param_2 == 0) {
        uVar8 = uVar6 * 0x19660d + 0x3c6ef35f;
        sVar5 = ((byte)uVar6 & 7) + 1;
        if (uVar8 % 3 == 0) {
          uVar3 = uVar8 << sVar5;
LAB_180079cbe:
          uVar3 = uVar3 ^ uVar8;
        }
        else {
          if (uVar8 % 3 == 1) {
            uVar3 = uVar8 >> sVar5;
            goto LAB_180079cbe;
          }
          uVar3 = (uVar8 << sVar5) + uVar6 * -0x19660d + 0xc3910ca0;
        }
        uVar8 = uVar3 ^ 0x55aa55aa;
        if ((short)uVar3 != 0) {
          uVar8 = uVar3;
        }
        uVar7 = 0x173bef;
        if (uVar3 != 0) {
          uVar7 = uVar8;
        }
        *param_1 = uVar7;
        goto LAB_180079ce7;
      }
    }
    uVar3 = param_1[1] * 0x116ca000 ^ param_1[1] * 0x5d588b65;
    uVar3 = uVar3 >> 0x11 ^ uVar3;
    uVar3 = uVar3 << 5 ^ uVar3;
    uVar7 = uVar3 & 0x3fffffff ^ uVar3 >> 0xb;
    uVar8 = 0x5d588b65;
    if (uVar3 != uVar7) {
      uVar8 = (uVar7 ^ uVar3) * 0x10dcd;
      uVar3 = uVar8 ^ 0x59a6f141;
      if ((short)uVar8 != 0) {
        uVar3 = uVar8;
      }
      uVar8 = uVar3 | 0x100;
      if ((uVar3 & 0xfffff) != 0) {
        uVar8 = uVar3;
      }
    }
    param_1[1] = uVar8;
    param_2 = param_2 + uVar8;
    uVar10 = uVar10 + 1;
    if (uVar9 <= uVar10) {
      *(char *)(param_5 + (ulonglong)*param_4) =
           *(char *)(param_5 + (ulonglong)*param_4) + (char)param_3;
      return;
    }
  } while( true );
}

