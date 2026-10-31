/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10004c70 */

undefined4 * __thiscall FUN_10004c70(undefined4 *param_1,uint param_2,ushort param_3)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint local_28 [2];
  uint local_20;
  uint local_1c;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_28;
  iVar1 = param_1[4];
  if ((uint)(param_1[5] - iVar1) < param_2) {
    local_1c = (uint)param_3;
    local_20 = param_2;
    local_28[0] = param_2;
    puVar2 = (undefined4 *)FUN_10004d18();
    if (DAT_10388d00 == (local_14 ^ (uint)local_28)) {
      return puVar2;
    }
  }
  else {
    param_1[4] = iVar1 + param_2;
    puVar2 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar2 = (undefined4 *)*param_1;
    }
    if (param_2 != 0) {
      uVar3 = 0;
      do {
        *(ushort *)((int)puVar2 + uVar3 * 2 + iVar1 * 2) = param_3;
        uVar3 = uVar3 + 1;
      } while (param_2 != uVar3);
    }
    *(undefined2 *)((int)puVar2 + (iVar1 + param_2) * 2) = 0;
    if (DAT_10388d00 == (local_14 ^ (uint)local_28)) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

