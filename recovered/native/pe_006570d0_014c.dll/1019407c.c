/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1019407c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1019407c(undefined4 param_1,float param_2,float param_3,float param_4,undefined4 param_5)

{
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  undefined8 local_20;
  undefined8 local_18;
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&local_30;
  local_30 = (float)DAT_10301470 * param_4;
  fStack_2c = (float)((ulonglong)DAT_10301470 >> 0x20) * param_4;
  fStack_28 = param_4 * 0.0;
  fStack_24 = param_4 * 0.0;
  local_18 = CONCAT44(param_3 + fStack_2c,param_2 + local_30);
  local_20 = CONCAT44(param_4 * _UNK_10301484 + param_3,param_4 * _DAT_10301480 + param_2);
  FUN_1018b85a(&local_20,&local_18,param_5,0,0);
  FUN_10193f87(param_1,param_4 * DAT_102b70e0 + param_2,DAT_10301490 * param_4 + param_3,fStack_2c,
               DAT_102b8e90 * param_4,3,param_5);
  if (DAT_10388d00 == (local_10 ^ (uint)&local_30)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

