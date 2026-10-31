/* Ghidra pseudocode. Image: pe_00000000_8664.exe Address: 14012e8f5 */

bool FUN_14012e8f5(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = -param_1;
  if ((int)-param_1 < 0) {
    uVar5 = param_1;
  }
  uVar7 = -param_2;
  if ((int)-param_2 < 0) {
    uVar7 = param_2;
  }
  uVar1 = uVar7;
  if (uVar5 < uVar7) {
    uVar1 = uVar5;
  }
  if (uVar7 < uVar5) {
    uVar7 = uVar5;
  }
  uVar5 = -param_3;
  if ((int)-param_3 < 0) {
    uVar5 = param_3;
  }
  uVar4 = -param_4;
  if ((int)-param_4 < 0) {
    uVar4 = param_4;
  }
  uVar2 = uVar4;
  if (uVar5 < uVar4) {
    uVar2 = uVar5;
  }
  if (uVar4 < uVar5) {
    uVar4 = uVar5;
  }
  uVar5 = -(param_3 + param_1);
  if ((int)uVar5 < 0) {
    uVar5 = param_3 + param_1;
  }
  uVar6 = -(param_4 + param_2);
  if ((int)uVar6 < 0) {
    uVar6 = param_4 + param_2;
  }
  uVar3 = uVar6;
  if (uVar6 < uVar5) {
    uVar3 = uVar5;
  }
  if (uVar5 < uVar6) {
    uVar6 = uVar5;
  }
  uVar3 = (uVar6 * 3 >> 3) + uVar3;
  return (int)(((uVar2 * 3 >> 3) + uVar4 + (uVar1 * 3 >> 3) + uVar7) - uVar3) < (int)(uVar3 >> 4);
}

