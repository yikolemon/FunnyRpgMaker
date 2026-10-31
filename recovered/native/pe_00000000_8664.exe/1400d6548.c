/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d6548 */

void FUN_1400d6548(longlong param_1)

{
  float fVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  bool bVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  ulonglong local_70;
  
  local_70 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_1400d7598();
  if (*(char *)(lVar3 + 0x41) == '\x01') {
    local_88 = 0;
    uStack_80 = 0;
    local_78 = 0;
    if (*(code **)(lVar3 + 0x50) == (code *)0x0) {
      bVar5 = false;
    }
    else {
      iVar2 = (**(code **)(lVar3 + 0x50))(0,1,&local_88);
      bVar5 = iVar2 == 0;
    }
    *(bool *)(lVar3 + 0x40) = bVar5;
    *(undefined1 *)(lVar3 + 0x41) = 0;
  }
  *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) & 0xfe;
  if ((*(char *)(lVar3 + 0x40) == '\x01') && (*(code **)(lVar3 + 0x58) != (code *)0x0)) {
    iVar2 = (**(code **)(lVar3 + 0x58))(0,&local_88);
    if (iVar2 == 0) {
      *(byte *)(param_1 + 4) = *(byte *)(param_1 + 4) | 1;
      if (*(int *)(lVar3 + 0x60) == 0 || *(int *)(lVar3 + 0x60) != (int)local_88) {
        *(int *)(lVar3 + 0x60) = (int)local_88;
        FUN_140076e86(param_1,0x278,(local_88._4_2_ & 0x10) >> 4);
        FUN_140076e86(param_1,0x279,(local_88._4_2_ & 0x20) >> 5);
        FUN_140076e86(param_1,0x27a,local_88._4_2_ >> 0xe & 1);
        FUN_140076e86(param_1,0x27b,local_88._4_2_ >> 0xd & 1);
        FUN_140076e86(param_1,0x27c,local_88 >> 0x2f & 1);
        FUN_140076e86(param_1,0x27d,local_88._4_2_ >> 0xc & 1);
        FUN_140076e86(param_1,0x27e,(local_88._4_2_ & 4) >> 2);
        uVar4 = (ulonglong)((local_88._4_2_ & 8) >> 3);
        FUN_140076e86(param_1,0x27f,uVar4);
        FUN_140076e86(param_1,0x280,CONCAT71((int7)(uVar4 >> 8),local_88._4_1_) & 0xffffffffffffff01
                     );
        FUN_140076e86(param_1,0x281,(local_88._4_2_ & 2) >> 1);
        FUN_140076e86(param_1,0x282,local_88._5_1_ & 1);
        FUN_140076e86(param_1,0x283,local_88._4_2_ >> 9 & 1);
        fVar7 = DAT_140e82328;
        fVar1 = DAT_140210018;
        fVar10 = DAT_1401c86c8;
        fVar6 = (float)(int)(local_88._6_1_ - 0x1e) / DAT_140e82328;
        fVar9 = DAT_1401c86c8;
        if (fVar6 <= DAT_1401c86c8) {
          fVar9 = fVar6;
        }
        FUN_140076be0(param_1,0x284,DAT_140210018 < fVar6,~-(uint)(fVar6 < 0.0) & (uint)fVar9);
        fVar7 = (float)(int)(local_88._7_1_ - 0x1e) / fVar7;
        fVar9 = fVar10;
        if (fVar7 <= fVar10) {
          fVar9 = fVar7;
        }
        FUN_140076be0(param_1,0x285,fVar1 < fVar7,~-(uint)(fVar7 < 0.0) & (uint)fVar9);
        FUN_140076e86(param_1,0x286,(local_88._4_2_ & 0x40) >> 6);
        FUN_140076e86(param_1,0x287,local_88 >> 0x27 & 1);
        fVar7 = DAT_140e8232c;
        fVar6 = (float)((short)uStack_80 + 0x1ea9) / DAT_140e8232c;
        fVar9 = fVar10;
        if (fVar6 <= fVar10) {
          fVar9 = fVar6;
        }
        FUN_140076be0(param_1,0x288,fVar1 < fVar6,~-(uint)(fVar6 < 0.0) & (uint)fVar9);
        fVar9 = DAT_140e82330;
        fVar8 = (float)((short)uStack_80 + -0x1ea9) / DAT_140e82330;
        fVar6 = fVar10;
        if (fVar8 <= fVar10) {
          fVar6 = fVar8;
        }
        FUN_140076be0(param_1,0x289,fVar1 < fVar8,~-(uint)(fVar8 < 0.0) & (uint)fVar6);
        fVar8 = (float)(uStack_80._2_2_ + -0x1ea9) / fVar9;
        fVar6 = fVar10;
        if (fVar8 <= fVar10) {
          fVar6 = fVar8;
        }
        FUN_140076be0(param_1,0x28a,fVar1 < fVar8,~-(uint)(fVar8 < 0.0) & (uint)fVar6);
        fVar8 = (float)(uStack_80._2_2_ + 0x1ea9) / fVar7;
        fVar6 = fVar10;
        if (fVar8 <= fVar10) {
          fVar6 = fVar8;
        }
        FUN_140076be0(param_1,0x28b,fVar1 < fVar8,~-(uint)(fVar8 < 0.0) & (uint)fVar6);
        fVar8 = (float)(uStack_80._4_2_ + 0x1ea9) / fVar7;
        fVar6 = fVar10;
        if (fVar8 <= fVar10) {
          fVar6 = fVar8;
        }
        FUN_140076be0(param_1,0x28c,fVar1 < fVar8,~-(uint)(fVar8 < 0.0) & (uint)fVar6);
        fVar8 = (float)(uStack_80._4_2_ + -0x1ea9) / fVar9;
        fVar6 = fVar10;
        if (fVar8 <= fVar10) {
          fVar6 = fVar8;
        }
        FUN_140076be0(param_1,0x28d,fVar1 < fVar8,~-(uint)(fVar8 < 0.0) & (uint)fVar6);
        fVar9 = (float)(uStack_80._6_2_ + -0x1ea9) / fVar9;
        fVar6 = fVar10;
        if (fVar9 <= fVar10) {
          fVar6 = fVar9;
        }
        FUN_140076be0(param_1,0x28e,fVar1 < fVar9,~-(uint)(fVar9 < 0.0) & (uint)fVar6);
        fVar7 = (float)(uStack_80._6_2_ + 0x1ea9) / fVar7;
        if (fVar7 <= fVar10) {
          fVar10 = fVar7;
        }
        FUN_140076be0(param_1,0x28f,fVar1 < fVar7,~-(uint)(fVar7 < 0.0) & (uint)fVar10);
      }
    }
  }
  if (DAT_140f17b40 == (local_70 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_70 ^ (ulonglong)auStack_a8);
}

