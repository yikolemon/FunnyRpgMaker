/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1401c6430 */

void FUN_1401c6430(undefined8 param_1,longlong param_2)

{
  if ((*(uint *)(param_2 + 0x30) & 1) != 0) {
    *(uint *)(param_2 + 0x30) = *(uint *)(param_2 + 0x30) & 0xfffffffe;
    FUN_14018bde0(&PTR_vftable_140f17d10);
  }
  return;
}

