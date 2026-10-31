/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00421259 */

int __fastcall FUN_00421259(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = -param_1;
  if ((int)-param_1 < 0) {
    uVar1 = param_1;
  }
  iVar3 = (int)((ulonglong)uVar1 * 0xdbd95b16 >> 0x20) +
          (uint)(0xbfffffff < (uint)((ulonglong)uVar1 * 0xdbd95b16));
  iVar2 = -iVar3;
  if (-1 < (int)param_1) {
    iVar2 = iVar3;
  }
  return iVar2;
}

