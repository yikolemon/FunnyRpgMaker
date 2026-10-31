/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1022c7e0 */

undefined8 FUN_1022c7e0(void)

{
  uint local_c;
  int local_8;
  
  GetSystemTimePreciseAsFileTime(&local_c);
  return CONCAT44((local_8 + -0x19db1de) - (uint)(local_c < 0xd53e8000),local_c + 0x2ac18000);
}

