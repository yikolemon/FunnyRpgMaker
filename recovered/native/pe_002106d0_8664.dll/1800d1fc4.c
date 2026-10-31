/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1800d1fc4 */

uint * FUN_1800d1fc4(undefined8 param_1,undefined8 param_2,int *param_3)

{
  uint uVar1;
  bool bVar2;
  int iVar3;
  uint *puVar4;
  uint *local_30;
  uint *local_28;
  
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  puVar4 = (uint *)FUN_1800d1da1();
  if (puVar4 == (uint *)0x0) {
    local_30 = (uint *)0x0;
  }
  else if ((*puVar4 < 0x40) || (puVar4[1] != 0x727444)) {
    SetLastError(0xbf);
    local_30 = (uint *)0x0;
  }
  else {
    local_28 = (uint *)((ulonglong)puVar4[2] + (longlong)puVar4);
    uVar1 = puVar4[3];
    do {
      if ((uint *)((ulonglong)uVar1 + (longlong)puVar4) <= local_28) {
        SetLastError(6);
        return (uint *)0x0;
      }
      iVar3 = FUN_1800fcc60(local_28 + 2,param_2);
      if (iVar3 == 0) {
        local_28 = (uint *)((ulonglong)*local_28 + (longlong)local_28);
        bVar2 = false;
      }
      else {
        if (param_3 != (int *)0x0) {
          *param_3 = *local_28 - 0x18;
        }
        SetLastError(0);
        local_30 = local_28 + 6;
        bVar2 = true;
      }
    } while (!bVar2);
  }
  return local_30;
}

