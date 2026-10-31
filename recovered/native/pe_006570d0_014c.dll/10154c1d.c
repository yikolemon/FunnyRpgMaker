/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10154c1d */

undefined8 FUN_10154c1d(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char *pcVar1;
  int iVar2;
  float10 fVar3;
  double dVar4;
  undefined4 local_88;
  uint uStack_84;
  undefined8 local_80;
  char local_78 [64];
  undefined1 local_38 [32];
  uint local_18;
  
  local_18 = DAT_10388d00 ^ (uint)&stack0xfffffffc;
  pcVar1 = (char *)FUN_1013da7f(param_1);
  if ((*pcVar1 == '%') && (pcVar1[1] != '%')) {
    FUN_1013db45(pcVar1,local_38);
    FUN_100fa4b1(local_78,0x40,local_38,param_3,param_4);
    iVar2 = (int)&local_80 + 7;
    do {
      pcVar1 = (char *)(iVar2 + 1);
      iVar2 = iVar2 + 1;
    } while (*pcVar1 == ' ');
    fVar3 = (float10)FUN_1026cb5a(iVar2);
    local_80 = (double)fVar3;
    dVar4 = DAT_102b96e0;
    if (DAT_102b96e0 > local_80) {
      dVar4 = 0.0;
    }
    uStack_84 = (uint)((ulonglong)(longlong)ROUND(local_80 - dVar4) >> 0x20);
    param_4 = (uint)(DAT_102b96e0 <= local_80) << 0x1f ^ uStack_84;
    local_88 = (undefined4)(longlong)ROUND(local_80 - dVar4);
    param_3 = local_88;
  }
  if (DAT_10388d00 == (local_18 ^ (uint)&stack0xfffffffc)) {
    return CONCAT44(param_4,param_3);
  }
                    /* WARNING: Subroutine does not return */
  FUN_102283e0();
}

