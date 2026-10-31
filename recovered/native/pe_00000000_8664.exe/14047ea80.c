/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14047ea80 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14047ea80(longlong *param_1,byte *param_2)

{
  undefined8 uVar1;
  longlong local_38;
  undefined8 local_30;
  longlong *local_28;
  byte *local_20;
  longlong local_18;
  
  uVar1 = 0x19930520;
  if ((param_2 != (byte *)0x0) && ((*param_2 & 0x10) != 0)) {
    param_2 = *(byte **)(*(longlong *)(*param_1 + -8) + 0x30);
    (*DAT_14059d150)();
  }
  local_38 = 0;
  if (param_2 != (byte *)0x0) {
    local_38 = (*(code *)s_InitializeSListHead_14059e16c._4_8_)(param_2,&local_38);
    if (((*param_2 & 8) != 0) || (local_38 == 0)) {
      uVar1 = 0x1994000;
    }
  }
  local_30 = uVar1;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = local_38;
  (*ram0x00014059e130)(0xe06d7363,1,4,&local_30);
  return;
}

