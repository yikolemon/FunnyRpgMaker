/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007b71f */

ulonglong FUN_14007b71f(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = -(uint)((float)param_2 <= (float)param_1);
  return CONCAT44((uint)((ulonglong)param_1 >> 0x20) & (uint)((ulonglong)param_2 >> 0x20),
                  (uint)(float)param_1 & uVar1) | (ulonglong)(~uVar1 & (uint)(float)param_2);
}

