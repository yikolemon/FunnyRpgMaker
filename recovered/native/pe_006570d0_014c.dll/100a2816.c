/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100a2816 */

undefined4 * __thiscall
FUN_100a2816(undefined4 *param_1,uint param_2,uint param_3,undefined2 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 local_18 [4];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)local_18;
  uVar3 = param_1[4];
  if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100047d6();
  }
  if (param_1[5] - uVar3 < param_3) {
    puVar2 = (undefined4 *)FUN_100a28f2(param_3,local_18[0],param_2,param_3,param_4);
    if (DAT_10388d00 == (local_14 ^ (uint)local_18)) {
      return puVar2;
    }
  }
  else {
    param_1[4] = uVar3 + param_3;
    puVar2 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar2 = (undefined4 *)*param_1;
    }
    iVar1 = (int)puVar2 + param_2 * 2;
    FUN_1025b2d0(param_3 * 2 + iVar1,iVar1,(uVar3 - param_2) * 2 + 2);
    if (param_3 != 0) {
      uVar3 = 0;
      do {
        *(undefined2 *)(iVar1 + uVar3 * 2) = param_4;
        uVar3 = uVar3 + 1;
      } while (param_3 != uVar3);
    }
    if (DAT_10388d00 == (local_14 ^ (uint)local_18)) {
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

