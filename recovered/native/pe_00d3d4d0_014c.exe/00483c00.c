/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00483c00 */

void __thiscall FUN_00483c00(void *this,undefined4 param_1,int *param_2,uint *param_3)

{
  uint local_2c [6];
  uint local_14;
  void *local_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_004a734d;
  local_10 = ExceptionList;
  local_14 = DAT_0050e8c0 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00402bae(local_2c,param_3);
  local_8 = 0;
  FUN_00403918(param_1,param_2,local_2c);
  FUN_0040230a((int *)local_2c);
  *(undefined ***)this = std::system_error::vftable;
  ExceptionList = local_10;
                    /* WARNING: Subroutine does not return */
  FUN_0047f2c0(local_14 ^ (uint)&stack0xfffffffc);
}

