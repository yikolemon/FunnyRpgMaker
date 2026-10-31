/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102207b6 */

int __fastcall FUN_102207b6(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int local_14;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_14;
  local_14 = 0;
  puVar1 = (undefined4 *)FUN_101c21f6(param_1,8,&local_14);
  if (local_14 == 0) {
    puVar1[1] = 0;
    *puVar1 = param_1;
    *param_2 = (int)puVar1;
  }
  if (DAT_10388d00 == (local_10 ^ (uint)&local_14)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

