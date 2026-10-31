/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00483e80 */

undefined4 __cdecl FUN_00483e80(int param_1)

{
  uint uVar1;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  undefined4 local_8;
  
  puStack_10 = &LAB_004858c0;
  local_14 = ExceptionList;
  local_c = DAT_0050e8c0 ^ 0x50cb60;
  ExceptionList = &local_14;
  local_8 = 0;
  uVar1 = 0x5a4d;
  if (((IMAGE_DOS_HEADER_00400000.e_magic == (char  [2])0x5a4d) &&
      (uVar1 = IMAGE_DOS_HEADER_00400000.e_lfanew,
      *(int *)(IMAGE_DOS_HEADER_00400000.e_lfanew + 0x400000) == 0x4550)) &&
     (*(short *)((int)IMAGE_DOS_HEADER_00400000.e_res_4_ + (IMAGE_DOS_HEADER_00400000.e_lfanew - 4))
      == 0x10b)) {
    uVar1 = FUN_004840e0(0x400000,param_1 - 0x400000);
    if ((uVar1 != 0) && (-1 < *(int *)(uVar1 + 0x24))) {
      ExceptionList = local_14;
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  ExceptionList = local_14;
  return uVar1 & 0xffffff00;
}

