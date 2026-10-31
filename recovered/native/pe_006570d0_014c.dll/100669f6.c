/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100669f6 */

int * __thiscall FUN_100669f6(int *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint local_1c;
  uint local_18;
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&local_1c;
  if (0x3ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_100013fb();
  }
  local_1c = param_1[5];
  uVar1 = param_2 | 3;
  local_18 = 0x3ffffffe;
  if (((uVar1 < 0x3fffffff) && (local_1c <= 0x3ffffffe - (local_1c >> 1))) &&
     (local_18 = (local_1c >> 1) + local_1c, local_18 < uVar1)) {
    local_18 = uVar1;
  }
  iVar2 = FUN_100638ae(param_1,&local_18);
  uVar1 = local_1c;
  param_1[4] = param_2;
  param_1[5] = local_18;
  FUN_1025b2d0(iVar2,param_4,param_2 * 4);
  *(undefined4 *)(iVar2 + param_2 * 4) = 0;
  if (3 < uVar1) {
    FUN_10062064(param_1,*param_1,uVar1);
  }
  *param_1 = iVar2;
  if (DAT_10388d00 != (local_14 ^ (uint)&local_1c)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return param_1;
}

