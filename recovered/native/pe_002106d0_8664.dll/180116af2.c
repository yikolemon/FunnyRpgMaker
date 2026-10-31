/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180116af2 */

void FUN_180116af2(undefined8 *param_1)

{
  longlong lVar1;
  
  lVar1 = DAT_180419160;
  *(uint *)(DAT_180419160 + 0x2030) = *(uint *)(DAT_180419160 + 0x2030) | 4;
  *(ulonglong *)(lVar1 + 0x205c) =
       CONCAT44((float)(int)(float)((ulonglong)*param_1 >> 0x20),(float)(int)(float)*param_1);
  return;
}

