/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102295a0 */

void FUN_102295a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6,undefined4 param_7)

{
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_18 = param_6 & 0xffff;
  local_14 = param_6 & 0xffff0000;
  local_c = param_4;
  local_8 = param_7;
  local_10 = 0;
  local_1c = 0x18;
  CreateFile2(param_1,param_2,param_3,param_5,&local_1c);
  return;
}

