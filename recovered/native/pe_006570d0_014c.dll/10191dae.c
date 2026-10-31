/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10191dae */

void __fastcall FUN_10191dae(byte *param_1)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  size_t sVar4;
  uint uVar5;
  size_t sVar6;
  size_t _Size;
  uint uVar7;
  void *_Dst;
  int iVar8;
  size_t _Size_00;
  float fVar9;
  float fVar10;
  undefined1 auStack_44 [3];
  char local_41;
  int local_40;
  uint local_3c;
  size_t local_38;
  byte *local_34;
  byte *local_30;
  undefined4 local_2c;
  uint uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined8 local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_44;
  if ((*param_1 & 4) == 0) {
    local_40 = *(int *)(param_1 + 0x30);
    iVar3 = *(int *)(param_1 + 0x290);
    local_1c = 0;
    local_2c = 0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_20 = 0;
    local_41 = FUN_10190088(*(undefined4 *)(iVar3 + 0xd4),&local_2c);
    if (local_41 == '\0') {
      uVar2 = FUN_1018fd74(0x22,0x21,&local_2c);
      *(undefined4 *)(iVar3 + 0xd4) = uVar2;
    }
    local_34 = param_1 + 0x6c;
    _Size = 0;
    fVar10 = DAT_102b70e0;
    local_30 = param_1;
    do {
      uVar5 = uStack_28 & 0xffff;
      iVar3 = uVar5 - _Size;
      _Size_00 = iVar3 / 2;
      if (local_41 == '\0') {
        uVar7 = _Size + _Size_00;
        sVar6 = uVar5 - uVar7;
        if (*(int *)(local_40 + 0x18) == 0) {
          iVar8 = ((local_2c._2_2_ + _Size) * *(int *)(local_40 + 0x1c) + (local_2c & 0xffff)) *
                  *(int *)(local_40 + 0x24) + *(int *)(local_40 + 0x28);
          if (1 < iVar3) {
            sVar4 = 0;
            do {
              *(undefined4 *)(iVar8 + sVar4 * 4) = 0xffffff;
              sVar4 = sVar4 + 1;
            } while (_Size_00 != sVar4);
          }
          local_3c = uVar5;
          local_38 = sVar6;
          if (_Size != 0) {
            _memset((void *)(iVar8 + _Size_00 * 4),0xff,_Size * 4);
            fVar10 = DAT_102b70e0;
          }
          if (0 < (int)local_38) {
            do {
              *(undefined4 *)(iVar8 + uVar7 * 4) = 0xffffff;
              uVar7 = uVar7 + 1;
            } while (local_3c != uVar7);
          }
        }
        else if (*(int *)(local_40 + 0x18) == 1) {
          _Dst = (void *)(((local_2c._2_2_ + _Size) * *(int *)(local_40 + 0x1c) +
                          (local_2c & 0xffff)) * *(int *)(local_40 + 0x24) +
                         *(int *)(local_40 + 0x28));
          if (1 < iVar3) {
            _memset(_Dst,0,_Size_00);
            fVar10 = DAT_102b70e0;
          }
          if (_Size != 0) {
            _memset((void *)((int)_Dst + _Size_00),0xff,_Size);
            fVar10 = DAT_102b70e0;
          }
          if (0 < (int)sVar6) {
            _memset((void *)((int)_Dst + _Size + _Size_00),0,sVar6);
            fVar10 = DAT_102b70e0;
          }
        }
      }
      fVar1 = *(float *)(local_30 + 0x44);
      sVar6 = _Size + 1;
      fVar9 = ((float)(int)(_Size + 1 + (local_2c >> 0x10)) * *(float *)(local_30 + 0x48) +
              (float)(int)(_Size + (local_2c >> 0x10)) * *(float *)(local_30 + 0x48)) * fVar10;
      iVar3 = _Size * 0x10;
      *(float *)(local_34 + iVar3) = (float)(int)((_Size_00 - 1) + (local_2c & 0xffff)) * fVar1;
      *(float *)(local_34 + iVar3 + 4) = fVar9;
      *(float *)(local_34 + iVar3 + 8) =
           (float)(int)(_Size + 1 + _Size_00 + (local_2c & 0xffff)) * fVar1;
      *(float *)(local_34 + iVar3 + 0xc) = fVar9;
      _Size = sVar6;
    } while (sVar6 != 0x21);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_44)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

