/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100b9f36 */

int __thiscall FUN_100b9f36(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined1 local_14 [4];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)local_14;
  if (*(uint *)(param_1 + 0x18) < param_3) {
    iVar1 = FUN_100b9fca(param_3,local_14[0],param_2);
    if (DAT_10388d00 == (local_10 ^ (uint)local_14)) {
      return iVar1;
    }
  }
  else {
    if (*(uint *)(param_1 + 0x18) < 0x10) {
      iVar1 = param_1 + 4;
    }
    else {
      iVar1 = *(int *)(param_1 + 4);
    }
    *(uint *)(param_1 + 0x14) = param_3;
    FUN_1025b2d0(iVar1,param_2,param_3);
    *(undefined1 *)(iVar1 + param_3) = 0;
    if (DAT_10388d00 == (local_10 ^ (uint)local_14)) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

