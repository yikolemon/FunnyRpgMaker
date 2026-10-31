/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001f6b2 */

undefined4 * __thiscall
FUN_1001f6b2(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined1 auStack_1c [8];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)auStack_1c;
  uVar1 = FUN_1001f836(param_3,param_4,param_5);
  *param_2 = *param_1;
  param_2[1] = 0;
  FUN_1001fd02(uVar1);
  FUN_1001f937(auStack_1c,*param_2,param_2[1],param_5,param_6);
  if (DAT_10388d00 == (local_14 ^ (uint)auStack_1c)) {
    return param_2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

