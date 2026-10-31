/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1027a5b0 */

void * __fastcall FUN_1027a5b0(undefined4 *param_1)

{
  void *pvVar1;
  void *local_8;
  
  pvVar1 = (void *)param_1[2];
  if ((pvVar1 == (void *)0x0) || (param_1[4] == 0)) {
    pvVar1 = (void *)0x0;
  }
  else {
    local_8 = (void *)0x0;
    if (*(char *)(param_1 + 5) == '\0') {
      FUN_1027a4dc(&local_8,param_1[4] * 2,param_1);
      pvVar1 = local_8;
      _memcpy_s(local_8,param_1[4],(void *)param_1[2],param_1[3]);
    }
    param_1[4] = 0;
    param_1[2] = *param_1;
    param_1[3] = param_1[1];
  }
  return pvVar1;
}

