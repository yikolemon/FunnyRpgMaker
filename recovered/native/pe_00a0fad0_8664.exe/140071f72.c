/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140071f72 */

void FUN_140071f72(undefined1 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  longlong local_40;
  undefined1 local_38;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_140063f00(param_1 + 8,*param_1);
  *param_1 = 8;
  local_58 = 0;
  uStack_50 = 0;
  local_48 = 0;
  FUN_14005872a(&local_58,param_2[1] - *param_2,param_2,param_2 + 1);
  local_38 = (undefined1)param_2[4];
  local_40 = param_2[3];
  uVar1 = FUN_14007203c(&local_58);
  *(undefined8 *)(param_1 + 8) = uVar1;
  FUN_140016e5c(&local_58);
  return;
}

