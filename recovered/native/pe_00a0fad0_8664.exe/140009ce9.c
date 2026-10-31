/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140009ce9 */

undefined8 * FUN_140009ce9(undefined8 *param_1,longlong param_2,undefined1 param_3)

{
  longlong *plVar1;
  undefined8 unaff_RBX;
  undefined1 local_150 [24];
  undefined1 local_138 [224];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  local_30 = param_1;
  if (*(longlong *)(param_2 + 0x10) == 0) {
    FUN_14000a06a(param_1);
  }
  else {
    FUN_140009eb0(local_150,1);
    FUN_14000c5de(local_138,param_2);
    local_58 = 0;
    uStack_50 = 0;
    local_48 = 0;
    local_40 = 0xf;
    while( true ) {
      plVar1 = (longlong *)
               thunk_FUN_14000c6fc(local_150,&local_58,
                                   CONCAT71((int7)((ulonglong)unaff_RBX >> 8),param_3) & 0xffffffff)
      ;
      if ((*(byte *)((longlong)plVar1 + (longlong)*(int *)(*plVar1 + 4) + 0x10) & 6) != 0) break;
      FUN_14000d086(local_30,&local_58);
    }
    FUN_1400017de(&local_58);
    FUN_140009ff0(local_150);
  }
  return local_30;
}

