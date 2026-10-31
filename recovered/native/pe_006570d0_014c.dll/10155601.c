/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10155601 */

float10 FUN_10155601(char *param_1,undefined4 param_2,float param_3)

{
  char *pcVar1;
  float10 fVar2;
  char *local_84;
  undefined1 *local_80;
  undefined1 *local_7c;
  double local_78;
  float local_70;
  undefined4 local_6c;
  char local_68 [64];
  undefined1 local_28 [32];
  uint local_8;
  
  local_8 = DAT_10388d00 ^ (uint)&local_84;
  local_84 = param_1;
  pcVar1 = (char *)FUN_1013da7f();
  if ((*pcVar1 == '%') && (pcVar1[1] != '%')) {
    local_84 = pcVar1;
    local_80 = local_28;
    FUN_1013db45();
    local_78 = (double)param_3;
    local_84 = local_68;
    local_80 = (undefined1 *)0x40;
    local_7c = local_28;
    FUN_100fa4b1();
    local_84 = (char *)((int)&local_6c + 3);
    do {
      pcVar1 = local_84 + 1;
      local_84 = local_84 + 1;
    } while (*pcVar1 == ' ');
    fVar2 = (float10)FUN_1026cb5a();
    param_3 = (float)fVar2;
    local_6c = param_3;
  }
  if (DAT_10388d00 != (local_8 ^ (uint)&local_84)) {
    local_70 = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return (float10)param_3;
}

