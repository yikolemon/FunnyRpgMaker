/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1013db7c */

uint FUN_1013db7c(undefined4 param_1,uint param_2)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  uint local_10;
  uint local_c;
  
  local_c = DAT_10388d00 ^ (uint)&local_10;
  pcVar1 = (char *)FUN_1013da7f(param_1);
  uVar2 = param_2;
  if (*pcVar1 == '%') {
    do {
      pcVar1 = pcVar1 + 1;
    } while ((byte)(*pcVar1 - 0x30U) < 10);
    local_10 = 0x7fffffff;
    cVar3 = *pcVar1;
    if (cVar3 == '.') {
      pcVar1 = (char *)FUN_1013dc38();
      if (99 < local_10) {
        local_10 = param_2;
      }
      cVar3 = *pcVar1;
    }
    uVar2 = 0xffffffff;
    if ((cVar3 != 'E') && (cVar3 != 'e')) {
      if (cVar3 == 'g') {
        if (local_10 != 0x7fffffff) {
          uVar2 = local_10;
        }
      }
      else if (((cVar3 != 'G') || (local_10 != 0x7fffffff)) &&
              (uVar2 = local_10, local_10 == 0x7fffffff)) {
        uVar2 = param_2;
      }
    }
  }
  if (DAT_10388d00 != (local_c ^ (uint)&local_10)) {
                    /* WARNING: Subroutine does not return */
    FUN_102283e0();
  }
  return uVar2;
}

