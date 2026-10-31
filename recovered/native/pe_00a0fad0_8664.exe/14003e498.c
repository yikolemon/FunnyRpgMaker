/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 14003e498 */

undefined8 FUN_14003e498(longlong *param_1,undefined8 param_2,undefined8 param_3)

{
  longlong local_198 [2];
  int aiStack_188 [64];
  undefined1 local_88 [64];
  undefined1 local_48 [32];
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_14003e638(local_198,param_3,1,0x40,1);
  if (*(int *)((longlong)aiStack_188 + (longlong)*(int *)(local_198[0] + 4)) == 0) {
    (**(code **)(*param_1 + 8))(param_1,param_2,local_198);
    FUN_14003e690(local_198);
    return param_2;
  }
  FUN_140006874(local_48,param_3);
  FUN_14003e5a6(local_88,local_48);
                    /* WARNING: Subroutine does not return */
  FUN_140106270(local_88,&DAT_14017a7c8);
}

