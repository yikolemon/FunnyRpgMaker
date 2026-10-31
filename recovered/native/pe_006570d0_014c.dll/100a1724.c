/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a1724 */

undefined4 * __thiscall
FUN_100a1724(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined2 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined1 local_54 [64];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_5c;
  iVar1 = FUN_1007c87c(local_54,0x40,"%p",param_7);
  if (iVar1 < 0) {
    *param_2 = param_3;
    param_2[1] = param_4;
  }
  else {
    local_5c = param_3;
    uStack_58 = param_4;
    FUN_100a22be(param_1,param_2,CONCAT44(param_4,param_3),param_5,param_6,local_54,iVar1);
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&local_5c)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

