/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10003b26 */

undefined4 * __thiscall FUN_10003b26(undefined4 *param_1,uint param_2,byte param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_18;
  iVar1 = param_1[4];
  if ((uint)(param_1[5] - iVar1) < param_2) {
    puVar2 = (undefined4 *)FUN_10003bce(param_2,local_18[0],param_2,(int)(char)param_3);
    if (DAT_10388d00 == (local_14 ^ (uint)local_18)) {
      return puVar2;
    }
  }
  else {
    param_1[4] = iVar1 + param_2;
    puVar2 = param_1;
    if (0xf < (uint)param_1[5]) {
      puVar2 = (undefined4 *)*param_1;
    }
    _memset((void *)(iVar1 + (int)puVar2),(uint)param_3,param_2);
    *(undefined1 *)((int)puVar2 + iVar1 + param_2) = 0;
    if (DAT_10388d00 == (local_14 ^ (uint)local_18)) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

