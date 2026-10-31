/* Ghidra pseudocode. Image: pe_006570d0_014c.dll Address: 102337b0 */

undefined4 * __thiscall FUN_102337b0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined1 local_34 [44];
  undefined4 *local_8;
  
  param_1[1] = param_3;
  *param_1 = std::codecvt<wchar_t,char,_Mbstatet>::vftable;
  local_8 = param_1;
  puVar10 = (undefined4 *)FUN_1022bf80(local_34);
  uVar3 = puVar10[1];
  uVar4 = puVar10[2];
  uVar5 = puVar10[3];
  uVar6 = puVar10[4];
  uVar7 = puVar10[5];
  uVar8 = puVar10[6];
  uVar9 = puVar10[7];
  uVar1 = *(undefined8 *)(puVar10 + 8);
  uVar2 = puVar10[10];
  param_1[2] = *puVar10;
  param_1[3] = uVar3;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = uVar7;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  *(undefined8 *)(param_1 + 10) = uVar1;
  param_1[0xc] = uVar2;
  return param_1;
}

