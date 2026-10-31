/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a67c0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_004a67c0(void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ushort in_FPUControlWord;
  double dVar4;
  undefined1 in_XMM0 [16];
  double dVar5;
  double dVar6;
  undefined8 local_10;
  
  dVar4 = in_XMM0._0_8_;
  iVar3 = in_XMM0._0_4_;
  if (((MXCSR & 0x7f80) != 0x1f80) || ((in_FPUControlWord & 0x7f) != 0x7f)) {
    local_10 = CONCAT44(0x4a6a57,(undefined4)local_10);
    FUN_004a6c9f(param_1,iVar3,in_XMM0._4_4_);
    return;
  }
  while( true ) {
    uVar1 = (uint)(ushort)(in_XMM0._6_2_ >> 4);
    dVar5 = (double)(in_XMM0._0_8_ & _UNK_00501868 | _UNK_005018d8);
    dVar6 = (double)(_UNK_00501898 & (ulonglong)dVar5);
    in_XMM0._8_8_ =
         (dVar5 - dVar6) *
         *(double *)
          (&UNK_00501d88 +
          (SUB82(_DAT_00501880 + (double)(in_XMM0._0_8_ & _DAT_00501860 | (ulonglong)DAT_005018d0),0
                ) & 0x7f0)) +
         (dVar6 * *(double *)
                   (&UNK_00501d88 +
                   (SUB82(_DAT_00501880 +
                          (double)(in_XMM0._0_8_ & _DAT_00501860 | (ulonglong)DAT_005018d0),0) &
                   0x7f0)) - _UNK_00501878);
    uVar2 = uVar1 - 1;
    if (uVar2 < 0x7fe) {
      return;
    }
    local_10 = -(ulonglong)(dVar4 == 0.0);
    if ((short)local_10 != 0) break;
    if (uVar2 != 0xffffffff) {
      if (uVar2 < 0x7ff) {
        if (DAT_005018d0 == (double)((ulonglong)dVar4 & _DAT_00501860 | (ulonglong)DAT_005018d0)) {
          return;
        }
        iVar3 = 0x3e9;
        local_10 = _DAT_00501860;
      }
      else if (((uVar1 & 0x7ff) < 0x7ff) ||
              (iVar3 == 0 && ((ulonglong)dVar4 & 0xfffff00000000) == 0)) {
        local_10 = 0xfff8000000000000;
        iVar3 = 9;
      }
      else {
        iVar3 = 0x3e9;
      }
      goto LAB_004a69f4;
    }
    in_XMM0._0_8_ = dVar4 * DAT_005018f0;
  }
  iVar3 = 8;
  local_10 = DAT_00501900;
LAB_004a69f4:
  FUN_0049e260((undefined8 *)&stack0xfffffff8,(undefined8 *)&stack0xfffffff8,&local_10,iVar3);
  return;
}

