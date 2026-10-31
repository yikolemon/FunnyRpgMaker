/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d264d */

undefined8 FUN_1400d264d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 auStack_a8 [31];
  undefined1 local_89;
  char local_88 [64];
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  pcVar1 = (char *)FUN_1400bac59();
  if ((*pcVar1 == '%') && (pcVar1[1] != '%')) {
    FUN_1400bad40(pcVar1,local_48);
    FUN_140077d91(local_88,0x40,local_48);
    puVar2 = &local_89;
    do {
      pcVar1 = puVar2 + 1;
      puVar2 = puVar2 + 1;
    } while (*pcVar1 == ' ');
    param_3 = FUN_1401a148c();
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_a8)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_a8);
}

