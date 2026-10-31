/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 1400918c3 */

undefined8 *
FUN_1400918c3(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
             undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  uVar4 = DAT_140f2a910;
  lVar5 = FUN_140076e46(DAT_140f2a910,param_5);
  fVar1 = *(float *)(lVar5 + 0xc);
  lVar5 = FUN_140076e46(uVar4,param_4);
  fVar2 = *(float *)(lVar5 + 0xc);
  lVar5 = FUN_140076e46(uVar4,param_3);
  fVar3 = *(float *)(lVar5 + 0xc);
  lVar5 = FUN_140076e46(uVar4,param_2);
  *param_1 = CONCAT44(fVar1 - fVar2,fVar3 - *(float *)(lVar5 + 0xc));
  return param_1;
}

