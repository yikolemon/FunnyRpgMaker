/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10122a81 */

void FUN_10122a81(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 local_28 [20];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_28;
  if (0 < param_2) {
    do {
      param_2 = param_2 + -1;
      iVar1 = *param_1;
      if (*(int *)(iVar1 + 0x3a4) == param_3) {
        FUN_100fa4b1(local_28,0x14,"[%04d] Window",(int)*(short *)(iVar1 + 0x10e));
        FUN_10124576(iVar1,local_28);
        FUN_10149358(local_28);
        FUN_10122a81(param_1 + 1,param_2,iVar1);
        FUN_10149387();
      }
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  if (DAT_10388d00 != (local_14 ^ (uint)local_28)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

