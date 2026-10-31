/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 0042ffa3 */

void __cdecl FUN_0042ffa3(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0042fab9(param_1);
  if ((char)uVar1 != '\0') {
    (**(code **)(*(int *)(*(int *)(param_1 + 0x198) + 0x38) + 0x14))(param_2);
    return;
  }
  return;
}

