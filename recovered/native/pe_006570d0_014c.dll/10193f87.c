/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10193f87 */

void FUN_10193f87(undefined4 param_1,float param_2,float param_3,float param_4,float param_5,
                 undefined4 param_6,undefined4 param_7)

{
  float local_24;
  float local_20;
  undefined8 local_1c;
  float local_14;
  float local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_24;
  local_14 = param_2;
  local_10 = param_3;
  switch(param_6) {
  case 0:
    local_24 = param_4 + param_2;
    local_1c = CONCAT44(param_5 + param_3,local_24);
    local_20 = param_3 - param_5;
    break;
  case 1:
    local_24 = param_2 - param_4;
    local_1c = CONCAT44(param_3 - param_5,local_24);
    local_20 = param_3 + param_5;
    break;
  case 2:
    local_20 = param_3 + param_5;
    local_1c = CONCAT44(local_20,param_2 - param_4);
    local_24 = param_2 + param_4;
    break;
  case 3:
    local_20 = param_3 - param_5;
    local_1c = CONCAT44(local_20,param_2 + param_4);
    local_24 = param_2 - param_4;
    break;
  default:
    goto switchD_10193fd0_default;
  }
  FUN_1018be36(&local_24,&local_1c,&local_14,param_7);
switchD_10193fd0_default:
  if (DAT_10388d00 != (local_c ^ (uint)&local_24)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return;
}

