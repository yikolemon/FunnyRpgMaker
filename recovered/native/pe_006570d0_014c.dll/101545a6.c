/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101545a6 */

longlong FUN_101545a6(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  float10 fVar4;
  undefined8 local_80;
  char local_78 [64];
  undefined1 local_38 [32];
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  pcVar2 = (char *)FUN_1013da7f(param_1);
  lVar1 = CONCAT44(param_4,param_3);
  if ((*pcVar2 == '%') && (lVar1 = CONCAT44(param_4,param_3), pcVar2[1] != '%')) {
    FUN_1013db45(pcVar2,local_38);
    FUN_100fa4b1(local_78,0x40,local_38,param_3,param_4);
    iVar3 = (int)&local_80 + 7;
    do {
      pcVar2 = (char *)(iVar3 + 1);
      iVar3 = iVar3 + 1;
    } while (*pcVar2 == ' ');
    fVar4 = (float10)FUN_1026cb5a(iVar3);
    local_80 = (longlong)ROUND((double)fVar4);
    lVar1 = local_80;
  }
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return lVar1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

