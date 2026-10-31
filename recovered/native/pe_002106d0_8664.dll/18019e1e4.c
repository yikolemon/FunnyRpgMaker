/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18019e1e4 */

void switchD_18019dc7b::caseD_62
               (longlong param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)((longlong)param_4 + 2);
  if ((bVar1 & 4) == 0) {
    switchD_18019e2f8::caseD_4();
    return;
  }
  bVar2 = *(byte *)((longlong)param_4 + 1);
  *param_3 = *param_4;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | (uint)(bVar1 >> 7);
  FUN_18019e0d8(param_1,CONCAT31((int3)((uint)param_2 >> 8),bVar2) & 0xffffff03,param_3 + 1,
                param_4 + 1,bVar1 & 3,bVar2 & 4);
  return;
}

