/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c0321 */

void FUN_1400c0321(undefined8 param_1,longlong *param_2,longlong *param_3)

{
  longlong local_188 [2];
  byte abStack_178 [248];
  undefined1 local_80 [24];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_140085d44(local_188,param_1,0x20,0x40,1);
  if ((abStack_178[*(int *)(local_188[0] + 4)] & 6) == 0) {
    FUN_140085d9c(local_188,*param_3 + *param_2,param_2[1] - (*param_3 + *param_2));
    FUN_140085ecc(local_188);
    FUN_1400581a2(local_188);
    return;
  }
  FUN_140084b8e(param_1,local_48);
  FUN_140018136(local_68,"Failed to open output file: ",local_48);
  FUN_14000b166(local_80,local_68);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_80,&DAT_14017a4d8);
}

