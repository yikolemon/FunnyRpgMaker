/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d831b */

undefined4 FUN_101d831b(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_101d8349();
  if (cVar1 != '\0') {
    uVar2 = FUN_101d8357(param_3,param_4);
    return uVar2;
  }
  return 0;
}

