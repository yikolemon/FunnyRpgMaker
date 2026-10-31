/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10233620 */

int FUN_10233620(void)

{
  BOOL BVar1;
  WORD local_8 [2];
  
  BVar1 = GetStringTypeW(1,(LPCWSTR)&stack0x00000004,1,local_8);
  if (BVar1 == 0) {
    return 0;
  }
  return (int)(short)local_8[0];
}

