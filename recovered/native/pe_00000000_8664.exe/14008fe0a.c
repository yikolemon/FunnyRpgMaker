/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14008fe0a */

void FUN_14008fe0a(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_140f2a910;
  *(uint *)(DAT_140f2a910 + 0x2030) = *(uint *)(DAT_140f2a910 + 0x2030) | 4;
  *(ulonglong *)(lVar1 + 0x205c) =
       CONCAT44((float)(int)(float)((ulonglong)*param_1 >> 0x20),(float)(int)(float)*param_1);
  return;
}

