/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18011b8ee */

void FUN_18011b8ee(char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = "window_context";
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
  }
  uVar2 = FUN_180106d4e(*(undefined8 *)(DAT_180419160 + 0x1608),pcVar3,0);
  cVar1 = FUN_18011b79a(param_2);
  if (cVar1 != '\0') {
    FUN_18011ace5(uVar2,param_2);
  }
  FUN_18011b34f(uVar2,0x141);
  return;
}

