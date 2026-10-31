/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10180b3f */

void FUN_10180b3f(undefined1 *param_1,undefined1 param_2)

{
  char cVar1;
  undefined1 *puVar2;
  
  puVar2 = &LAB_10181104;
  if (param_1 != (undefined1 *)0x0) {
    puVar2 = param_1;
  }
  FUN_10180671(1,param_2);
  cVar1 = FUN_101811a4(2,puVar2);
  if (cVar1 == '\0') {
    FUN_101811a4(1,puVar2);
  }
  return;
}

