/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801376fe */

undefined4 FUN_1801376fe(longlong param_1,longlong param_2)

{
  code *pcVar1;
  longlong lVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  lVar2 = DAT_180419160;
  if (param_2 == 0) {
    param_2 = param_1;
  }
  uVar4 = FUN_180137354();
  if (((char)uVar4 != '\0') && (pcVar1 = *(code **)(lVar2 + 0xc60), pcVar1 != (code *)0x0)) {
    (*pcVar1)(lVar2,param_2);
  }
  pcVar5 = *(char **)(DAT_180419160 + 0x2a18);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "*Missing Text*";
  }
  FUN_18011ab06(pcVar5,param_2);
  cVar3 = FUN_18011b87b(0,0);
  if (cVar3 != '\0') {
    pcVar5 = "*Missing Text*";
    if (*(char **)(DAT_180419160 + 0x2a20) != (char *)0x0) {
      pcVar5 = *(char **)(DAT_180419160 + 0x2a20);
    }
    cVar3 = FUN_1801377a6(pcVar5,0,0,1);
    if (cVar3 != '\0') {
      FUN_180107ece(param_2);
    }
    FUN_18011b3ef();
  }
  return uVar4;
}

