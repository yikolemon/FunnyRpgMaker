/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001610a */

undefined4 FUN_1001610a(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_8;
  cVar1 = FUN_1001615c(&param_2,4);
  if (cVar1 == '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1001615c(param_1,param_2);
  }
  if (DAT_10388d00 == (local_8 ^ (uint)&local_8)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

