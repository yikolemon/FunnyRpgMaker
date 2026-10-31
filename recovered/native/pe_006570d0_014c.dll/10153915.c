/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10153915 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_10153915(undefined4 param_1,undefined4 param_2,uint param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  float10 fVar3;
  undefined1 local_75;
  char local_74 [64];
  undefined1 local_34 [32];
  uint local_14;
  
  local_14 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  pcVar1 = (char *)FUN_1013da7f(param_1);
  if ((*pcVar1 == '%') && (pcVar1[1] != '%')) {
    FUN_1013db45(pcVar1,local_34);
    FUN_100fa4b1(local_74,0x40,local_34,param_3);
    puVar2 = &local_75;
    do {
      pcVar1 = puVar2 + 1;
      puVar2 = puVar2 + 1;
    } while (*pcVar1 == ' ');
    fVar3 = (float10)FUN_1026cb5a(puVar2);
    param_3 = (int)((double)fVar3 - _DAT_102945c8) & (int)fVar3 >> 0x1f | (int)fVar3;
  }
  if (DAT_10388d00 == (local_14 ^ (uint)&stack0xfffffffc)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

