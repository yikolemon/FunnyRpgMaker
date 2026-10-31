/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 1001ba16 */

bool FUN_1001ba16(byte param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  
  if (*(uint *)(param_2 + 4) == 0) {
    bVar3 = false;
  }
  else {
    uVar4 = 2;
    do {
      bVar1 = *(byte *)(*(int *)(param_2 + 8) + -2 + uVar4) <= param_1;
      bVar2 = param_1 <= *(byte *)(*(int *)(param_2 + 8) + -1 + uVar4);
      bVar3 = bVar2 && bVar1;
      if (*(uint *)(param_2 + 4) <= uVar4) {
        return bVar3;
      }
      uVar4 = uVar4 + 2;
    } while (!bVar2 || !bVar1);
  }
  return bVar3;
}

