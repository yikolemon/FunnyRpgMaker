/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180287220 */

void FUN_180287220(undefined8 param_1,int param_2)

{
  double dVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  undefined1 in_XMM0 [16];
  
  dVar1 = in_XMM0._0_8_;
  if (((ulonglong)dVar1 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if (((longlong)dVar1 + 0x10000000000000U & 0x7fffffffffffffff) != 0) {
      if (((ulonglong)dVar1 & 0x7ff8000000000000) == 0x7ff8000000000000) {
        uVar2 = FUN_18029c250(0x1f80,0xffc0);
        FUN_18029ff90();
        FUN_18029c250(uVar2,0xffc0);
      }
      else {
        FUN_18029c250(0x1f80,0xffc0);
        FUN_18029fde0(8);
      }
    }
  }
  else if (dVar1 != 0.0) {
    if ((((ulonglong)dVar1 & 0x7ff0000000000000) == 0) &&
       (((ulonglong)dVar1 & 0xfffffffffffff) != 0)) {
      lVar4 = 0x3f;
      if (((ulonglong)dVar1 & 0xfffffffffffff) != 0) {
        for (; ((ulonglong)dVar1 & 0xfffffffffffff) >> lVar4 == 0; lVar4 = lVar4 + -1) {
        }
      }
      iVar3 = (int)lVar4 + -0x431;
    }
    else {
      iVar3 = (in_XMM0._4_4_ >> 0x14 & 0x7ff) - 0x3fe;
    }
    lVar4 = (longlong)iVar3 + (longlong)param_2;
    if (lVar4 < 0x401) {
      if (lVar4 < -0x3fd) {
        FUN_18029c250(0x1f80,0xffc0);
        FUN_18029fde0(0x12);
      }
    }
    else {
      FUN_18029c250(0x1f80,0xffc0);
      if (0xa00 < lVar4) {
        FUN_1802a09d0(DAT_180351d10);
      }
      FUN_18029fde0(0x11);
    }
  }
  return;
}

