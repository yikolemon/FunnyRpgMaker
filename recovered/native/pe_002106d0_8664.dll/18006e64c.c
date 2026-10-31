/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18006e64c */

void FUN_18006e64c(longlong param_1)

{
  undefined1 local_290 [568];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x20) == '\0') {
    FUN_180001e04(local_38,"BasicData/Game.dat",0);
    FUN_180001c90(local_58,param_1,local_38);
    FUN_18006e088(local_290,local_58,param_1 + 0x21);
    FUN_18009f318(param_1 + 0x28,local_290);
    FUN_18006fbfa(local_290);
    FUN_180001e4c(local_58);
    FUN_180001e4c(local_38);
  }
  return;
}

