/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100927c8 */

uint __thiscall FUN_100927c8(int param_1,undefined2 param_2,uint param_3)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  byte local_d [5];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_18;
  local_14 = 0;
  local_18 = 0;
  iVar1 = FUN_1022c060(local_d,param_2,&local_18,param_1 + 0x18);
  if (iVar1 == 1) {
    param_3 = (uint)local_d[0];
  }
  if (DAT_10388d00 != (local_8 ^ (uint)&local_18)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_3;
}

