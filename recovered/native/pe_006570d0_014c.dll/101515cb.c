/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101515cb */

undefined4 FUN_101515cb(undefined4 param_1,int param_2)

{
  byte bVar1;
  
  bVar1 = 1;
  if (*(char *)(param_2 + 0x104) == '\0') {
    bVar1 = (*(byte *)(param_2 + 0xe) & 4) >> 2;
  }
  FUN_10150b5b(param_1,*(undefined4 *)(param_2 + 4),bVar1);
  return param_1;
}

