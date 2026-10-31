/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10111df6 */

void FUN_10111df6(undefined8 *param_1)

{
  int iVar1;
  
  iVar1 = DAT_1039d74c;
  *(uint *)(DAT_1039d74c + 0x1ed0) = *(uint *)(DAT_1039d74c + 0x1ed0) | 4;
  *(ulonglong *)(iVar1 + 0x1efc) =
       CONCAT44((float)(int)(float)((ulonglong)*param_1 >> 0x20),(float)(int)(float)*param_1);
  return;
}

