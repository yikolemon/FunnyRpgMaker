/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1802475b0 */

void FUN_1802475b0(undefined8 param_1,longlong *param_2,byte *param_3)

{
  PVOID local_res10 [3];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined8 local_a0;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  longlong *local_80;
  byte *local_78;
  PVOID local_70;
  
  local_a8 = 0xe06d7363;
  local_a4 = 1;
  local_a0 = 0;
  local_98 = 0;
  local_90 = 4;
  local_88 = 0x19930520;
  if ((param_3 != (byte *)0x0) && ((*param_3 & 0x10) != 0)) {
    param_3 = *(byte **)(*(longlong *)(*param_2 + -8) + 0x30);
  }
  local_80 = param_2;
  local_78 = param_3;
  if (param_3 == (byte *)0x0) {
    local_70 = (PVOID)0x0;
  }
  else {
    local_res10[0] = RtlPcToFileHeader(param_3,local_res10);
    local_70 = local_res10[0];
    if (((*param_3 & 8) != 0) || (local_res10[0] == (PVOID)0x0)) {
      local_88 = 0x1994000;
    }
  }
  FUN_180247b90(param_1,&local_a8);
  return;
}

