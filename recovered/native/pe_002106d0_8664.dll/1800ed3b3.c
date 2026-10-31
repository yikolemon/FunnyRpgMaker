/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800ed3b3 */

void FUN_1800ed3b3(char *param_1,undefined8 ****param_2)

{
  undefined8 ****ppppuVar1;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  longlong local_78;
  longlong lStack_70;
  undefined8 local_68;
  longlong local_60;
  longlong lStack_58;
  undefined8 local_50;
  undefined8 ***local_48;
  longlong lStack_40;
  undefined8 local_38;
  ulonglong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  local_80 = 0xf;
  local_78 = 0;
  lStack_70 = 0;
  local_68 = 0;
  local_60 = 0;
  lStack_58 = 0;
  local_50 = 0;
  if (*param_1 == '\0') {
    FUN_180003216(&local_48,&local_98);
  }
  else {
    FUN_1800e56ee(param_1,&local_48,"original",&local_98);
  }
  if (param_2 != &local_48) {
    ppppuVar1 = &local_48;
    if (0xf < local_30) {
      ppppuVar1 = (undefined8 ****)local_48;
    }
    FUN_180017ca0(param_2,ppppuVar1,local_38);
  }
  FUN_180001ef2(&local_48);
  if (*param_1 == '\0') {
    local_48 = (undefined8 ****)0x0;
    lStack_40 = 0;
    local_38 = 0;
    FUN_1800b05fc(&local_48,lStack_70 - local_78 >> 5,&local_78);
  }
  else {
    FUN_1800ed642(param_1,&local_48,"original_sequence",&local_78);
  }
  if (param_2 + 4 != &local_48) {
    FUN_1800af8dc(param_2 + 4,local_48,lStack_40 - (longlong)local_48 >> 5);
  }
  FUN_180060538(&local_48);
  if (*param_1 == '\0') {
    local_48 = (undefined8 ****)0x0;
    lStack_40 = 0;
    local_38 = 0;
    FUN_1800b05fc(&local_48,lStack_58 - local_60 >> 5,&local_60);
  }
  else {
    FUN_1800ed642(param_1,&local_48,"translation_sequence",&local_60);
  }
  if (param_2 + 7 != &local_48) {
    FUN_1800af8dc(param_2 + 7,local_48,lStack_40 - (longlong)local_48 >> 5);
  }
  FUN_180060538(&local_48);
  return;
}

