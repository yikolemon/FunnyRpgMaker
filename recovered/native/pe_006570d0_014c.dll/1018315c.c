/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1018315c */

int FUN_1018315c(undefined4 param_1)

{
  undefined4 uVar1;
  undefined1 auStack_18 [4];
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_18;
  uVar1 = FUN_100616f3(param_1);
  FUN_100614e8(auStack_18,param_1,uVar1);
  if (local_14 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_102284b0("invalid unordered_map<K, T> key");
  }
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_18)) {
    return local_14 + 0xc;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

