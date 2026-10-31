/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004042f8 */

void FUN_004042f8(undefined4 param_1)

{
  undefined **ppuVar1;
  int aiStack_20 [5];
  uint local_c;
  
  local_c = DAT_0050e8c0 ^ (uint)aiStack_20;
  ppuVar1 = FUN_00402538();
  FUN_00404198(param_1,(int *)ppuVar1);
                    /* WARNING: Subroutine does not return */
  FUN_00484ff0(aiStack_20,&DAT_00509854);
}

