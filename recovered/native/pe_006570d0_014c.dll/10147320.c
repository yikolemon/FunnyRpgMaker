/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10147320 */

void FUN_10147320(undefined4 param_1,undefined8 *param_2,uint param_3)

{
  char cVar1;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_18;
  local_18 = *param_2;
  local_10 = *(undefined4 *)(param_2 + 1);
  local_c = 0x3f800000;
  cVar1 = FUN_10145288(param_1,&local_18,param_3 | 2,0);
  if (cVar1 != '\0') {
    *param_2 = local_18;
    *(undefined4 *)(param_2 + 1) = local_10;
  }
  if (DAT_10388d00 == (local_8 ^ (uint)&local_18)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

