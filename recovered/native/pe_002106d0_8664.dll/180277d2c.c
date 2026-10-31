/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180277d2c */

bool FUN_180277d2c(longlong param_1,ulonglong param_2,longlong param_3)

{
  longlong lVar1;
  bool bVar2;
  
  if (param_2 < 0x4000000000000000) {
    param_2 = param_2 * 4;
    if (((*(longlong *)(param_1 + 0x408) == 0) && (param_2 < 0x401)) ||
       (param_2 < *(ulonglong *)(param_1 + 0x400) || param_2 - *(ulonglong *)(param_1 + 0x400) == 0)
       ) {
      bVar2 = true;
    }
    else {
      lVar1 = _malloc_base(param_2);
      bVar2 = lVar1 != 0;
      if (bVar2) {
        FUN_180290e40(*(undefined8 *)(param_1 + 0x408));
        *(longlong *)(param_1 + 0x408) = lVar1;
        *(ulonglong *)(param_1 + 0x400) = param_2;
      }
      FUN_180290e40(0);
    }
  }
  else {
    *(undefined1 *)(param_3 + 0x30) = 1;
    bVar2 = false;
    *(undefined4 *)(param_3 + 0x2c) = 0xc;
  }
  return bVar2;
}

