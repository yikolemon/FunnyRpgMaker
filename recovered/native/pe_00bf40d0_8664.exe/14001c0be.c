/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14001c0be */

void FUN_14001c0be(int *param_1,undefined8 param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)((longlong)param_4 + 2);
  if ((bVar1 & 4) == 0) {
    switchD_14001c007::default();
    return;
  }
  bVar2 = *(byte *)((longlong)param_4 + 1);
  *param_3 = *param_4;
  param_1[4] = 1;
  param_1[2] = param_1[2] | (uint)(bVar1 >> 7);
  FUN_14001bfb2(param_1,bVar2 & 3,(undefined8 *)(param_3 + 1),(byte *)(param_4 + 1),bVar1 & 3,
                bVar2 & 4);
  return;
}

