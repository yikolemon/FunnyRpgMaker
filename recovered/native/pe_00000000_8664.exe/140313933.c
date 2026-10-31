/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140313933 */

ulonglong FUN_140313933(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = -(uint)((float)param_2 <= (float)param_1);
  return CONCAT44((uint)((ulonglong)param_1 >> 0x20) & (uint)((ulonglong)param_2 >> 0x20),
                  (uint)(float)param_1 & uVar1) | (ulonglong)(~uVar1 & (uint)(float)param_2);
}

