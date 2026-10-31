/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007eaab */

void FUN_14007eaab(undefined8 param_1,longlong *param_2)

{
  longlong local_180 [2];
  byte abStack_170 [248];
  undefined1 local_78 [24];
  undefined1 local_60 [32];
  undefined1 local_40 [32];
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140085d44(local_180,param_1,0x20,0x40,1);
  if ((abStack_170[*(int *)(local_180[0] + 4)] & 6) == 0) {
    FUN_140085d9c(local_180,*param_2,param_2[1] - *param_2);
    FUN_140085ecc(local_180);
    FUN_1400581a2(local_180);
    return;
  }
  FUN_140084b8e(param_1,local_40);
  FUN_140018136(local_60,"Failed to open output file: ",local_40);
  FUN_14000b166(local_78,local_60);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_78,&DAT_14017a4d8);
}

