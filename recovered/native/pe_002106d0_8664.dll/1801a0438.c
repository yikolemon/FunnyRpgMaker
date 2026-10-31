/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801a0438 */

void FUN_1801a0438(longlong param_1)

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
  
  local_70 = DAT_180402640 ^ (ulonglong)auStack_a8;
  lVar3 = FUN_1801a14ce();
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
        FUN_1800fdbca(param_1,0x278,(local_88._4_2_ & 0x10) >> 4);
        FUN_1800fdbca(param_1,0x279,(local_88._4_2_ & 0x20) >> 5);
        FUN_1800fdbca(param_1,0x27a,local_88._4_2_ >> 0xe & 1);
        FUN_1800fdbca(param_1,0x27b,local_88._4_2_ >> 0xd & 1);
        FUN_1800fdbca(param_1,0x27c,local_88 >> 0x2f & 1);
        FUN_1800fdbca(param_1,0x27d,local_88._4_2_ >> 0xc & 1);
        FUN_1800fdbca(param_1,0x27e,(local_88._4_2_ & 4) >> 2);
        uVar4 = (ulonglong)((local_88._4_2_ & 8) >> 3);
        FUN_1800fdbca(param_1,0x27f,uVar4);
        FUN_1800fdbca(param_1,0x280,CONCAT71((int7)(uVar4 >> 8),local_88._4_1_) & 0xffffffffffffff01
                     );
        FUN_1800fdbca(param_1,0x281,(local_88._4_2_ & 2) >> 1);
        FUN_1800fdbca(param_1,0x282,local_88._5_1_ & 1);
        FUN_1800fdbca(param_1,0x283,local_88._4_2_ >> 9 & 1);
        fVar7 = DAT_1803280c8;
        fVar1 = DAT_1802dc268;
        fVar10 = DAT_1802ac570;
        fVar6 = (float)(int)(local_88._6_1_ - 0x1e) / DAT_1803280c8;
        fVar9 = DAT_1802ac570;
        if (fVar6 <= DAT_1802ac570) {
          fVar9 = fVar6;
        }
        FUN_1800fd924(param_1,0x284,DAT_1802dc268 < fVar6,~-(uint)(fVar6 < 0.0) & (uint)fVar9);
        fVar7 = (float)(int)(local_88._7_1_ - 0x1e) / fVar7;
        fVar9 = fVar10;
        if (fVar7 <= fVar10) {
          fVar9 = fVar7;
        }
        FUN_1800fd924(param_1,0x285,fVar1 < fVar7,~-(uint)(fVar7 < 0.0) & (uint)fVar9);
        FUN_1800fdbca(param_1,0x286,(local_88._4_2_ & 0x40) >> 6);
        FUN_1800fdbca(param_1,0x287,local_88 >> 0x27 & 1);
        fVar7 = DAT_1803280cc;
        fVar6 = (float)((short)uStack_80 + 0x1ea9) / DAT_1803280cc;
        fVar9 = fVar10;
        if (fVar6 <= fVar10) {
          fVar9 = fVar6;
        }
        FUN_1800fd924(param_1,0x288,fVar1 < fVar6,~-(uint)(fVar6 < 0.0) & (uint)fVar9);
        fVar9 = DAT_1803280d0;
        fVar8 = (float)((short)uStack_80 + -0x1ea9) / DAT_1803280d0;
        fVar6 = fVar10;
        if (fVar8 <= fVar10) {
          fVar6 = fVar8;
        }
        FUN_1800fd924(param_1,0x289,fVar1 < fVar8,~-(uint)(fVar8 < 0.0) & (uint)fVar6);
        fVar8 = (float)(uStack_80._2_2_ + -0x1ea9) / fVar9;
        fVar6 = fVar10;
        if (fVar8 <= fVar10) {
          fVar6 = fVar8;
        }
        FUN_1800fd924(param_1,0x28a,fVar1 < fVar8,~-(uint)(fVar8 < 0.0) & (uint)fVar6);
        fVar8 = (float)(uStack_80._2_2_ + 0x1ea9) / fVar7;
        fVar6 = fVar10;
        if (fVar8 <= fVar10) {
          fVar6 = fVar8;
        }
        FUN_1800fd924(param_1,0x28b,fVar1 < fVar8,~-(uint)(fVar8 < 0.0) & (uint)fVar6);
        fVar8 = (float)(uStack_80._4_2_ + 0x1ea9) / fVar7;
        fVar6 = fVar10;
        if (fVar8 <= fVar10) {
          fVar6 = fVar8;
        }
        FUN_1800fd924(param_1,0x28c,fVar1 < fVar8,~-(uint)(fVar8 < 0.0) & (uint)fVar6);
        fVar8 = (float)(uStack_80._4_2_ + -0x1ea9) / fVar9;
        fVar6 = fVar10;
        if (fVar8 <= fVar10) {
          fVar6 = fVar8;
        }
        FUN_1800fd924(param_1,0x28d,fVar1 < fVar8,~-(uint)(fVar8 < 0.0) & (uint)fVar6);
        fVar9 = (float)(uStack_80._6_2_ + -0x1ea9) / fVar9;
        fVar6 = fVar10;
        if (fVar9 <= fVar10) {
          fVar6 = fVar9;
        }
        FUN_1800fd924(param_1,0x28e,fVar1 < fVar9,~-(uint)(fVar9 < 0.0) & (uint)fVar6);
        fVar7 = (float)(uStack_80._6_2_ + 0x1ea9) / fVar7;
        if (fVar7 <= fVar10) {
          fVar10 = fVar7;
        }
        FUN_1800fd924(param_1,0x28f,fVar1 < fVar7,~-(uint)(fVar7 < 0.0) & (uint)fVar10);
      }
    }
  }
  if (DAT_180402640 == (local_70 ^ (ulonglong)auStack_a8)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_70 ^ (ulonglong)auStack_a8);
}

