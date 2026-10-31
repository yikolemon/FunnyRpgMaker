/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801fa94c */

undefined8 FUN_1801fa94c(undefined8 *param_1)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  
  lVar1 = *(longlong *)(param_1[1] + 0x300);
  if (lVar1 != 0) {
    lVar2 = FUN_1801caa22(*param_1,"pshinter");
    if (lVar2 != 0) {
      uVar3 = (**(code **)(lVar1 + 8))(lVar2);
      *(undefined8 *)(param_1[0x1e] + 0x28) = uVar3;
    }
  }
  return 0;
}

