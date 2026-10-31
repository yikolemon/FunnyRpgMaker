/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102066b3 */

undefined4 __fastcall FUN_102066b3(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_10;
  local_10 = 3;
  iVar1 = FUN_1020670a(1);
  uVar2 = 0xa0;
  if (iVar1 == 1) {
    *param_2 = local_c;
    uVar2 = 0;
  }
  if (DAT_10388d00 == (local_8 ^ (uint)&local_10)) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

