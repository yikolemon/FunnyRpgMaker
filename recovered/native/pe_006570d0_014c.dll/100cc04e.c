/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100cc04e */

byte FUN_100cc04e(undefined4 param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  byte bVar1;
  int iVar2;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_24 = param_3;
  local_28 = param_2;
  FUN_100cc0ed(&local_30,&local_28);
  do {
    if (*param_4 != 1) {
      bVar1 = 1;
      goto LAB_100cc0c8;
    }
    local_20 = local_30;
    uStack_1c = local_2c;
    iVar2 = FUN_100cc1a0(param_1,CONCAT44(local_2c,local_30));
  } while (iVar2 != 1);
  bVar1 = *param_4 ^ 1;
LAB_100cc0c8:
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

