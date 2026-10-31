/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10235730 */

void FUN_10235730(undefined4 param_1,int *param_2,byte *param_3)

{
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int *local_3c;
  byte *local_38;
  
  local_54 = 0xe06d7363;
  local_50 = 1;
  local_4c = 0;
  local_48 = 0;
  local_44 = 3;
  local_40 = 0x19930520;
  local_3c = param_2;
  if ((param_3 != (byte *)0x0) && ((*param_3 & 0x10) != 0)) {
    param_3 = *(byte **)(*(int *)(*param_2 + -4) + 0x18);
  }
  if ((param_3 != (byte *)0x0) && (local_40 = 0x19930520, (*param_3 & 8) != 0)) {
    local_40 = 0x1994000;
  }
  local_38 = param_3;
  FUN_10235c90(param_1,&local_54);
  return;
}

