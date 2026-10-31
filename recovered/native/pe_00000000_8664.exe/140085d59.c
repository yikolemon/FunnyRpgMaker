/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140085d59 */

void FUN_140085d59(undefined8 *param_1,int param_2)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(uint *)(DAT_140f2a910 + 0x2030) = *(uint *)(DAT_140f2a910 + 0x2030) | 2;
  *(undefined8 *)(lVar1 + 0x2054) = *param_1;
  *(uint *)(lVar1 + 0x2038) = param_2 + (uint)(param_2 == 0);
  return;
}

