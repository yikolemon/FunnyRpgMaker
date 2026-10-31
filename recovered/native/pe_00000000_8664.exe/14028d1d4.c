/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14028d1d4 */

undefined8 * FUN_14028d1d4(undefined8 *param_1,uint param_2)

{
  FUN_140285d4c();
  *param_1 = &DAT_1404ca648;
  param_1[0xd] = 0;
  *(uint *)(param_1 + 0xe) =
       (param_2 & 8) + (param_2 & 4) * 4 |
       (uint)((byte)((~(byte)param_2 & 2) << 5 | ~(byte)param_2 << 7) >> 5);
  return param_1;
}

