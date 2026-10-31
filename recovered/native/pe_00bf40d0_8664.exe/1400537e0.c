/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 1400537e0 */

void FUN_1400537e0(longlong *param_1)

{
  longlong lVar1;
  
  if (*(longlong *)param_1[7] != 0) {
    lVar1 = FUN_140055114(param_1);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(*(undefined8 *)param_1[7]);
    }
    *(undefined8 *)param_1[7] = 0;
  }
  return;
}

