/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10116a7b */

void FUN_10116a7b(char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = "window_context";
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
  }
  uVar2 = FUN_101021d4(pcVar3,0);
  cVar1 = FUN_10116949(param_2);
  if (cVar1 != '\0') {
    FUN_10115eed(uVar2,param_2);
  }
  FUN_1011653c(uVar2,0x141);
  return;
}

