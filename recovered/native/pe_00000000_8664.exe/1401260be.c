/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401260be */

undefined8 FUN_1401260be(undefined8 param_1,longlong param_2)

{
  char cVar1;
  undefined8 uVar2;
  
  cVar1 = FUN_14011aa5d(param_2);
  if (cVar1 == '\0') {
    uVar2 = DAT_140e8e3e0;
    if (*(char *)(param_2 + 0x24) == '\0') {
      uVar2 = DAT_140e8e0e8;
    }
  }
  else {
    uVar2 = DAT_140e94bf0;
    if (*(char *)(param_2 + 0x24) == '\0') {
      uVar2 = DAT_140e94c00;
    }
  }
  return uVar2;
}

