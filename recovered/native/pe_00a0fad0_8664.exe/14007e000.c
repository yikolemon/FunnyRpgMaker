/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14007e000 */

longlong * FUN_14007e000(longlong *param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong local_1c8 [2];
  byte abStack_1b8 [56];
  longlong alStack_180 [25];
  undefined8 local_b8;
  undefined2 local_b0;
  longlong local_a8;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined1 local_98 [24];
  undefined1 local_80 [24];
  undefined1 local_68 [32];
  undefined1 local_48 [32];
  longlong *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_140078b7e(local_1c8,param_2,0x20,0x40,1);
  if ((abStack_1b8[*(int *)(local_1c8[0] + 4)] & 6) != 0) {
    FUN_140084b8e(param_2,local_68);
    FUN_140018136(local_48,"Failed to open file: ",local_68);
    FUN_14000b166(local_98,local_48);
                    /* WARNING: Subroutine does not return */
    FUN_140106270(local_98,&DAT_14017a4d8);
  }
  local_b8 = 0;
  local_b0 = 1;
  local_a8 = *(longlong *)((longlong)alStack_180 + (longlong)*(int *)(local_1c8[0] + 4));
  local_a0 = local_a8 == 0;
  local_9f = 0;
  FUN_140084bf8(param_1,&local_a8,&local_b8,local_48);
  local_28 = param_1;
  FUN_140078d3e(local_1c8);
  plVar1 = local_28;
  if (*local_28 != local_28[1]) {
    FUN_14003e690(local_1c8);
    return plVar1;
  }
  FUN_140084b8e(param_2,local_68);
  FUN_140018136(local_48,"File is empty: ",local_68);
  FUN_14000b166(local_80,local_48);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_80,&DAT_14017a4d8);
}

