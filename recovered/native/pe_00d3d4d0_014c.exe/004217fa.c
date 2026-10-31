/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004217fa */

bool __cdecl FUN_004217fa(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = -param_1;
  if ((int)-param_1 < 0) {
    uVar7 = param_1;
  }
  uVar6 = -param_2;
  if ((int)-param_2 < 0) {
    uVar6 = param_2;
  }
  uVar2 = uVar6;
  if (uVar7 < uVar6) {
    uVar2 = uVar7;
  }
  if (uVar6 < uVar7) {
    uVar6 = uVar7;
  }
  uVar7 = -param_3;
  if ((int)-param_3 < 0) {
    uVar7 = param_3;
  }
  uVar3 = -param_4;
  if ((int)-param_4 < 0) {
    uVar3 = param_4;
  }
  uVar4 = uVar3;
  if (uVar7 < uVar3) {
    uVar4 = uVar7;
  }
  if (uVar3 < uVar7) {
    uVar3 = uVar7;
  }
  uVar7 = -(param_1 + param_3);
  if ((int)uVar7 < 0) {
    uVar7 = param_1 + param_3;
  }
  uVar5 = -(param_4 + param_2);
  if ((int)uVar5 < 0) {
    uVar5 = param_4 + param_2;
  }
  uVar1 = uVar5;
  if (uVar5 < uVar7) {
    uVar1 = uVar7;
  }
  if (uVar7 < uVar5) {
    uVar5 = uVar7;
  }
  uVar1 = (uVar5 * 3 >> 3) + uVar1;
  return (int)(((uVar4 * 3 >> 3) + uVar3 + (uVar2 * 3 >> 3) + uVar6) - uVar1) < (int)(uVar1 >> 4);
}

