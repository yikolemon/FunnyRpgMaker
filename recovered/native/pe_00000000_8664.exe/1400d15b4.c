/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d15b4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_1400d15b4(undefined8 param_1,undefined8 param_2,ulonglong param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  double dVar3;
  undefined1 auStack_98 [31];
  undefined1 local_79;
  char local_78 [64];
  undefined1 local_38 [32];
  ulonglong local_18;
  
  local_18 = DAT_140f17b40 ^ (ulonglong)auStack_98;
  pcVar1 = (char *)FUN_1400bac59();
  if ((*pcVar1 == '%') && (pcVar1[1] != '%')) {
    FUN_1400bad40(pcVar1,local_38);
    FUN_140077d91(local_78,0x40,local_38,param_3);
    puVar2 = &local_79;
    do {
      pcVar1 = puVar2 + 1;
      puVar2 = puVar2 + 1;
    } while (*pcVar1 == ' ');
    dVar3 = (double)FUN_1401a148c();
    param_3 = (longlong)(dVar3 - _DAT_140211f40) & (longlong)dVar3 >> 0x3f | (longlong)dVar3;
  }
  if (DAT_140f17b40 == (local_18 ^ (ulonglong)auStack_98)) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_18 ^ (ulonglong)auStack_98);
}

