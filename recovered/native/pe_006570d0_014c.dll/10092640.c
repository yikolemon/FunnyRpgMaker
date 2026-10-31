/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10092640 */

undefined1 * __thiscall
FUN_10092640(int param_1,undefined1 *param_2,undefined1 *param_3,undefined2 *param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined1 auStack_24 [2];
  undefined2 local_22;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 local_15;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_24;
  if (param_2 != param_3) {
    do {
      local_15 = *param_2;
      local_1c = 0;
      local_20 = 0;
      iVar1 = FUN_1022d8f0(&local_22,&local_15,1,&local_20,param_1 + 0x18);
      uVar2 = 0xffff;
      if (-1 < iVar1) {
        uVar2 = local_22;
      }
      *param_4 = uVar2;
      param_2 = param_2 + 1;
      param_4 = param_4 + 1;
    } while (param_2 != param_3);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_24)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

