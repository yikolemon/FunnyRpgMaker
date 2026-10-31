/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14007bd52 */

void FUN_14007bd52(float *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1401c86c8 + *param_1 < param_1[2]) {
    lVar1 = *(longlong *)(DAT_140f2a910 + 0x1608);
    uVar2 = FUN_14004863e(*param_1 + *(float *)(DAT_140f2a910 + 0xe90));
    FUN_1400e743c(*(undefined8 *)(lVar1 + 800),param_1,param_2,*param_1,uVar2,param_3);
  }
  return;
}

