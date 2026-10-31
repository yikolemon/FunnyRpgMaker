/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 00466832 */

void __fastcall FUN_00466832(int *param_1,int param_2,int param_3,undefined4 *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 local_18;
  
  *param_4 = 0;
  iVar1 = param_1[0x208];
  iVar2 = *param_1;
  local_18 = 2;
  if (iVar2 != 0) {
    piVar3 = param_1 + 5;
    while (-param_1[0x207] <= param_2 - piVar3[-1]) {
      if (param_2 <= piVar3[-2] + param_1[0x207]) {
        if (((char)iVar1 != '\0') || (param_2 - piVar3[-1] <= param_1[0x206])) {
          *param_4 = 1;
          param_4[1] = *piVar3;
          local_18 = 3;
        }
        break;
      }
      piVar3 = piVar3 + 8;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) break;
    }
  }
  iVar2 = param_1[0x81];
  if (iVar2 != 0) {
    piVar3 = param_1 + iVar2 * 8 + 0x7e;
    while (-param_1[0x207] <= piVar3[-2] - param_3) {
      if (piVar3[-1] - param_1[0x207] <= param_3) {
        if (((char)iVar1 == '\0') && (param_1[0x206] <= piVar3[-2] - param_3)) {
          return;
        }
        *param_4 = local_18;
        param_4[2] = *piVar3;
        return;
      }
      piVar3 = piVar3 + -8;
      iVar2 = iVar2 + -1;
      if (iVar2 == 0) {
        return;
      }
    }
  }
  return;
}

