/* Ghidra pseudocode. Image: pe_00a0fad0_8664.exe Address: 140078576 */

void FUN_140078576(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  longlong *param_5)

{
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined1 local_90 [56];
  undefined1 local_58 [24];
  code *local_40;
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  local_40 = FUN_1400b9e18;
  if (*param_4 != '\0') {
    local_40 = FUN_1400b423a;
  }
  local_38 = 0;
  local_a8 = 0;
  uStack_a0 = 0;
  local_98 = 0;
  FUN_14005872a(&local_a8,param_5[1] - *param_5,param_5,param_5 + 1);
  FUN_14007441c(local_90,param_2,param_3,&local_40,&local_38,&local_a8);
  FUN_140079616(param_1 + 8,local_90);
  FUN_140016e5c(local_58);
  FUN_1400017de(local_90);
  return;
}

