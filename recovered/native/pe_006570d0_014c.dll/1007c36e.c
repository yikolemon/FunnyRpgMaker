/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1007c36e */

undefined4 * __thiscall
FUN_1007c36e(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            int param_5,char param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined1 local_5a [6];
  undefined1 local_54 [64];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_64;
  FUN_1007d668(param_1,local_5a,&DAT_10330f07,*(undefined4 *)(param_5 + 0x14));
  iVar1 = FUN_1007c87c(local_54,0x40,local_5a,param_7);
  if (iVar1 < 0) {
    *param_2 = param_3;
    param_2[1] = param_4;
  }
  else {
    local_64 = param_3;
    uStack_60 = param_4;
    FUN_1007c8e6(param_1,param_2,CONCAT44(param_4,param_3),param_5,(int)param_6,local_54,iVar1);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_64)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

