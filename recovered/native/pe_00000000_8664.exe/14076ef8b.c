/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14076ef8b */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14076ef8b(longlong param_1)

{
  char *pcVar1;
  char cVar2;
  
  pcVar1 = (char *)(ulonglong)_DAT_2048888b1039d74c;
  *pcVar1 = *pcVar1 + (char)_DAT_2048888b1039d74c;
  if (((int)param_1 == 0) || ((*(byte *)(param_1 + 0xe) & 1) == 0)) {
    if (*(int *)(pcVar1 + 0x208c) == 3) {
      if ((pcVar1[0x30] & 2U) != 0) goto LAB_14076efc0;
      goto LAB_14076efb6;
    }
    if ((*(int *)(pcVar1 + 0x208c) == 2) && ((pcVar1[0x30] & 1U) == 0)) goto LAB_14076efb6;
LAB_14076efc0:
    cVar2 = '\x01';
    if (pcVar1[0x6a] != '\x01') goto LAB_14076efce;
  }
  else {
LAB_14076efb6:
    cVar2 = '\0';
  }
  pcVar1[0x2040] = cVar2;
LAB_14076efce:
  pcVar1[0x2041] = '\x01';
  pcVar1[0x2042] = '\x01';
  return;
}

