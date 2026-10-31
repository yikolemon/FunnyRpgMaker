/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10223909 */

int FUN_10223909(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_28;
  iVar1 = 0;
  if (((param_1 != (undefined4 *)0x0) && (param_1[0x12] == 0x62697473)) &&
     ((*(byte *)(param_1[0x27] + 4) & 1) == 0)) {
    FUN_10222e28(&local_28);
    iVar1 = FUN_10222e3f(*param_1,param_1 + 0x13,&local_28);
    if (iVar1 == 0) {
      *(undefined8 *)(param_1 + 0x17) = local_18;
      param_1[0x13] = local_28;
      param_1[0x14] = uStack_24;
      param_1[0x15] = uStack_20;
      param_1[0x16] = uStack_1c;
      *(uint *)(param_1[0x27] + 4) = *(uint *)(param_1[0x27] + 4) | 1;
      iVar1 = 0;
    }
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_28)) {
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

