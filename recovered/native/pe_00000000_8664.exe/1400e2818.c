/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e2818 */

undefined8
FUN_1400e2818(undefined8 param_1,char *param_2,undefined4 param_3,longlong param_4,
             undefined8 param_5)

{
  char *pcVar1;
  longlong lVar2;
  size_t sVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_118 [32];
  char *local_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  char local_e0 [160];
  ulonglong local_40;
  
  local_40 = DAT_140f17b40 ^ (ulonglong)auStack_118;
  local_e8 = 0;
  lVar2 = FUN_1400782ee(param_2,&DAT_140ecc128,&local_e8,0);
  if (lVar2 == 0) {
    if ((param_4 == 0) || ((*(byte *)(param_4 + 0x78) & 2) == 0)) {
      FUN_1400772a6("While loading \'%s\'\n",param_2);
      FUN_14007a954("Could not load font file!");
    }
    uVar5 = 0;
  }
  else {
    if (param_4 == 0) {
      FUN_1400e0f8a(local_e0);
    }
    else {
      FUN_1401c5180(local_e0,param_4,0xa0);
    }
    if (local_e0[0] == '\0') {
      sVar3 = strlen(param_2);
      pcVar4 = param_2 + sVar3;
      do {
        if ((pcVar4 <= param_2) || (pcVar1 = pcVar4 + -1, *pcVar1 == '\\')) break;
        pcVar4 = pcVar4 + -1;
      } while (*pcVar1 != '/');
      FUN_140077d91(local_e0,0x28,"%s");
    }
    local_f0 = param_5;
    local_f8 = local_e0;
    uVar5 = FUN_1400e2964(param_1,lVar2,local_e8 & 0xffffffff,param_3);
  }
  if (DAT_140f17b40 == (local_40 ^ (ulonglong)auStack_118)) {
    return uVar5;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140188a00(local_40 ^ (ulonglong)auStack_118);
}

