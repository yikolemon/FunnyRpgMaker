/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1009273a */

/* WARNING: Type propagation algorithm not settling */

undefined2 * __thiscall
FUN_1009273a(int param_1,undefined2 *param_2,undefined2 *param_3,undefined1 param_4,
            undefined1 *param_5)

{
  undefined1 uVar1;
  int iVar2;
  int local_28 [3];
  undefined1 local_19 [5];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_28;
  local_28[0] = param_1;
  if (param_2 != param_3) {
    local_28[0] = param_1 + 0x18;
    do {
      local_28[2] = 0;
      local_28[1] = 0;
      iVar2 = FUN_1022c060(local_19,*param_2,local_28 + 1,local_28[0]);
      uVar1 = local_19[0];
      if (iVar2 != 1) {
        uVar1 = param_4;
      }
      *param_5 = uVar1;
      param_2 = param_2 + 1;
      param_5 = param_5 + 1;
    } while (param_2 != param_3);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)local_28)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

