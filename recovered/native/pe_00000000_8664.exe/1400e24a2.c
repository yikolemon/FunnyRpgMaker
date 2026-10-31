/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400e24a2 */

void FUN_1400e24a2(longlong param_1,undefined8 param_2)

{
  float fVar1;
  
  if (*(longlong *)(param_1 + 0x2d8) != 0) {
    fVar1 = (float)FUN_1400e24ea();
    if (fVar1 < DAT_140e8c740) {
      FUN_1400e2632(param_1,param_2);
      return;
    }
  }
  FUN_1400e251c(param_1,param_2);
  return;
}

