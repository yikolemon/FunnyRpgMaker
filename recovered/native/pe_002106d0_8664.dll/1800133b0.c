/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800133b0 */

longlong FUN_1800133b0(undefined8 param_1,longlong param_2)

{
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  longlong local_38;
  longlong local_30;
  char local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_180015eba(param_1,&local_38);
  if (local_20 == '\x01') {
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    uStack_40 = 0;
    FUN_180002428(&local_58,local_38,local_30 - local_38);
    FUN_180013bfa(param_2,&local_58);
    FUN_180001ef2(&local_58);
  }
  else {
    *(undefined1 *)(param_2 + 0x20) = 0;
  }
  if (local_20 == '\x01') {
    FUN_180004cea(&local_38);
  }
  return param_2;
}

