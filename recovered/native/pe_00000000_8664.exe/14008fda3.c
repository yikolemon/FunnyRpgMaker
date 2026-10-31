/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008fda3 */

void FUN_14008fda3(undefined8 *param_1,int param_2,undefined8 *param_3)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(uint *)(DAT_140f2a910 + 0x2030) = *(uint *)(DAT_140f2a910 + 0x2030) | 1;
  *(undefined8 *)(lVar1 + 0x2044) = *param_1;
  *(undefined8 *)(lVar1 + 0x204c) = *param_3;
  *(uint *)(lVar1 + 0x2034) = param_2 + (uint)(param_2 == 0);
  *(undefined1 *)(lVar1 + 0x2074) = 1;
  return;
}

