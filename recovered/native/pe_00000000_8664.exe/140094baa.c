/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140094baa */

void FUN_140094baa(char *param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = "window_context";
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
  }
  uVar2 = FUN_140080066(*(undefined8 *)(DAT_140f2a910 + 0x1608),pcVar3,0);
  cVar1 = FUN_140094a56(param_2);
  if (cVar1 != '\0') {
    FUN_140093fa1(uVar2,param_2);
  }
  FUN_14009460b(uVar2,0x141);
  return;
}

