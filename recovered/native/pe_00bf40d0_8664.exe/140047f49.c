/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140047f49 */

void FUN_140047f49(longlong *param_1)

{
  longlong lVar1;
  
  if (*(longlong *)param_1[7] != 0) {
    lVar1 = FUN_14004a25c(param_1);
    if (lVar1 != 0) {
      (**(code **)(lVar1 + 0x10))(*(undefined8 *)param_1[7]);
    }
    *(undefined8 *)param_1[7] = 0;
  }
  return;
}

