/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801581f7 */

longlong FUN_1801581f7(undefined8 param_1,undefined8 param_2,longlong param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  double dVar3;
  undefined1 auStack_98 [31];
  undefined1 local_79;
  char local_78 [64];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_180402640 ^ (ulonglong)auStack_98;
  pcVar1 = (char *)FUN_180141d29();
  if ((*pcVar1 == '%') && (pcVar1[1] != '%')) {
    FUN_180141e10(pcVar1,local_38);
    FUN_1800fead5(local_78,0x40,local_38,param_3);
    puVar2 = &local_79;
    do {
      pcVar1 = puVar2 + 1;
      puVar2 = puVar2 + 1;
    } while (*pcVar1 == ' ');
    dVar3 = (double)FUN_1802831ac();
    param_3 = (longlong)dVar3;
  }
  if (DAT_180402640 == (local_18 ^ (ulonglong)auStack_98)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_1802396d0(local_18 ^ (ulonglong)auStack_98);
}

