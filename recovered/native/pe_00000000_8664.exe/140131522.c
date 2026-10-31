/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 140131522 */

undefined8 FUN_140131522(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_140133269(param_2,param_3);
  if ((int)uVar4 == 0) {
    uVar3 = *(uint *)(param_2 + 0x1178);
    if ((uVar3 & 1) == 0) {
      uVar4 = FUN_1401348d8(param_2,0);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      FUN_14013490d(param_2,param_4,0);
      uVar3 = *(uint *)(param_2 + 0x1178);
    }
    if ((uVar3 & 2) == 0) {
      uVar4 = FUN_1401348d8(param_2,1);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      FUN_14013490d(param_2,param_4,1);
    }
    uVar4 = 0;
    bVar2 = true;
    do {
      bVar1 = bVar2;
      if (bVar1) {
        if ((*(uint *)(param_2 + 0x1178) & 1) == 0) goto LAB_1401315b7;
      }
      else {
        if ((*(uint *)(param_2 + 0x1178) & 2) != 0) break;
LAB_1401315b7:
        FUN_140134aa0(param_2,uVar4);
        FUN_140134e40(param_2,uVar4);
        FUN_140134f1b(param_2,uVar4);
        FUN_140135118(param_2,uVar4);
      }
      uVar4 = 1;
      bVar2 = false;
    } while (bVar1);
    FUN_1401352cc(param_2,param_3);
    uVar4 = 0;
  }
  return uVar4;
}

