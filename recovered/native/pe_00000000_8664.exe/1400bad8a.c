/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400bad8a */

uint FUN_1400bad8a(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  uint uVar4;
  undefined1 auStack_48 [44];
  uint local_1c;
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_48;
  pcVar1 = (char *)FUN_1400bac59();
  uVar4 = param_2;
  if (*pcVar1 != '%') goto LAB_1400bae1c;
  pcVar1 = pcVar1 + 1;
  do {
    pcVar2 = pcVar1;
    pcVar1 = pcVar2 + 1;
  } while ((byte)(*pcVar2 - 0x30U) < 10);
  local_1c = 0x7fffffff;
  cVar3 = *pcVar2;
  if (cVar3 == '.') {
    pcVar1 = (char *)FUN_1400bae52(pcVar2 + 1,&local_1c);
    if (99 < local_1c) {
      local_1c = param_2;
    }
    cVar3 = *pcVar1;
  }
  if ((cVar3 != 'E') && (cVar3 != 'e')) {
    if (cVar3 == 'g') {
      uVar4 = local_1c;
      if (local_1c != 0x7fffffff) goto LAB_1400bae1c;
    }
    else if ((cVar3 != 'G') || (local_1c != 0x7fffffff)) {
      uVar4 = local_1c;
      if (local_1c == 0x7fffffff) {
        uVar4 = param_2;
      }
      goto LAB_1400bae1c;
    }
  }
  uVar4 = 0xffffffff;
LAB_1400bae1c:
  if (DAT_140f17b40 != (local_18 ^ (ulonglong)auStack_48)) {
                    /* WARNING: Subroutine does not return */
    FUN_140188a00(local_18 ^ (ulonglong)auStack_48);
  }
  return uVar4;
}

