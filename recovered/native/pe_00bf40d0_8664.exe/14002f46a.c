/* Ghidra pseudocode. Image: pe_00bf40d0_8664.exe Address: 14002f46a */

int FUN_14002f46a(undefined8 param_1,longlong *param_2,ushort *param_3,longlong param_4)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = FUN_1400311b1(param_2,param_3);
  if (iVar3 == 0) {
    uVar4 = *(uint *)(param_2 + 0x22f);
    if ((uVar4 & 1) == 0) {
      iVar3 = FUN_140032820(param_2,0);
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_140032855((longlong)param_2,param_4,0);
      uVar4 = *(uint *)(param_2 + 0x22f);
    }
    if ((uVar4 & 2) == 0) {
      iVar3 = FUN_140032820(param_2,1);
      if (iVar3 != 0) {
        return iVar3;
      }
      FUN_140032855((longlong)param_2,param_4,1);
    }
    uVar4 = 0;
    bVar2 = true;
    do {
      bVar1 = bVar2;
      if (bVar1) {
        if ((*(uint *)(param_2 + 0x22f) & 1) == 0) goto LAB_14002f4ff;
      }
      else {
        if ((*(uint *)(param_2 + 0x22f) & 2) != 0) break;
LAB_14002f4ff:
        FUN_1400329e8((longlong)param_2,uVar4);
        FUN_140032d88((longlong)param_2,uVar4);
        FUN_140032e63((longlong)param_2,uVar4);
        FUN_140033060((longlong)param_2,uVar4);
      }
      uVar4 = 1;
      bVar2 = false;
    } while (bVar1);
    FUN_140033214((longlong)param_2,(longlong)param_3);
    iVar3 = 0;
  }
  return iVar3;
}

