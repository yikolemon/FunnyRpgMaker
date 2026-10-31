/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140130c56 */

void FUN_140130c56(longlong param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)((longlong)param_4 + 2);
  if ((bVar1 & 4) == 0) {
    switchD_140130d6a::caseD_4();
    return;
  }
  bVar2 = *(byte *)((longlong)param_4 + 1);
  *param_3 = *param_4;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | (uint)(bVar1 >> 7);
  FUN_140130b4a(param_1,CONCAT31((int3)((uint)param_2 >> 8),bVar2) & 0xffffff03,param_3 + 1,
                param_4 + 1,bVar1 & 3,bVar2 & 4);
  return;
}

