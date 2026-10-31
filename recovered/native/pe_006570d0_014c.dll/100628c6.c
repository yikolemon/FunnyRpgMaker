/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100628c6 */

bool FUN_100628c6(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_18 [4];
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)auStack_18;
  puVar2 = param_1;
  if (0xf < (uint)param_1[5]) {
    puVar2 = (undefined4 *)*param_1;
  }
  uVar1 = FUN_1001c721(puVar2,param_1[4]);
  FUN_1004340a(auStack_18,param_1,uVar1);
  if (DAT_10388d00 == (local_10 ^ (uint)auStack_18)) {
    return local_14 != 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

