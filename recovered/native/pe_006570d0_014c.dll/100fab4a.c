/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 100fab4a */

uint FUN_100fab4a(uint param_1,uint param_2)

{
  uint uVar1;
  char *pcVar2;
  
  do {
    if (param_2 <= param_1) {
      return param_1;
    }
    uVar1 = param_2 - 1;
    pcVar2 = (char *)(param_2 - 1);
    param_2 = uVar1;
  } while (*pcVar2 < -0x40);
  return uVar1;
}

