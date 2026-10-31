/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00481490 */

int FUN_00481490(void)

{
  BOOL BVar1;
  WORD local_8 [2];
  
  BVar1 = GetStringTypeW(1,(LPCWSTR)&stack0x00000004,1,local_8);
  if (BVar1 == 0) {
    return 0;
  }
  return (int)(short)local_8[0];
}

