/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180102a96 */

void FUN_180102a96(float *param_1,undefined4 param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined4 uVar2;
  
  if (DAT_1802ac570 + *param_1 < param_1[2]) {
    lVar1 = *(longlong *)(DAT_180419160 + 0x1608);
    uVar2 = FUN_1800eebe2(*param_1 + *(float *)(DAT_180419160 + 0xe90));
    FUN_18019bec8(*(undefined8 *)(lVar1 + 800),param_1,param_2,*param_1,uVar2,param_3);
  }
  return;
}

