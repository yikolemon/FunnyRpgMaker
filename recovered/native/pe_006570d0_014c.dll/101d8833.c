/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 101d8833 */

void FUN_101d8833(int param_1,undefined4 param_2)

{
  char cVar1;
  
  cVar1 = FUN_101d8349();
  if (cVar1 != '\0') {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x198) + 0x38) + 0x14))(param_2);
    return;
  }
  return;
}

