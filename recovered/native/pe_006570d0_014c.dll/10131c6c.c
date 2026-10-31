/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10131c6c */

undefined4 FUN_10131c6c(int param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  iVar2 = DAT_1039d74c;
  if (param_2 == 0) {
    param_2 = param_1;
  }
  uVar4 = FUN_1013186a(param_1);
  if (((char)uVar4 != '\0') && (pcVar1 = *(code **)(iVar2 + 0xc0c), pcVar1 != (code *)0x0)) {
    (*pcVar1)(iVar2,param_2);
  }
  pcVar5 = *(char **)(DAT_1039d74c + 0x2734);
  if (pcVar5 == (char *)0x0) {
    pcVar5 = "*Missing Text*";
  }
  FUN_10115d65(pcVar5,param_2);
  cVar3 = FUN_10116a0f(0,0);
  if (cVar3 != '\0') {
    pcVar5 = "*Missing Text*";
    if (*(char **)(DAT_1039d74c + 0x2738) != (char *)0x0) {
      pcVar5 = *(char **)(DAT_1039d74c + 0x2738);
    }
    cVar3 = FUN_10131d08(pcVar5,0,0,1);
    if (cVar3 != '\0') {
      FUN_101032f2(param_2);
    }
    FUN_101165cb();
  }
  return uVar4;
}

