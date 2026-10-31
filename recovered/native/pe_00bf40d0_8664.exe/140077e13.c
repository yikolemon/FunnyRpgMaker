/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 140077e13 */

ulonglong FUN_140077e13(ushort *param_1,uint param_2)

{
  ulonglong uVar1;
  
  uVar1 = 0xffffffff;
  if (*param_1 <= param_2) {
    uVar1 = (ulonglong)(param_1[1] < param_2);
  }
  return uVar1;
}

