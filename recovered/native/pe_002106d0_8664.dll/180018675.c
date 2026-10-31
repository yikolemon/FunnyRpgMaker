/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180018675 */

undefined8 FUN_180018675(undefined8 param_1)

{
  undefined1 local_c0 [40];
  undefined1 local_98 [32];
  undefined1 local_78 [32];
  undefined1 local_58 [32];
  undefined1 local_38 [32];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_180012667(local_38);
  FUN_180012917(local_58,"\\\\\\\\.\\\\pipe\\\\",local_38);
  FUN_180018514(local_c0,"NAMED_PIPE_LISTENER",1);
  FUN_180020bbc(local_78,&DAT_18037ebc1,local_c0,local_58,0);
  FUN_180012917(local_98,&DAT_18036d6c0,local_78);
  FUN_180020b6a(param_1,local_98,&DAT_18036d6c0);
  FUN_180001ef2(local_98);
  FUN_180001ef2(local_78);
  FUN_1800185bc(local_c0);
  FUN_180001ef2(local_58);
  FUN_180001ef2(local_38);
  return param_1;
}

