/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 1400c132a */

void FUN_1400c132a(longlong param_1)

{
  undefined8 uVar1;
  undefined1 local_290 [568];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  if (*(char *)(param_1 + 0x20) == '\0') {
    uVar1 = FUN_1400052b8(&PTR_DAT_1401c97b0,"Loading Game.dat ... ");
    FUN_140041192(uVar1);
    FUN_140005554(local_38,"BasicData/Game.dat",0);
    FUN_14007dcb3(local_58,param_1,local_38);
    FUN_1400c0d66(local_290,local_58,param_1 + 0x21);
    FUN_1400c5140(param_1 + 0x28,local_290);
    FUN_1400c2914(local_290);
    FUN_140005690(local_58);
    FUN_140005690(local_38);
    uVar1 = FUN_1400052b8(&PTR_DAT_1401c97b0,"Done");
    FUN_1400054d7(uVar1);
  }
  return;
}

