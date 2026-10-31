/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400b062e */

undefined4 FUN_1400b062e(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  lVar2 = DAT_140f2a910;
  if (param_2 == 0) {
    param_2 = param_1;
  }
  uVar4 = FUN_1400b0284();
  if (((char)uVar4 != '\0') && (pcVar1 = *(code **)(lVar2 + 0xc60), pcVar1 != (code *)0x0)) {
    (*pcVar1)(lVar2,param_2);
  }
  pcVar5 = *(char **)(DAT_140f2a910 + 0x2a18);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "*Missing Text*";
  }
  FUN_140093dc2(pcVar5,param_2);
  cVar3 = FUN_140094b37(0,0);
  if (cVar3 != '\0') {
    pcVar5 = "*Missing Text*";
    if (*(char **)(DAT_140f2a910 + 0x2a20) != (char *)0x0) {
      pcVar5 = *(char **)(DAT_140f2a910 + 0x2a20);
    }
    cVar3 = FUN_1400b06d6(pcVar5,0,0,1);
    if (cVar3 != '\0') {
      FUN_1400811e6(param_2);
    }
    FUN_1400946ab();
  }
  return uVar4;
}

