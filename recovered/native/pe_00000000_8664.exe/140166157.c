/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140166157 */

undefined4 FUN_140166157(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x24;
  if (((0 < *param_1) && (0 < param_1[3])) && (uVar2 = 0xa4, param_2 < 0x8000)) {
    iVar1 = FUN_14012b378(0x7d00000,param_2 << 0x10);
    if ((*param_1 <= iVar1) && (uVar2 = 0xa4, param_1[3] <= iVar1)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

