/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10155ef7 */

float10 FUN_10155ef7(undefined4 param_1,undefined4 param_2,double param_3)

{
  char *pcVar1;
  int iVar2;
  float10 fVar3;
  undefined8 local_78;
  char local_70 [64];
  undefined1 local_30 [32];
  uint local_10;
  
  local_10 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  pcVar1 = (char *)FUN_1013da7f(param_1);
  if ((*pcVar1 == '%') && (pcVar1[1] != '%')) {
    FUN_1013db45(pcVar1,local_30);
    FUN_100fa4b1(local_70,0x40,local_30,param_3);
    iVar2 = (int)&local_78 + 7;
    do {
      pcVar1 = (char *)(iVar2 + 1);
      iVar2 = iVar2 + 1;
    } while (*pcVar1 == ' ');
    fVar3 = (float10)FUN_1026cb5a(iVar2);
    param_3 = (double)fVar3;
    local_78 = param_3;
  }
  if (DAT_10388d00 != (local_10 ^ (uint)&stack0xfffffffc)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return (float10)param_3;
}

