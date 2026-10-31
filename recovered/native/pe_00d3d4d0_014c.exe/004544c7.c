/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004544c7 */

void __fastcall FUN_004544c7(byte *param_1,byte *param_2,int param_3,char param_4,int *param_5)

{
  int aiStack_24 [5];
  uint local_10;
  
  local_10 = DAT_0050e8c0 ^ (uint)aiStack_24;
  if ((*param_5 != 0) && (param_5[1] != 0)) {
    FUN_00454554(aiStack_24,param_5,param_4);
    if (param_3 == 2) {
      FUN_00454744(aiStack_24,param_1,param_2);
    }
    else if (param_3 == 1) {
      FUN_0045461b(aiStack_24,param_1,param_2);
    }
    else if (param_3 == 0) {
      FUN_0045458d(aiStack_24,(char *)param_1,(int)param_2);
    }
  }
  if (DAT_0050e8c0 != (local_10 ^ (uint)aiStack_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_0047f2c0(local_10 ^ (uint)aiStack_24);
  }
  return;
}

