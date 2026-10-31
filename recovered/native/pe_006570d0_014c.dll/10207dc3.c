/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 10207dc3 */

undefined4 __fastcall FUN_10207dc3(int *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0x24;
  if (((0 < *param_1) && (0 < param_1[3])) && (uVar2 = 0xa4, param_2 < 0x8000)) {
    iVar1 = FUN_101c2523(0x7d00000,param_2 << 0x10);
    if ((*param_1 <= iVar1) && (uVar2 = 0xa4, param_1[3] <= iVar1)) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

