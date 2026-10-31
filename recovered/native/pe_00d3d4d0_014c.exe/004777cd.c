/* Ghidra pseudocode. Image: pe_00d3d4d0_014c.exe Address: 004777cd */

bool __fastcall FUN_004777cd(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  bool bVar5;
  int local_14;
  
  if (*(char *)(param_1 + 0xc) == '\0') {
    return false;
  }
  if (*(char *)(param_1 + 0xc) != -1) {
    return true;
  }
  local_14 = 0;
  if (((param_5 < param_3) || (param_3 < 1)) || (param_4 <= param_2 || param_2 < 0)) {
LAB_00477825:
    iVar4 = param_3 + 1;
    if (iVar4 < param_5 && (-2 < param_3 && (param_4 > param_2 && param_2 >= 0))) {
      if (*(char *)(param_1 + 0xc + param_4 * 0x10) == '\0') goto LAB_0047795d;
      local_14 = local_14 + 1;
    }
    bVar3 = 0 < param_2;
    bVar5 = param_2 <= param_4;
    if ((param_3 < param_5 && -1 < param_3) && (bVar5 && bVar3)) {
      if (*(char *)(param_1 + -4) == '\0') goto LAB_0047795d;
      local_14 = local_14 + 1;
    }
    bVar2 = -2 < param_2;
    bVar1 = param_2 + 1 < param_4;
    if ((-1 < param_3 && param_3 < param_5) && (bVar1 && bVar2)) {
      if (*(char *)(param_1 + 0x1c) == '\0') goto LAB_0047795d;
      local_14 = local_14 + 1;
    }
    if ((param_3 <= param_5) && (0 < param_3 && (bVar5 && bVar3))) {
      if (*(char *)(param_1 + param_4 * -0x10 + -4) == '\0') goto LAB_0047795d;
      local_14 = local_14 + 1;
    }
    if ((param_3 <= param_5) && (0 < param_3 && (bVar1 && bVar2))) {
      if (*(char *)(param_1 + param_4 * -0x10 + 0x1c) == '\0') goto LAB_0047795d;
      local_14 = local_14 + 1;
    }
    if ((-2 < param_3 && (bVar5 && bVar3)) && iVar4 < param_5) {
      if (*(char *)(param_1 + -4 + param_4 * 0x10) == '\0') goto LAB_0047795d;
      local_14 = local_14 + 1;
    }
    if ((-2 < param_3 && (bVar1 && bVar2)) && iVar4 < param_5) {
      if (*(char *)(param_1 + 0x1c + param_4 * 0x10) == '\0') goto LAB_0047795d;
      local_14 = local_14 + 1;
    }
    bVar5 = local_14 != 8;
  }
  else {
    if (*(char *)(param_1 + param_4 * -0x10 + 0xc) != '\0') {
      local_14 = 1;
      goto LAB_00477825;
    }
LAB_0047795d:
    bVar5 = true;
  }
  return bVar5;
}

