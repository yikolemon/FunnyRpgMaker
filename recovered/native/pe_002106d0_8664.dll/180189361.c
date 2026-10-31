/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180189361 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

longlong FUN_180189361(longlong param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  float fVar4;
  float local_a0 [2];
  undefined1 local_98 [16];
  undefined1 local_88 [40];
  undefined1 local_60 [8];
  char local_58;
  longlong local_50;
  longlong local_48 [2];
  
  local_48[1] = 0xfffffffffffffffe;
  if (param_1 == 0) {
    lVar3 = 0;
  }
  else {
    local_50 = param_1;
    FUN_18005bbb8(local_a0);
    fVar4 = (float)FUN_180283cd0((float)*(ulonglong *)(param_2 + 0x10) / local_a0[0]);
    FUN_18018a3cc(local_a0,(longlong)(fVar4 - _DAT_1802b0d70) & (longlong)fVar4 >> 0x3f |
                           (longlong)fVar4);
    while (*(longlong *)(param_1 + 0x408) != 0) {
      local_48[0] = *(longlong *)(param_1 + 0x408);
      uVar1 = FUN_1800dbb7b(local_48);
      lVar2 = (uVar1 & *(ulonglong *)(param_2 + 0x30)) * 0x10;
      lVar3 = *(longlong *)(*(longlong *)(param_2 + 0x18) + 8 + lVar2);
      if (lVar3 == *(longlong *)(param_2 + 8)) break;
      if (local_48[0] != *(longlong *)(lVar3 + 0x10)) {
        do {
          if (lVar3 == *(longlong *)(*(longlong *)(param_2 + 0x18) + lVar2))
          goto code_r0x00018018947e;
          lVar3 = *(longlong *)(lVar3 + 8);
        } while (local_48[0] != *(longlong *)(lVar3 + 0x10));
      }
      FUN_18018aa20(local_a0,local_60,&local_50);
      if (local_58 == '\0') break;
      local_50 = local_48[0];
      param_1 = local_48[0];
    }
code_r0x00018018947e:
    lVar3 = local_50;
    FUN_180004cea(local_88);
    FUN_18006a5ac(local_98);
  }
  return lVar3;
}

