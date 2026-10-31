/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14031df11 */

void FUN_14031df11(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_14062a630;
  *(uint *)(DAT_14062a630 + 0x2030) = *(uint *)(DAT_14062a630 + 0x2030) | 2;
  *(undefined8 *)(lVar1 + 0x2054) = *param_1;
  *(uint *)(lVar1 + 0x2038) = param_2 + (uint)(param_2 == 0);
  return;
}

