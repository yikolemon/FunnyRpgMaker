/* Ghidra pseudocode. Image: pe_002106d0_8664.dll Address: 18021eacb */

void FUN_18021eacb(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  ulonglong uVar4;
  int iVar5;
  int *piVar6;
  
  *param_4 = 0;
  iVar1 = param_1[0x208];
  iVar5 = *param_1;
  uVar2 = 2;
  if (iVar5 != 0) {
    piVar6 = param_1 + 5;
    while (-param_1[0x207] <= param_2 - piVar6[-1]) {
      if (param_2 <= piVar6[-2] + param_1[0x207]) {
        if (((char)iVar1 != '\0') || (param_2 - piVar6[-1] <= param_1[0x206])) {
          *param_4 = 1;
          param_4[1] = *piVar6;
          uVar2 = 3;
        }
        break;
      }
      piVar6 = piVar6 + 8;
      iVar5 = iVar5 + -1;
      if (iVar5 == 0) break;
    }
  }
  uVar4 = (ulonglong)(uint)param_1[0x81];
  if (uVar4 != 0) {
    piVar6 = param_1 + uVar4 * 8 + 0x7e;
    while (-param_1[0x207] <= piVar6[-2] - param_3) {
      if (piVar6[-1] - param_1[0x207] <= param_3) {
        if (((char)iVar1 == '\0') && (param_1[0x206] <= piVar6[-2] - param_3)) {
          return;
        }
        *param_4 = uVar2;
        param_4[2] = *piVar6;
        return;
      }
      piVar6 = piVar6 + -8;
      uVar3 = (int)uVar4 - 1;
      uVar4 = (ulonglong)uVar3;
      if (uVar3 == 0) {
        return;
      }
    }
  }
  return;
}

