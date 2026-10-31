/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18022a7d3 */

ulonglong FUN_18022a7d3(ushort *param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0xffffffff;
  if (*param_1 <= param_2) {
    uVar1 = (ulonglong)(param_1[1] < param_2);
  }
  return uVar1;
}

