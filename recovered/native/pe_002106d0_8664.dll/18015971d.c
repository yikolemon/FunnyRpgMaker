/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18015971d */

undefined8 FUN_18015971d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 auStack_a8 [31];
  undefined1 local_89;
  char local_88 [64];
  undefined1 local_48 [40];
  ulonglong local_20;
  
  local_20 = DAT_180402640 ^ (ulonglong)auStack_a8;
  pcVar1 = (char *)FUN_180141d29();
  if ((*pcVar1 == '%') && (pcVar1[1] != '%')) {
    FUN_180141e10(pcVar1,local_48);
    FUN_1800fead5(local_88,0x40,local_48);
    puVar2 = &local_89;
    do {
      pcVar1 = puVar2 + 1;
      puVar2 = puVar2 + 1;
    } while (*pcVar1 == ' ');
    param_3 = FUN_1802831ac();
  }
  if (DAT_180402640 == (local_20 ^ (ulonglong)auStack_a8)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_20 ^ (ulonglong)auStack_a8);
}

