/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10004404 */

undefined4 * __thiscall FUN_10004404(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  local_1c = param_1[4];
  if (0x7ffffffeU - local_1c < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  param_2 = param_2 + local_1c;
  uVar1 = param_1[5];
  uVar4 = param_2 | 7;
  local_18 = 0x7ffffffe;
  if (((uVar4 < 0x7fffffff) && (uVar1 <= 0x7ffffffe - (uVar1 >> 1))) &&
     (local_18 = (uVar1 >> 1) + uVar1, local_18 < uVar4)) {
    local_18 = uVar4;
  }
  uVar3 = FUN_10001406(param_1,&local_18);
  param_1[4] = param_2;
  param_1[5] = local_18;
  if (uVar1 < 8) {
    FUN_1025b2d0(uVar3,param_1,local_1c * 2 + 2);
  }
  else {
    uVar2 = *param_1;
    FUN_1025b2d0(uVar3,uVar2,local_1c * 2 + 2);
    FUN_100017aa(param_1,uVar2,uVar1);
  }
  *param_1 = uVar3;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

