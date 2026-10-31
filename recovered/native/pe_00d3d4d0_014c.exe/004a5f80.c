/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004a5f80 */

float10 __fastcall
FUN_004a5f80(undefined4 param_1,int param_2,undefined2 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  float10 in_ST0;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 local_10;
  double dStack_c;
  
  local_14 = param_7;
  local_10 = param_8;
  dStack_c = (double)in_ST0;
  uStack_1c = param_5;
  uStack_18 = param_6;
  uStack_20 = param_1;
  FUN_004a5fe0(param_2,&local_24,&param_3);
  return (float10)dStack_c;
}

