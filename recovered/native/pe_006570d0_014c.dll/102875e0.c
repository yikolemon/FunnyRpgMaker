/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102875e0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_102875e0(void)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  ushort in_FPUControlWord;
  undefined1 in_XMM0 [16];
  double dVar5;
  undefined1 auVar4 [16];
  double dVar6;
  undefined8 local_10;
  double local_8;
  
  local_8 = in_XMM0._0_8_;
  if (((MXCSR & 0x7f80) != 0x1f80) || (auVar4 = in_XMM0, (in_FPUControlWord & 0x7f) != 0x7f)) {
    local_10 = CONCAT44(0x10287877,(undefined4)local_10);
    FUN_1028838f();
    return;
  }
  while( true ) {
    uVar1 = (uint)(ushort)(auVar4._6_2_ >> 4);
    dVar5 = (double)(auVar4._0_8_ & _UNK_1032d4a8 | _UNK_1032d518);
    dVar6 = (double)(_UNK_1032d4d8 & (ulonglong)dVar5);
    auVar4._8_8_ = (dVar5 - dVar6) *
                   *(double *)
                    (&UNK_1032d9d8 +
                    (SUB82(_DAT_1032d4c0 +
                           (double)(auVar4._0_8_ & _DAT_1032d4a0 | (ulonglong)DAT_1032d510),0) &
                    0x7f0)) +
                   (dVar6 * *(double *)
                             (&UNK_1032d9d8 +
                             (SUB82(_DAT_1032d4c0 +
                                    (double)(auVar4._0_8_ & _DAT_1032d4a0 | (ulonglong)DAT_1032d510)
                                    ,0) & 0x7f0)) - _UNK_1032d4b8);
    uVar2 = uVar1 - 1;
    if (uVar2 < 0x7fe) {
      return;
    }
    local_10 = -(ulonglong)(local_8 == 0.0);
    if ((short)local_10 != 0) break;
    if (uVar2 != 0xffffffff) {
      if (uVar2 < 0x7ff) {
        if (DAT_1032d510 == (double)((ulonglong)local_8 & _DAT_1032d4a0 | (ulonglong)DAT_1032d510))
        {
          return;
        }
        uVar3 = 0x3e9;
        local_10 = _DAT_1032d4a0;
      }
      else if (((uVar1 & 0x7ff) < 0x7ff) ||
              (in_XMM0._0_4_ == 0 && ((ulonglong)local_8 & 0xfffff00000000) == 0)) {
        local_10 = 0xfff8000000000000;
        uVar3 = 9;
      }
      else {
        uVar3 = 0x3e9;
      }
      goto LAB_10287814;
    }
    auVar4._0_8_ = local_8 * DAT_1032d530;
  }
  uVar3 = 8;
  local_10 = DAT_1032d540;
LAB_10287814:
  FUN_1027dde0(&local_8,&local_8,&local_10,uVar3);
  return;
}

