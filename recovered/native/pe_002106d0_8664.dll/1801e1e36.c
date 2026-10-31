/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801e1e36 */

undefined8 FUN_1801e1e36(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_1801e3b7d(param_2,param_3);
  if ((int)uVar4 == 0) {
    uVar3 = *(uint *)(param_2 + 0x1178);
    if ((uVar3 & 1) == 0) {
      uVar4 = FUN_1801e51ec(param_2,0);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      FUN_1801e5221(param_2,param_4,0);
      uVar3 = *(uint *)(param_2 + 0x1178);
    }
    if ((uVar3 & 2) == 0) {
      uVar4 = FUN_1801e51ec(param_2,1);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      FUN_1801e5221(param_2,param_4,1);
    }
    uVar4 = 0;
    bVar2 = true;
    do {
      bVar1 = bVar2;
      if (bVar1) {
        if ((*(uint *)(param_2 + 0x1178) & 1) == 0) goto LAB_1801e1ecb;
      }
      else {
        if ((*(uint *)(param_2 + 0x1178) & 2) != 0) break;
LAB_1801e1ecb:
        FUN_1801e53b4(param_2,uVar4);
        FUN_1801e5754(param_2,uVar4);
        FUN_1801e582f(param_2,uVar4);
        FUN_1801e5a2c(param_2,uVar4);
      }
      uVar4 = 1;
      bVar2 = false;
    } while (bVar1);
    FUN_1801e5be0(param_2,param_3);
    uVar4 = 0;
  }
  return uVar4;
}

