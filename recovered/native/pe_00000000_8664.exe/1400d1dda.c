/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400d1dda */

undefined8 FUN_1400d1dda(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  double dVar1;
  char *pcVar2;
  undefined1 *puVar3;
  float fVar4;
  undefined4 uVar5;
  undefined1 auStack_a8 [31];
  undefined1 local_89;
  char local_88 [64];
  undefined1 local_48 [40];
  ulonglong local_20;
  
  uVar5 = (undefined4)((ulonglong)param_3 >> 0x20);
  fVar4 = (float)param_3;
  local_20 = DAT_140f17b40 ^ (ulonglong)auStack_a8;
  pcVar2 = (char *)FUN_1400bac59();
  if ((*pcVar2 == '%') && (pcVar2[1] != '%')) {
    FUN_1400bad40(pcVar2,local_48);
    FUN_140077d91(local_88,0x40,local_48,(double)fVar4);
    puVar3 = &local_89;
    do {
      pcVar2 = puVar3 + 1;
      puVar3 = puVar3 + 1;
    } while (*pcVar2 == ' ');
    dVar1 = (double)FUN_1401a148c();
    uVar5 = 0;
    fVar4 = (float)dVar1;
  }
  if (DAT_140f17b40 == (local_20 ^ (ulonglong)auStack_a8)) {
    return CONCAT44(uVar5,fVar4);
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_20 ^ (ulonglong)auStack_a8);
}

