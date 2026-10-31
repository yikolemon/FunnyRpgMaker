/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 180024f12 */

void FUN_180024f12(ulonglong *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  param_2[4] = 0;
  uVar2 = *param_1;
  if ((longlong)uVar2 < 0) {
    if ((int)uVar2 <= (int)param_3) {
      return;
    }
    uVar2 = param_1[1];
    *(undefined8 *)(param_2 + 4) = *(undefined8 *)(uVar2 + 0x10 + (longlong)(int)param_3 * 0x18);
    puVar1 = (undefined4 *)(uVar2 + (longlong)(int)param_3 * 0x18);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
  }
  else {
    if (0xe < param_3) {
      return;
    }
    uVar2 = uVar2 >> ((char)param_3 * '\x04' & 0x3fU);
    param_2[4] = (uint)uVar2 & 0xf;
    if ((uVar2 & 0xf) == 0) {
      return;
    }
    puVar1 = (undefined4 *)(param_1[1] + (ulonglong)param_3 * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
  }
  *param_2 = uVar3;
  param_2[1] = uVar4;
  param_2[2] = uVar5;
  param_2[3] = uVar6;
  return;
}

