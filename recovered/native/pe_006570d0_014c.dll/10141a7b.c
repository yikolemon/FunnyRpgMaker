/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10141a7b */

void FUN_10141a7b(undefined4 param_1,undefined4 param_2,double param_3,double param_4,
                 undefined4 param_5,undefined4 param_6)

{
  double *pdVar1;
  double *pdVar2;
  double local_28;
  double local_20;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  pdVar1 = &local_20;
  local_20 = param_4;
  if (param_4 <= 0.0) {
    pdVar1 = (double *)0x0;
  }
  pdVar2 = (double *)(undefined1 *)0x0;
  if (0.0 < param_3) {
    pdVar2 = &local_28;
  }
  local_28 = param_3;
  FUN_101412ec(param_1,9,param_2,pdVar2,pdVar1,param_5,param_6);
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

