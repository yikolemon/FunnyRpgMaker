/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10062152 */

void __thiscall FUN_10062152(undefined4 *param_1,byte param_2,uint param_3)

{
  undefined4 *_Dst;
  uint uVar1;
  
  if (-1 < (int)param_3) {
    uVar1 = 0xf;
    _Dst = param_1;
    if (0xf < param_3) {
      uVar1 = 0x16;
      if (0x16 < (param_3 | 0xf)) {
        uVar1 = param_3 | 0xf;
      }
      _Dst = (undefined4 *)FUN_10001426(uVar1 + 1);
      *param_1 = _Dst;
    }
    param_1[4] = param_3;
    param_1[5] = uVar1;
    _memset(_Dst,(uint)param_2,param_3);
    *(undefined1 *)((int)_Dst + param_3) = 0;
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_100013fb();
}

