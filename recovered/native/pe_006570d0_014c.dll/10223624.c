/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10223624 */

int __fastcall FUN_10223624(uint param_1,uint *param_2,int param_3,int param_4)

{
  uint *puVar1;
  void *_Dst;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  int iVar5;
  uint uVar6;
  size_t _Size;
  uint uVar7;
  void *pvVar8;
  uint uVar9;
  void *pvVar10;
  void *pvVar11;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  void *local_28;
  int local_24;
  uint local_20;
  uint *local_1c;
  int local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_3c;
  uVar9 = param_2[2];
  local_3c = -uVar9;
  uVar2 = uVar9;
  if (-1 < (int)local_3c) {
    uVar2 = local_3c;
  }
  local_34 = uVar2;
  if (*(byte *)((int)param_2 + 0x12) - 1 < 6) {
    uVar6 = param_2[1];
    switch(*(byte *)((int)param_2 + 0x12)) {
    case 1:
      uVar7 = uVar6 + param_3 + 7 >> 3;
      iVar5 = 1;
      break;
    default:
      uVar7 = uVar6 + param_3;
      iVar5 = 8;
      break;
    case 3:
      uVar7 = uVar6 + param_3 + 3 >> 2;
      iVar5 = 2;
      break;
    case 4:
      uVar7 = uVar6 + param_3 + 1 >> 1;
      iVar5 = 4;
    }
    local_30 = *param_2;
    local_2c = param_1;
    if ((param_4 == 0) && (uVar7 <= uVar2)) {
      uVar6 = iVar5 * (uVar6 + param_3);
      local_18 = 0;
      if (local_30 == 0 || uVar2 * 8 <= uVar6) goto LAB_1022389e;
      uVar7 = param_2[3];
      local_38 = uVar6 & 7;
      local_2c = 0xff00 >> (sbyte)local_38;
      uVar3 = local_3c;
      if ((int)local_3c < (int)uVar9) {
        uVar3 = uVar9;
      }
      pvVar4 = (void *)(uVar7 + (uVar6 >> 3));
      pvVar8 = (void *)(uVar7 + (uVar6 >> 3) + 1);
      pvVar10 = (void *)(uVar7 + uVar3);
      pvVar11 = pvVar10;
      local_3c = uVar3;
      do {
        _Dst = pvVar4;
        if (local_38 != 0) {
          *(byte *)((int)pvVar8 + -1) = *(byte *)((int)pvVar8 + -1) & (byte)local_2c;
          _Dst = pvVar8;
        }
        if (_Dst < pvVar10) {
          _memset(_Dst,0,(int)pvVar11 - (int)_Dst);
          uVar2 = local_34;
          uVar3 = local_3c;
        }
        pvVar4 = (void *)((int)pvVar4 + uVar2);
        pvVar11 = (void *)((int)pvVar11 + uVar3);
        pvVar10 = (void *)((int)pvVar10 + uVar3);
        pvVar8 = (void *)((int)pvVar8 + uVar3);
        local_30 = local_30 - 1;
      } while (local_30 != 0);
      local_30 = 0;
    }
    else {
      local_38 = uVar7;
      pvVar4 = (void *)FUN_101c2a50(param_1,uVar7,0,local_30 + param_4,0,&local_18);
      if (local_18 != 0) goto LAB_1022389e;
      uVar6 = iVar5 * uVar6 + 7 >> 3;
      uVar9 = param_2[3];
      local_24 = *param_2 * local_34;
      uVar2 = local_24 + uVar9;
      local_3c = local_38 - uVar6;
      local_28 = pvVar4;
      local_20 = uVar6;
      local_1c = param_2;
      if ((int)param_2[2] < 1) {
        if (local_24 != 0) {
          do {
            FUN_1025b2d0(pvVar4,uVar9,uVar6);
            uVar9 = uVar9 + local_34;
            _memset((void *)(uVar6 + (int)pvVar4),0,local_3c);
            pvVar4 = (void *)((int)pvVar4 + local_38);
          } while (uVar9 < uVar2);
        }
        _memset(pvVar4,0,param_4 * local_38);
      }
      else {
        _Size = param_4 * local_38;
        local_30 = uVar2;
        _memset(pvVar4,0,_Size);
        uVar6 = local_20;
        uVar2 = local_3c;
        if (local_24 != 0) {
          pvVar4 = (void *)((int)local_28 + _Size);
          do {
            FUN_1025b2d0(pvVar4,uVar9,uVar6);
            uVar9 = uVar9 + local_34;
            _memset((void *)(uVar6 + (int)pvVar4),0,uVar2);
            pvVar4 = (void *)((int)pvVar4 + local_38);
          } while (uVar9 < local_30);
        }
      }
      puVar1 = local_1c;
      FUN_101c0017(local_2c,local_1c[3]);
      puVar1[3] = (uint)local_28;
      uVar9 = -local_38;
      if (-1 < (int)puVar1[2]) {
        uVar9 = local_38;
      }
      puVar1[2] = uVar9;
    }
    local_18 = 0;
  }
  else {
    local_18 = 0x12;
  }
LAB_1022389e:
  if (DAT_10388d00 != (local_14 ^ (uint)&local_3c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return local_18;
}

