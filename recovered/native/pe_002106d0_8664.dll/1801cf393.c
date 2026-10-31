/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801cf393 */

int FUN_1801cf393(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = -param_1;
  if ((int)-param_1 < 0) {
    uVar1 = param_1;
  }
  iVar3 = (int)((ulonglong)uVar1 * 0xdbd95b16 + 0x40000000 >> 0x20);
  iVar2 = -iVar3;
  if (-1 < (int)param_1) {
    iVar2 = iVar3;
  }
  return iVar2;
}

