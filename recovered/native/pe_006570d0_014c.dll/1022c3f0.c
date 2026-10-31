/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c3f0 */

undefined4 FUN_1022c3f0(int param_1)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  puStack_10 = &LAB_102592b0;
  local_14 = ExceptionList;
  local_c = DAT_10388d00 ^ 0x10381060;
  ExceptionList = &local_14;
  local_8 = 0;
  if (((IMAGE_DOS_HEADER_10000000.e_magic == (char  [2])0x5a4d) &&
      (*(int *)(IMAGE_DOS_HEADER_10000000.e_lfanew + 0x10000000) == 0x4550)) &&
     (*(short *)((int)IMAGE_DOS_HEADER_10000000.e_res_4_ + (IMAGE_DOS_HEADER_10000000.e_lfanew - 4))
      == 0x10b)) {
    iVar1 = FUN_1022c700(0x10000000,param_1 + -0x10000000);
    if ((iVar1 != 0) && (-1 < *(int *)(iVar1 + 0x24))) {
      ExceptionList = local_14;
      return 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}

