/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 1801185ab */

undefined8 *
FUN_1801185ab(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = DAT_180419160;
  lVar5 = FUN_1800fdb8a(DAT_180419160,param_5);
  fVar1 = *(float *)(lVar5 + 0xc);
  lVar5 = FUN_1800fdb8a(uVar4,param_4);
  fVar2 = *(float *)(lVar5 + 0xc);
  lVar5 = FUN_1800fdb8a(uVar4,param_3);
  fVar3 = *(float *)(lVar5 + 0xc);
  lVar5 = FUN_1800fdb8a(uVar4,param_2);
  *param_1 = CONCAT44(fVar1 - fVar2,fVar3 - *(float *)(lVar5 + 0xc));
  return param_1;
}

