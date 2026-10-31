/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10258e10 */

void FUN_10258e10(int *param_1)

{
  uint uStack_38;
  undefined1 local_28 [12];
  undefined1 *local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  local_8 = 0xfffffffe;
  puStack_10 = &LAB_102592b0;
  local_14 = ExceptionList;
  local_c = DAT_10388d00 ^ 0x10382908;
  uStack_38 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  local_1c = (undefined1 *)&uStack_38;
  if (param_1 == (int *)0x0) {
    ExceptionList = &local_14;
    FUN_10258ef0(local_28,"Attempted a typeid of nullptr pointer!");
                    /* WARNING: Subroutine does not return */
    FUN_102586e0(local_28,&DAT_103828ec);
  }
  local_8 = 0;
  if (*(int *)(*(int *)(*param_1 + -4) + 0xc) != 0) {
    return;
  }
  ExceptionList = &local_14;
  local_1c = (undefined1 *)&uStack_38;
  FUN_10258f50(local_28,"Bad read pointer - no RTTI data!");
                    /* WARNING: Subroutine does not return */
  FUN_102586e0(local_28,&DAT_10382894);
}

