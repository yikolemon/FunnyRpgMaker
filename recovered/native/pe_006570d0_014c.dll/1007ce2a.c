/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007ce2a */

undefined4 * __thiscall FUN_1007ce2a(undefined4 *param_1,uint param_2,uint param_3,byte param_4)

{
  uint uVar1;
  undefined4 *puVar2;
  void *_Dst;
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_18;
  uVar1 = param_1[4];
  if (uVar1 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100047d6();
  }
  if (param_1[5] - uVar1 < param_3) {
    puVar2 = (undefined4 *)FUN_1007cef2(param_3,local_18[0],param_2,param_3,(int)(char)param_4);
    if (DAT_10388d00 == (local_14 ^ (uint)local_18)) {
      return puVar2;
    }
  }
  else {
    param_1[4] = uVar1 + param_3;
    puVar2 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar2 = (undefined4 *)*param_1;
    }
    _Dst = (void *)((int)puVar2 + param_2);
    FUN_1025b2d0(param_3 + (int)_Dst,_Dst,(uVar1 - param_2) + 1);
    _memset(_Dst,(uint)param_4,param_3);
    if (DAT_10388d00 == (local_14 ^ (uint)local_18)) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

